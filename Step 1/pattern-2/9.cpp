void nStarDiamond(int n) {
    for (int i=0; i<n; i++) {
        for (int j=0; j<n-i-1; j++) {
            cout << " ";
        }
        for (int j=0; j<2*i+1; j++) {
            cout << "*";
        }
        cout << endl;
    }
    for (int i=n; i>0; i--) {
        for (int j=0; j<n-i; j++) {
            cout << " ";
        }
        for (int j=0; j<2*i-1; j++) {
            cout << "*";
        }
        cout << endl;
    }
}
