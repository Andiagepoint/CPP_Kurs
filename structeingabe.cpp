/* 
 * File:   structeingabe.cpp
 * Author: AndiPower
 *
 * Created on 4. März 2014, 14:23
 */

#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>



using namespace std;

struct person{
    vector<string> vorname;
    vector<string> nachname;
    vector<int> alter;
};
string eingabe_vorname, eingabe_nachname;
int i, j, eingabe_alter;

/*
 * 
 */
int main(int argc, char** argv) {
    person personenangabe;
    while(i<10){
        cout << "Geben Sie den Vornamen ein:\n";
        cin >> eingabe_vorname;
        cout << "Geben Sie den Nachnamen ein:\n";
        cin >> eingabe_nachname;
        cout << "Geben Sie das Alter der Person ein:\n";
        cin >> eingabe_alter;
        personenangabe.vorname.push_back(eingabe_vorname);
        personenangabe.nachname.push_back(eingabe_nachname);
        personenangabe.alter.push_back(eingabe_alter);
        i++;        
    }
    for(int j=0;j<10;++j)
    {
        cout << "Vorname: " << personenangabe.vorname[j] << " Nachname: " << personenangabe.nachname[j] << " Alter: " << personenangabe.alter[j] << "\n";
    }
    return 0;
}

