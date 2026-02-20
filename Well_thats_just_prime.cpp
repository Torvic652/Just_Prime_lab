#include <iostream>
#include <vector>

using namespace std;

//calculates the prime factors of a given number
class Factorizer {
public:
    vector<int> primefactors(int n, int divisor = 2) {
        if (n == 1) {
            return {}; // Base case: no factors for 1
        }
        if (n % divisor == 0) {
            vector<int> factors = primefactors(n / divisor, divisor);
            factors.insert(factors.begin(), divisor);
            return factors;
        }
        return primefactors(n, divisor + 1);
    }
};

int main() {
    Factorizer factorizer; // instance
    int number;
    cout << "Enter a number to factor: ";
    cin >> number;

    // Call the method and store the result
    vector<int> factors = factorizer.primefactors(number);

    // Print the factors
    cout << "Prime factors: ";
    for (int factor : factors) {
        cout << factor << " x ";
    }
    cout << endl;

    return 0;
}
