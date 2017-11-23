#include <iostream>
#include <string>
#include <vector>
#include <stdlib.h>
#include <conio.h>

#include "SerialPortWrapper.h"

using namespace std;

int main()
{
                int a = 0;
    string getinput;
    vector<string> log;
    vector<string> ports = SerialPortWrapper::listAvailablePorts();
    cout << "Number of found serial ports: " << ports.size() << endl << endl;
    for (unsigned int i = 0; i < ports.size(); i++) {
        cout << "\tPort name: " << ports.at(i) << endl << endl;
    }

    // connection

        SerialPortWrapper *serial = new SerialPortWrapper("COM3", 115200);
//        serial->openPort();
        string line;
//        while(1){
//        serial->readLineFromPort(&line);
//        if (line.length() > 0){
//        cout << line << endl;
//        }
//        }
//        serial->closePort();

            cout << "     Temperature Logger Application\n"
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



            while(getinput != "exit"){
                cin >> getinput;

                if(getinput == "h"){
                    cout << "     Temperature Logger Application\n"
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

                if(getinput == "o"){
                    serial->openPort();
                    //string line;
                    for (unsigned int i = 0; i < ports.size(); i++) {
                    cout << "\tPort name: " << ports.at(i) << endl;
                    }
                }

                if(getinput == "s"){
                    while(1){
                        serial->readLineFromPort(&line);
                        if (line.length() > 0){
                        log.push_back(line);
                        cout << line << endl;
                        }
                        if(_kbhit()) {
                            if (_getch() == 's'){
                                break;
                            }
                        }
                    }
                }
                if(getinput == "c"){
                    serial->closePort();
                    string line;
                    for (unsigned int i = 0; i < ports.size(); i++) {
                    cout << "\t" << ports.at(i) << " Closed" << endl;
                    }
                }

                if(getinput == "l"){
                for (unsigned int i = 0; i < log.size(); i++) {
                cout << log.at(i) << endl;
                }
                }
                if(getinput == "e"){
                    exit(0);
                }
            }

    return 0;
}
