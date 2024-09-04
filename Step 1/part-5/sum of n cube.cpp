class Solution {
  public:
    long long sumOfSeries(long long n) {
        if (n<=0) return 0;
        long long sum = n*(n+1)/2;
        return sum * sum;
    }
};
