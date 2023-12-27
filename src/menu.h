#ifndef INC_2PROJETO_MENU_H
#define INC_2PROJETO_MENU_H

#include <iostream>
#include "DataParser.h"
#include <vector>
#include <unistd.h>
#include <termios.h>
using namespace std;

class menu {
    Graph<Airport> Travels;
    unordered_map<string, Airline *> airlines;
    unordered_map<string, Airport*> airports;
    public:
    menu();
    void run();
    void mainMenu();
    void menuAirports();
    int NumberofAirports();
    int NumberofFlights();
    int FlightsoutofAirport(Airport& Flightsout, int& airlines);
    void menuStatistics();
    void printMenu(vector<string> options, int size, int select);
    void nonBlockingEntrance();
    void restoreEntrace();
};


#endif //INC_2PROJETO_MENU_H
