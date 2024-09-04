void nBinaryTriangle(int n) {
    int init;
    for (int i=0; i<n; i++) {
        (i%2==0)?init = 1:init = 0;
        for (int j=0; j<i+1; j++) {
            cout << init << " ";
            init = 1-init;
        }
        cout << endl;
    }
}
