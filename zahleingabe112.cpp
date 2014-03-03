/* 
 * File:   zahleingabe112.cpp
 * Author: AndiPower
 *
 * Created on 3. März 2014, 18:09
 */

#include <cstdlib>
#include <vector>
#include <iostream>


using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    const int anfang = -99;
    const int ende  = 100;
    long eingabe = 0;
    int i_1_num, i_2_num, i_3_num, i_4_num, i_5_num , i_6_num, i_7_num, i_8_num;
    int i_9_num, i_10_num;
    vector<float> i_1;
    vector<float> i_2;
    vector<float> i_3;
    vector<float> i_4;
    vector<float> i_5;
    vector<float> i_6;
    vector<float> i_7;
    vector<float> i_8;
    vector<float> i_9;
    vector<float> i_10;
    
    
    while(eingabe < ende || eingabe > anfang){
        cout << "Geben Sie eine Zahl zwischen -99 und 100 ein!";
        cin >> eingabe;
        if(eingabe > anfang && eingabe < anfang+20){
            i_1.push_back(eingabe);
            i_1_num = i_1.size();
        }
        else if(eingabe > anfang+20 )
        
    }   
    
    
    return 0;
}

