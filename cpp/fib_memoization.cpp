//Write a function 'fib(n)' that takes in a number as an argument.
//The function should return the n-th number of the Fibonacci sequence.

#include <iostream>
using namespace std;

int fib(int n) {
    if (n <= 2) {
        return 1;
    }
    return fib(n-1) + fib(n-2);
}

int main() {
    cout << fib(10) << endl;
    return 0;
}