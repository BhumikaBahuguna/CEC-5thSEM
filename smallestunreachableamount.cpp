#include <iostream>
#include <vector>
using namespace std;
int findSmallestUnreachableAmount(vector<int>& coins) {
    int res = 1;  // smallest amount we can't make yet
    for (int coin : coins) {
        if (coin > res) break;
        res += coin;
    }
    return res;
}
int main() {
    vector<int> coins = {1, 2, 3};  // sorted coin denominations
    int smallest = findSmallestUnreachableAmount(coins);
    cout << "Smallest amount that cannot be formed is: " << smallest << endl;
    return 0;
}
