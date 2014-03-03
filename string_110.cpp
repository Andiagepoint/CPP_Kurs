/* 
 * File:   string_110.cpp
 * Author: AndiPower
 *
 * Created on 26. Februar 2014, 15:48
 */

#include <cstdlib>
#include<string>
#include<iostream>
#include<cstddef>

using namespace std;

string eingabe;
long z = 0, qsumme = 0, mult = 1, erg;
/*
 * 
 */
int main(int argc, char** argv) {
    cout << "Geben Sie eine Zahl als String ein:\n";
    cin >> eingabe;
    for(signed int i=eingabe.size()-1;i>=0;--i){
        erg = eingabe[i] - '0';
        qsumme += erg;
        z += erg * mult;
        mult *= 10;
    }
    cout << "z =\n" << z << "\n";
    cout << "qsumme =\n" << qsumme << "\n";
    return 0;
}

