class Solution
{
public:
    int largest(vector<int> &arr, int n)
    {
        int key = arr[0];
        for (int i=0; i<n; i++) {
            if (arr[i]>=key) key=arr[i];
        }
        return key;
    }
};
