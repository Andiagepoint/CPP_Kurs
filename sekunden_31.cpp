/* 
 * File:   sekunden.cpp
 * Author: AndiPower
 *
 * Created on 7. März 2014, 16:27
 */

#include <cstdlib>
#include <iostream>

using namespace std;

int dauerInSekunden(int stunden, int minuten, int sekunden);

/*
 * 
 */
int main(int argc, char** argv) {
    int stunden, minuten, sekunden, sekunden_gesamt;
    cout << "Bitte geben Sie die Zeit in Stunden, Minuten und Sekunden ein:\n";
    cin >> stunden >> minuten >> sekunden;
    sekunden_gesamt = dauerInSekunden(stunden, minuten, sekunden);
    cout << stunden << " Stunden " << minuten << " Minuten " << sekunden << " Sekunden " << " sind ingesamt: " << sekunden_gesamt << " Sekunden" << endl;
    return 0;
}

int dauerInSekunden(int stunden, int minuten, int sekunden)
{
    int erg;
    erg = 3600*stunden+60*minuten+sekunden;
    return erg;
}

