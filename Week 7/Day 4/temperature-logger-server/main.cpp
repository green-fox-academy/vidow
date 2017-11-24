#include <iostream>
#include <string>
#include <vector>
#include <stdlib.h>
#include <conio.h>
#include <algorithm>
#include <sstream>
#include <iomanip>

#include "SerialPortWrapper.h"

using namespace std;

void Command_list();
void Open_port();
void StartStop();
void Stop_port();

struct temperature_record {
	long timestamp;
	int temperature;
};

temperature_record parseString(string _line) {
	int temperature;

	istringstream lineStream(_line);
	tm parsedDateTime;
	lineStream >> get_time(&parsedDateTime, "%Y.%m.%d %H:%M:%S") >> temperature;
	if (lineStream.fail()) {
		throw "Invalid string format!";
	}


	if (-273 > temperature || 1000 < temperature) {
		throw "Temperature is out of range!";
	}

	long timestamp = mktime(&parsedDateTime);

	temperature_record rec;
	rec.temperature = temperature;
	rec.timestamp = timestamp;
	return rec;
}




void Command_list(){

    cout << "     Temperature Logger Application\n"
    "=================void StartStop()=======================\n"
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
//    for (unsigned int i = 0; i < ports.size(); i++) {
//
//    }
    cout << "\tPort opened." << endl;

}

void StartStop(SerialPortWrapper *serial, vector<string> *_log){

    string _line;

    while(1){
        serial->readLineFromPort(&_line);
        if (_line.length() > 0){
        cout << "\t" << _line << endl;
        }
        try{
            temperature_record record = parseString(_line);

            stringstream ss;
            ss << record.temperature;
            string temp2 = ss.str();
            ss << record.timestamp;
            string temp1 = ss.str();
            string temp3 = temp1 + temp2;

            _log->push_back(temp3);
        }
        catch (const char *exception){
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
    string line;
//    for (unsigned int i = 0; i < ports.size(); i++) {
//
//    }
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

            for (unsigned int i = 0; i < log.size(); i++) {
                cout << "\t" << log.at(i) << endl;
            }
        }
        if(getinput == "e"){
            exit(0);
        }
    }

    return 0;
}

