#include <iostream>
#include <vector>
using namespace std;

double find_probability(int n) {
    if (n == 1) {
        return 1.0; // Only one person, so they will definitely get their own seat.
    }
    
    vector<double> dp(n + 1, 0.0);
    dp[1] = 1.0; // Base case: the first person always gets their own seat.

    for (int i = 2; i <= n; i++) {
        dp[i] = 1.0 / i + (i - 2) * dp[i - 1] / i;
    }
    
    return dp[n];
}

int main() {
    int n;
    cout << "Enter the number of passengers : ";
    cin >> n;
    
    double probability = find_probability(n);
    cout << "The probability that the " << n << "th person gets their own seat is: " << probability << std::endl;
    
    return 0;
}
