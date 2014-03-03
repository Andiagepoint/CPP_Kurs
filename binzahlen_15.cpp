/* 
 * File:   main.cpp
 * Author: AndiPower
 *
 * Created on 25. Februar 2014, 14:12
 */

#include<cstdlib>
#include<iostream>

using namespace std;
int zahl, erg;
unsigned int subtractor = 1 << 31;
/*
 * 
 */
int main(int argc, char** argv) {
    cout << "Bitte geben Sie eine ganzzahlige Zahl ein:";
    cin >> zahl;
    for(int i=0;i<=31;++i){
        if((zahl&subtractor) != 0){
            cout << "1";
        }
        else {
            cout << "0";
        }
        subtractor >>= 1;
    }
    return 0;
}

