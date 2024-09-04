class Solution{
public:	
	// Function returns the second largest elements
	int print2largest(int arr[], int n) {
	    // code here
	    int flag = 0, maxi = INT_MIN, max2 = INT_MIN;
	    for (int i=0; i<n; i++) {
	        if (arr[i] != arr[0]) {
	            flag++;
	            break;
	        }
	    }
	    if (n<=1 || flag==0) return -1;
	    for (int i=0; i<n; i++) {
	        maxi = max(maxi,arr[i]);
	    }
	    for (int i=0; i<n; i++) {
	        if (arr[i]>=max2 && arr[i]!=maxi) max2 = arr[i];
	    }
	    return max2;
	}
};
