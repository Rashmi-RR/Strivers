#include<iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int dig, even = 0, odd = 0;
	while (n>0) {
		dig = n%10;
		if (dig%2 == 0) {
			even += dig;
		}
		else {
			odd += dig;
		}
		n/=10;
	}
	cout << even << " " << odd << endl;
	return 0;
}
