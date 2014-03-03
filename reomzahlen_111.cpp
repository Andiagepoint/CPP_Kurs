/* 
 * File:   reomzahlen_111.cpp
 * Author: AndiPower
 *
 * Created on 26. Februar 2014, 16:50
 */

#include <cstdlib>
#include<iostream>
#include<string>

using namespace std;

string zeichenvorrat("IVXLCDM");
int zahl;
int rest_M, rest_D, rest_C, rest_L, rest_X, rest_V, anz;
/*
 * 
 */
int main(int argc, char** argv) {
    cout << "Bitte geben Sie eine ganze Zahl ein:";
    cin >> zahl;
    
    //1000er
    anz = zahl / 1000;
    rest_M = zahl % 1000;
    if(anz != 0){
    for(int i=0;i<anz;++i)
        {
            cout << zeichenvorrat.at(6);
        }
    }
    
    //500er
    anz = rest_M % 500;
    if(anz > 400){
        cout << zeichenvorrat.at(4) << zeichenvorrat.at(6);
        rest_D = rest_M % 900;
    }
    else if(anz == 0)
    {
        cout << zeichenvorrat.at(5);
        rest_D = rest_M % 500;
    }
    //100er
    anz = rest_D / 100;
    if(anz > 3){
        cout << zeichenvorrat.at(4) << zeichenvorrat.at(5);
    }
    else {
        for(int i=0;i<anz;++i)
        {
            cout << zeichenvorrat.at(4);
        }
    }
    rest_C = rest_D % 100;
    
    //50er
    anz = rest_C % 50;
    if(anz > 40){
        cout << zeichenvorrat.at(2) << zeichenvorrat.at(4);
        rest_L = rest_C % 90;
    }
    else if(anz > 0)
    {
        cout << zeichenvorrat.at(3);
        rest_L = rest_C % 50;
    }
    
    //10er
    anz = rest_L / 10;
    if(anz > 3){
        cout << zeichenvorrat.at(2) << zeichenvorrat.at(3);
        rest_X = rest_L % 40;
    }
    else {
        for(int i=0;i<anz;++i)
        {
            cout << zeichenvorrat.at(2);
        }
        rest_X = rest_L % 10;
    }
    
    //5er
    anz = rest_X % 5;
    if(anz > 3){
        cout << zeichenvorrat.at(0) << zeichenvorrat.at(2);
        rest_V = rest_X % 9;
    }
    else if(anz > 0)
    {
        cout << zeichenvorrat.at(1);
        rest_V = rest_X % 5;
    }
    
    //1er
    anz = rest_V / 1;
    if(anz > 3){
        cout << zeichenvorrat.at(0) << zeichenvorrat.at(1);
    }
    else {
        for(int i=0;i<anz;++i)
        {
            cout << zeichenvorrat.at(0);
        }
    }
        
    
    
    return 0;
}

