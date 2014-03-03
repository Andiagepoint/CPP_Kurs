/* 
 * File:   bernatzahlen_18.cpp
 * Author: AndiPower
 *
 * Created on 26. Februar 2014, 13:17
 */

#include <cstdlib>
#include<cmath>
#include<iostream>

using namespace std;

int auswahl, start, ende, summe = 0;
/*
 * 
 */
int main(int argc, char** argv) {
    cout << "Bitte wählen Sie aus:\n";
    cout << "1 für for Schleife\n";
    cout << "2 für while Schleife\n";
    cout << "3 für do while Schleife\n";
    cin >> auswahl;
    cout << "Bitte geben Sie das Startintervall an:\n";
    cin >> start;
    cout << "Bitte geben Sie das Ende des Intervalls an:\n";
    cin >> ende;
    
    switch(auswahl){
            case 1 : {
                for(int i=start; i<=ende;++i)
                {
                    summe += start;
                    ++start; 
                }
            }; break;
            case 2 : {
                while(start<=ende)
                {
                    summe += start;
                    ++start;
                }
            }; break;
            case 3 : {
                do 
                {
                    summe += start;
                    ++start;
                }while(start<=ende);
            }; break;
    }
    cout << "Summe =\n" << summe << "\n";
    return 0;
}

