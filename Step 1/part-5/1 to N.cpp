vector<int> printNos(int x) {
    // Write Your Code Here
    if (x<=0) return vector<int>();
    vector<int> result = printNos(x-1);
    result.push_back(x);
    return result;
}

// Website shifted to GFG from CodingNinjas for some weird reason

class Solution{
    public:
    void printNos(int N)
    {
        if (N<=0) return;
        printNos(N-1);
        cout << N << " ";
    }
};
