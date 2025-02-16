#include<iostream>
using namespace std;

int fibo(int n, int memo[]) {
    if(n < 0) {
        return -1;
    } else if(n == 0) {
        return 0;
    } else if(n == 1) {
        return 1;
    } else {
        if(memo[n] == -1) {
            memo[n] = fibo(n - 1, memo) + fibo(n - 2, memo);
        }
        return memo[n];
    }
}

int main() {
    int n;
    int memo[100];
    cin >> n;
    for(int i = 0; i <= n; i++) {
        if(i == 0) {
            memo[i] = 0;
        } else if(i == 1) {
            memo[i] = 1;
        } else {
            memo[i] = -1; // Use assignment operator here instead of comparison operator
        }
    }
    int x = fibo(n, memo);
    if(x < 0) {
        cout << "invalid input";
    } else {
        cout << n;
    }
    cout << "\n";
    for(int i = 0; i <= n; i++) {
        cout << memo[i];
    }

    return 0;
}
