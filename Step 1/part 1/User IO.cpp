#include<iostream>
using namespace std;

int main() {
	// Write your code here
	char l;
	cin >> l;
	if (l>='A' && l<='Z') cout << 1;
	else if (l>='a' && l<='z') cout << 0;
	else cout << -1;
	return 0;
}
