//****************************************************
//
//    Author:       Beau Shirdavani
//    Date:         11-26-2017
//    Title:        Assignment 3_4
//                  main.cpp
//
//      reverse a number using recursion
//
//****************************************************

#include <iostream>
using namespace std;
//#include "LinkedStack.h"



//****************************************************
//                                  reverseDigits(int)
void reverseDigits(int _num){
    if ( _num > 0 ){
        cout << _num % 10;
        reverseDigits( _num / 10 );
    }
}



//****************************************************
//                                              main
int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;
    reverseDigits(number);
    
    
    
    

    
    return 0;
}
