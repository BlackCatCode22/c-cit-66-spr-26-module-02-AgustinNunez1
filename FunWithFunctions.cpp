
#include <iostream>
using namespace std;


///Getting an integer from the user
int getAnIntFromTheUser()
{
    int num;
    cout << "enter your number: ";
    cin>> num;
    return num;

}


////Comparing two integers
void compareTwoInts(int a, int b)
{
    if (a > b)
    {
        cout << a << " is greater than " << b << endl;
    }
    else if (b > a)
    {
        cout << b << " is greater than " << a << endl;
    }
    else
    {
        cout << "Both numbers are equal to each other" << endl;
    }
}

//////The sum of two integers
int sumTwoInts(int a, int b)
{
    return a + b;
}

int main()
{
    int num1 = getAnIntFromTheUser();
    int num2 = getAnIntFromTheUser();

    compareTwoInts(num1, num2);

    int sum = sumTwoInts(num1, num2);
    cout << "The sum of the two numbers is: " << sum << endl;

    return 0;
}