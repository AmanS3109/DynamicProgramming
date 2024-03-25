//Write a function 'fib(n)' that takes in a number as an argument.
//The function should return the n-th number of the Fibonacci sequence.

#include <iostream>
using namespace std;

// int fib(int n) {
//     if (n <= 2) {
//         return 1;
//     }
//     return fib(n-1) + fib(n-2);
// }

// int main() {
//     cout << fib(10) << endl;
//     return 0;
// }

//memoization

// Function to calculate the nth Fibonacci number
#include <unordered_map>

int fib(int n, std::unordered_map<int, int>& memo) {
  // Base cases
  if (n <= 2) {
    return 1;
  }

  // Check if result is already in memo
  if (memo.find(n) != memo.end()) {
    return memo[n];
  }

  // Calculate and store result in memo
  int result = fib(n - 1, memo) + fib(n - 2, memo);
  memo[n] = result;
  return result;
}

int main() {
  // Create an empty memo map
  unordered_map<int, int> memo;

  // Calculate and print the 6th Fibonacci number
  int n = 50;
  int fib_n = fib(n, memo);
  cout << "The " << n << "th Fibonacci number is: " << fib_n << endl;

  return 0;
}