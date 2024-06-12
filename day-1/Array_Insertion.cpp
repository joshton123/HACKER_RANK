#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    int arr[100];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    int position, element;
    cin >> position >> element;
    
    if (position < 0 || position > n) {
        cout << "Invalid Input" << endl;
    } else {
        for (int i = n; i >= position; i--) {
            arr[i] = arr[i - 1];
        }
        
        arr[position - 1] = element;
        
        cout << "Array after insertion is" << endl;
        for (int i = 0; i <= n; i++) {
            cout << arr[i] << endl;
        }
    }
    
    return 0;
}
