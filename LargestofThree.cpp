//
// Created by nunez on 2/8/2026.
//

#include "LargestofThree.h"

#include <iostream>
using namespace std;

int main() {
    int int1, int2, int3;

    cout << " Give me your first number: ";
    cin >> int1;

    cout << " Give me your second number: ";
    cin >> int2;

    cout << " Give me your third number: ";
    cin >> int3;


    if (int1 >= int2)
        {
        if (int1 >= int3)
            {
            cout << " The largest number out of the three is: " << int1 << endl;
        }
        else
            {
            cout << " The largest number out of the three is: " << int2 << endl;
        }
    }
    else
        {
        if (int2 >= int3) {
            cout << " The largest number out of the three is: " << int2 << endl;

        }
        else {
            cout << " The largest number out of the three is: " << int3 << endl;
        }
    }



return 0;
}