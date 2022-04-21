/*Kavita Dholariya
Example 2: Passing by reference using pointers
*/
#include <iostream>
using namespace std;

// declared function prototype with pointer as parameters
void swap(int*, int*);

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

    // call function by passing variable addresses
    swap(&a, &b);

    cout << "\n***The Values of the numbers After swapping***" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    return 0;
}

// function definition to swap numbers
void swap(int* x, int* y) {
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}