#include <bits/stdc++.h>
using namespace std;

// Solution class to find prime numbers
class Solution {
public:
    // Function to check if a number is prime
    bool isPrime(int num) {
        // Handle edge cases
        if (num <= 1) return false;
        // Check for factors up to square root of num
        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0)
                return false;
        }
        return true;
    }

    // Function to get all primes in range [a, b]
    vector<int> getPrimes(int a, int b) {
        vector<int> primes;
        // Loop through the range from a to b
        for (int i = a; i <= b; i++) {
            // If i is prime, add to result
            if (isPrime(i))
                primes.push_back(i);
        }
        return primes;
    }
};

// Main function
int main() {
    cout << "enter first number:";
    int a, b;
    cin >> a;
    cout << "enter second number:";
    cin >> b;
    cout << endl;

    // Create Solution object
    Solution sol;
    // Get prime numbers in range [a, b]
    vector<int> primes = sol.getPrimes(a, b);

    // Print the result
    cout << "Prime numbers: ";
    for (int prime : primes)
        cout << prime << " ";
    cout << endl;

    return 0;
}
