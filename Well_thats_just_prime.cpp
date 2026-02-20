#include <iostream>
#include <vector>

using namespace std;

//calculates the prime factors of a given number
class Factorizer {
public:
    vector<int> primefactors(int n) {
        vector<int> factors; // Declare the vector inside the method

        for (int i = 2; i <= n; i++) {
            while (n % i == 0) {
                factors.push_back(i);
                n /= i;
                cout << i << " ";
            }
        }
        return factors; // Return the vector of factors
    }
};

int main() {
    Factorizer factorizer; // instance
    int number;
    cout << "Enter a number to factor: ";
    cin >> number;
    factorizer.primefactors(number); // Call the method correctly
    return 0;
}
