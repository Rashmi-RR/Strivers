int sumOfAllDivisors(int n){
	// Write your code here.	
	int sum = 0;
	for (int i=1; i<=n; i++) {
		int s = 0;
		for (int j = 1; j <= sqrt(i); j++) {
            if (i % j == 0) {
                s += j;
                if (i / j != j) s += i / j;
            }
        }
		sum += s;
    }
	return sum;
}
