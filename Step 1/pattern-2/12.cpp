void numberCrown(int n) {
    int s = 2*(n+1);
    int sp = s/2;
    for (int i=0; i<n; i++) {
        for (int j=0; j<=i; j++) {
            cout << j+1 << " ";
        }
        for (int j=0; j<s; j++) {
            cout << " ";
        }
        for (int j=i; j>=0; j--) {
            cout << j+1 << " ";
        }
        s-=sp;
        cout << endl;
    }
}
