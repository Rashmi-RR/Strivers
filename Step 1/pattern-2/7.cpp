void nStarTriangle(int n) {
    for (int i=1; i<=n; i++) {
        for (int j=1; j<=n-i; j++) {
            cout << " ";
        }
        for (int j=1; j<2*i; j++) {
            cout << "*";
        }
        cout << endl;
    }
}
