#include <iostream>
using namespace std;

// Recursive function to calculate factorial
int factorial(int n) {
    if (n == 0 || n == 1)
        return 1; // base case
    else
        return n * factorial(n - 1); 
}

int main() {
    int num;
    cout << "Enter a number to find factorial: ";
    cin >> num;

    cout << "Factorial of " << num << " is " << factorial(num) << endl;

    return 0;
} 