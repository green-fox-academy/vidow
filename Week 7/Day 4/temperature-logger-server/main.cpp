#include <iostream>
#include <string>
#include <vector>
#include <stdlib.h>
#include <conio.h>
#include <algorithm>
#include <sstream>
#include <iomanip>
#include "util.h"

#include "SerialPortWrapper.h"

using namespace std;

void Command_list();
void Open_port();
void StartStop();
void Stop_port();
void Command_list(){

    cout << "Temperature Logger Application\n"
    "========================================\n"
    "Commands: \n"
    "h\tShow command list\n"
    "o\tOpen port\n"
    "s\tStart logging / Stop logging\n"
    "c\tClose port\n"
    "l\tList after error handling\n"
    "e\tExit from the program\n"
    "========================================\n"
    "Please select from the above menu points\n"
    "========================================\n" << endl;
}

void Open_port(SerialPortWrapper *serial){

    serial->openPort();

    cout << "\tPort opened." << endl;
}

void StartStop(SerialPortWrapper *serial, vector<string> *_log){

    string _line;

    while(1){
        serial->readLineFromPort(&_line);
        if (_line.length() > 0){
        cout << "\t" << _line << endl;
        _log->push_back(_line);
        }
        if(_kbhit()) {
            if (_getch() == 's'){
                break;
            }
        }
    }
}

void Stop_port(SerialPortWrapper *serial){

    serial->closePort();

    cout << "\tPort closed" << endl;
}

int main()
{
    int a = 0;
    int temperature;
    string date, time;
    string line;
    string getinput;
    vector<string> log;
    vector<string> temp;
    vector<string> ports = SerialPortWrapper::listAvailablePorts();
    SerialPortWrapper *serial = new SerialPortWrapper("COM3", 115200);
    cout << "Number of found serial ports: " << ports.size() << endl << endl;
    for (unsigned int i = 0; i < ports.size(); i++) {
        cout << "\tPort name: " << ports.at(i) << endl << endl;
    }

    Command_list();

    while(getinput != "exit"){
        cin >> getinput;

        if(getinput == "h"){
            Command_list();
        }

        if(getinput == "o"){
            Open_port(serial);
        }

        if(getinput == "s"){
            StartStop(serial, &log);
        }

        if(getinput == "c"){
            Stop_port(serial);
        }

        if(getinput == "l"){

            for (int i = 0; i < log.size(); i++) {
                try {
                    line = log.at(i);
                    cout << "\t" << line << endl;
                    util::temperature_record rec = util::parseLine(log.at(i));
                    cout << "\tValid data" << endl;
//                        << "temperature: " << rec.temperature << ", "
//                        << "timestamp: " << rec.timestamp << ")" << endl;
                }
                catch (util::ParserException *exc) {
                    cout << "\tInvalid data" << endl;
                }
            }
        }
        if(getinput == "e"){
            exit(0);
        }
    }

    return 0;
}

