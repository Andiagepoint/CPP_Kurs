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
    vector<int> anzahl(10);
    
    
    while(eingabe < ende || eingabe > anfang){
        cout << "Geben Sie eine Zahl zwischen -99 und 100 ein!";
        cin >> eingabe;
        if(eingabe >= anfang && eingabe <= anfang+20){
            i_1.push_back(eingabe);
            anzahl[0] = i_1.size();
        }
        else if(eingabe > anfang+20 && eingabe <= anfang+40){
            i_2.push_back(eingabe);
            anzahl[1] = i_2.size();
        }
        else if(eingabe > anfang+40 && eingabe <= anfang+60){
            i_3.push_back(eingabe);
            anzahl[2] = i_3.size();
        }
        else if(eingabe > anfang+60 && eingabe <= anfang+80){
            i_4.push_back(eingabe);
            anzahl[3] = i_4.size();
        }
        else if(eingabe > anfang+80 && eingabe <= anfang+100){
            i_5.push_back(eingabe);
            anzahl[4] = i_5.size();
        }
        else if(eingabe > anfang+100 && eingabe <= anfang+120){
            i_6.push_back(eingabe);
            anzahl[5] = i_6.size();
        }
        else if(eingabe > anfang+120 && eingabe <= anfang+140){
            i_7.push_back(eingabe);
            anzahl[6] = i_7.size();
        }
        else if(eingabe > anfang+140 && eingabe <= anfang+160){
            i_8.push_back(eingabe);
            anzahl[7] = i_8.size();
        }
        else if(eingabe > anfang+160 && eingabe <= anfang+180){
            i_9.push_back(eingabe);
            anzahl[8] = i_9.size();
        }
        else if(eingabe > anfang+180 && eingabe <= anfang+199){
            i_10.push_back(eingabe);
            anzahl[9] = i_10.size();
        }
        else break;
        
    }   
    for(int i=0;i<10;++i){
        cout << "Im Intervall " << i << " befinden sich " << anzahl[i] << " Zahlen\n";
    }
    
    return 0;
}

