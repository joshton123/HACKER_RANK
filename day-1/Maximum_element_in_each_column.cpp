#include <bits/stdc++.h>
using namespace std;


int main() {
    int n , m;
    cin>>m>>n;
    int a[m][n];
    
    for(int i=0 ; i<m ; i++) {
        for(int j=0;j<n ;j++){
            cin>>a[i][j];
        }
    }
    
    
    for(int j = 0 ; j<n ;j++){
        int max = INT_MIN;
        for(int i = 0 ; i<m; i++){
            if(a[i][j] > max) {
                max = a[i][j];
            }
        }
        cout << max << endl;
    }
    
    
  return 0;
}