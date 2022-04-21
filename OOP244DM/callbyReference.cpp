/*Kavita Dholariya
This example is for the leraning perpose only*/

#include <iostream>
using namespace std;

//Function definition to swap values
//This is taking the reference of the variables as an arguments
//When ever we will call this function actual values will be modified 
void swap(int& x, int& y) {
    int temp;
    temp = x;
    x = y;
    y = temp;
}

int main()
{

    // declare variables
    int a, b;
    //promt for the user input
    cout << "Enter the first num:" << endl;
    cin >> a;
    cout << "Enter the second num:" << endl;
    cin >> b;

    cout << "***The Values of the numbers Before swapping***" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    // call function to swap numbers
    swap(a, b);

    cout << "\n***The Values of the numbers After swapping***" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    return 0;
}
