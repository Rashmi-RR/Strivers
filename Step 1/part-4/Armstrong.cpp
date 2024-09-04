#include <iostream.h>
using namespace std 


bool checkArmstrong(int n){
	int org = n, temp = n, newno = 0, dig=0;
 	while (temp!=0) {
		temp/=10;
		dig++;
	}
	for (int i=0; i<dig; i++) {
		int x = n%10;
		newno += pow(x,dig);
		n/=10;
	}
	return org == newno;
}
