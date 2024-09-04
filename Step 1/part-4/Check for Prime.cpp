bool isPrime(int n)
{
	int flag = 0;
	if (n<=1) flag =1;
	for (int i=2; i<=sqrt(n); i++) {
		if (n%i==0){
			flag=1;
			break;
		}
	}
	return (flag==0);
}
