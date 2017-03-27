//
//  main.cpp
//  Hex - a program that uses the hex manipulator to display hexadecimal values
//
//  Created by Carrie Ward on 3/26/17.
//  Copyright © 2017 Carrie Ward. All rights reserved.
//

#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, const char * argv[]) {
    
    // create variables
    int num1, num2, hex1, hex2, MAXCOUNT, MAXHEX;
    
    // request user input
    cout << "Enter an integer value: " << endl;
    
    // store user input
    cin >> num1;    // decimal value
    hex1 = num1;    // store original decimal value for later hex output
    MAXCOUNT = num1 + 10;
    MAXHEX = hex1 + 10;
    num2 = num1;    // store original decimal value for "other" decimal output
    hex2 = num1;    // store original decimal value for "other" hex output
    
    // display the next 10 decimal values
    cout << "\nDecimal values: " << endl;
    while (num1 < MAXCOUNT){
        cout << num1 << " ";
        num1++;     // increment num1
    }
    
    // display the hexadecimal values
    cout << "\n\nhexadecimal Values: " << endl;
    while (hex1 < MAXHEX){
        cout << showbase << hex << hex1 << " ";
        hex1++;
    }
    
    // other display options
    cout << "\n\nDECIMAL    HEXADECIMAL"
         << "\n-------    -----------\n";
    
    for(num2; num2 < MAXCOUNT; num2++){
        cout << setw(5) << num2 << "\n";
        
        for(hex2; hex2 < MAXHEX; hex2++)
            cout << setw(5) << showbase << hex << hex2 << "\n";
    }
    
    cout << "\n\n";
    return 0;
}
