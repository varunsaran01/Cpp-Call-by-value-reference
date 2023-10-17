/*
PRN - 22070123130
Call By Refernece and Value
*/

#include <iostream>

using namespace std;

// Function to swap two numbers using call by value
void swapByValue(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    cout << "Inside swapByValue:" << endl;
    cout << "a = " << a << ", b = " << b << endl;
}

int main() {
    int num1 = 5;
    int num2 = 10;

    cout << "Before swapping:" << endl;
    cout << "num1 = " << num1 << ", num2 = " << num2 << endl;

    // Swap using call by value
    swapByValue(num1, num2);

    cout << "After swapping using call by value:" << endl;
    cout << "num1 = " << num1 << ", num2 = " << num2 << endl;

    return 0;
}

/*
OUTPUT:
Before swapping:
num1 = 5, num2 = 10
Inside swapByValue:
a = 10, b = 5
After swapping using call by value:
num1 = 5, num2 = 10
*/
