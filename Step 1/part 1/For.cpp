#include<bits/stdc++.h>
using namespace std;

int fib(int n) {
        if (n==1 || n==2) {
                return 1;
        }
        else {
                int prev = 1, current = 1;
                for (int i=3; i<=n; i++) {
                        int next = prev + current;
                        prev = current;
                        current = next;
                }
                return current;
        }
}

int main()
{
        int n;
        cin >> n;
        cout << fib(n);
        return 0;
}
