#include <bits/stdc++.h>
using namespace std;

int countRecur(vector<int>& coins, int n, int sum) {
  

    if (sum == 0) return 1;
    if (sum < 0 || n == 0) return 0;


    return countRecur(coins, n, sum - coins[n - 1]) + 
            countRecur(coins, n - 1, sum);
}

int count(vector<int> &coins, int sum) {
    return countRecur(coins, coins.size(), sum);
}

int main() {
    vector<int> coins = {1, 2, 3};
    int sum = 5;
    cout << count(coins, sum);
    return 0;
}
