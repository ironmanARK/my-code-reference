#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<long long int> weights(n);
    string * s;
    *s = "hello";
   long long  int totalSum = 0;
    for (int i = 0; i < n; i++) {
        cin >> weights[i];
        totalSum += weights[i];
    }
    // DP array to track possible sums
    vector<bool> dp(totalSum / 2 + 1, false);
    dp[0] = true;
    for (int weight : weights) {
        for (int j = totalSum / 2; j >= weight; j--) {
            if (dp[j - weight]) {
                dp[j] = true;
            }
        }
    }
    // Find the closest possible sum to totalSum/2
    for (int i = totalSum / 2; i >= 0; i--) {
        if (dp[i]) {
            cout << totalSum - 2 * i << endl;
            break;
        }
    }

    return 0;
}