/**
 *   @file: lab5-temp.cc
 * @author: Ryan Florence
 *   @date: September, 27, 2023
 *  @brief: This program is used to determine the highest and lowest temperatures in a given time..
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <string>

using namespace std;

int main(int argc, char const *argv[]){

    double hightemp = -1000; // declares highest temperature
    double lowtemp = 1000; // declares lowest temperature
    double temp; // declares given temperatures
    
    cout << endl;
    cout << "Enter the highest and lowest temperatures of the days: " << endl; // print to enter values

    cin >> temp; // input temperature values
    while(temp != -100){
        if(temp > hightemp){ // finding highest temperature
            hightemp = temp;
        }
        if (temp < lowtemp){ // finding lowest temperature
            lowtemp = temp;
        }
        cin >> temp;
    }

        cout << endl;
        cout << "The highest temperature is: " << hightemp << " degrees" << endl; // print with highest temperature
        cout << "The lowest temperature is: " << lowtemp << " degrees" << endl; // print with lowest temperature
        cout << endl;


    return 0;
}
