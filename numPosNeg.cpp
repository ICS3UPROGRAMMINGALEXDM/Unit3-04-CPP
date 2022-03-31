// Copyright (c) 2022 Alex De Meo All rights reserved
//
// Created By: Alex De Meo
// Date: 02//22
// Description: Tells user if their number is positive negative or 0
#include <stdlib.h>
#include <iostream>

using std::cout;
using std::cin;
using std::endl;
// defininf colors
#define BOLDMAGENTA "\033[1m\033[35m"      /* Bold Magenta */
#define BOLDCYAN    "\033[1m\033[36m"      /* Bold Cyan */
#define BOLDYELLOW  "\033[1m\033[33m"      /* Bold Yellow */
#define BOLDWHITE   "\033[1m\033[37m"      /* Bold White */

int main() {
    int num;
    // get user number
    cout << BOLDWHITE << "Enter a number: ";
    cin >> num;
    // If statement that decides what to do with numnber
    if (num > 0) {
        cout << endl << BOLDMAGENTA << "That number is positive" << endl;
        return(0);
    } else if (num < 0) {
        cout << endl << BOLDCYAN << "That number is negative" << endl;
        return(0);
    } else {
        cout << endl << BOLDYELLOW << "That number is equal to 0"<< endl;
        return(0);
    }
}
