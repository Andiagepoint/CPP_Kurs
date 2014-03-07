/* 
 * File:   zinszahlung.cpp
 * Author: AndiPower
 *
 * Created on 7. März 2014, 09:24
 */

#include <cstdlib>
#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

double anfangsschulden, zinssatz_nom, rate, zinsen, tilgung, rest, zinssatz_mon;
int laufzeit;
vector<string> monate = {"Januar", "Februar", "Maerz", "April", "Mai", "Juni", "Juli",
"August", "September", "Oktober", "November", "Dezember"}; 
string dateiname("tilgungsplan.txt");
/*
 * 
 */
int main(int argc, char** argv) {

    //Definieren der Ausgangsdatei
    ofstream ausgabe(dateiname.c_str(), ios::binary|ios::out);
    if(!ausgabe){
        cerr << dateiname << " kann nicht geöffnet werden!\n";
        exit(-1);
    }
    cout << "Bitte geben Sie den Kreditbetrag ein:\n";
    cin >> anfangsschulden;
    cout << "Bitte geben Sie den Zinssatz für den Kredit an:\n";
    cin >> zinssatz_nom;
    cout << "Wie hoch soll die Rate monatlich sein:\n";
    cin >> rate;
    cout << "Bitte geben Sie die Laufzeit des Kredits in Monaten ein:\n";
    cin >> laufzeit;
    
    int cnt_monat = 0;
    int dauer = 0;
    int jahr = 2012;
    rest = anfangsschulden;
    
    ausgabe.width(14);
    ausgabe << "Zahlmonat";
    ausgabe.width(10);
    ausgabe << "Rate";
    ausgabe.width(10);
    ausgabe << "Zinsen";
    ausgabe.width(10);
    ausgabe << "Tilgung";
    ausgabe.width(10);
    ausgabe << "Rest";
    ausgabe << "\n";
    
    while(rest>0 && dauer<laufzeit){
        zinssatz_mon = zinssatz_nom/(12.00*100.00);
        zinsen = rest*zinssatz_mon;
        tilgung = rate - zinsen;
        rest = rest - tilgung;
        
        ausgabe.width(14);
        ausgabe << monate[cnt_monat] << "." << jahr;
        ausgabe.width(10);
        ausgabe.setf(ios::showpoint|ios::fixed, ios::floatfield);
        ausgabe.precision(2);
        ausgabe << rate;
        ausgabe.width(10);
        ausgabe.setf(ios::showpoint|ios::fixed, ios::floatfield);
        ausgabe.precision(2);
        ausgabe << zinsen; 
        ausgabe.width(10);
        ausgabe.setf(ios::showpoint|ios::fixed, ios::floatfield);
        ausgabe.precision(2);
        ausgabe << tilgung; 
        ausgabe.width(10);
        ausgabe.setf(ios::showpoint|ios::fixed, ios::floatfield);
        ausgabe.precision(2);
        ausgabe << rest;
        ausgabe << "\n";
        
        if(cnt_monat<11){
            cnt_monat += 1;
        }
        else { 
            cnt_monat = 0;
            jahr += 1;
        };
        dauer += 1;
    }
    
    return 0;
}

