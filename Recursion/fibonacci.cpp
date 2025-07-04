#include <iostream>
using namespace std;

// Recursive function to find nth Fibonacci number
int fibonacci(int n) {
    if (n == 0)
        return 0; 
    else if (n == 1)
        return 1; 
    else
        return fibonacci(n - 1) + fibonacci(n - 2); 
}

int main() {
    int num;
    cout << "Enter position (n) to find nth Fibonacci number: ";
    cin >> num;

    cout << "Fibonacci number at position " << num << " is " << fibonacci(num) << endl;

    return 0;
} 