#include <algorithm>
#include <iostream>
#include <ostream>

using namespace std;



int main () {

    string text ;

    cout << " Hi, I can reverse any word you give me, here give it a try. ";
    getline (cin, text);

reverse(text.begin(), text.end());

    cout << "Perfect, here is your text reversed: " << text  << endl ;
    return 0;
}

