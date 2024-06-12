#include<bits/stdc++.h>

using namespace std;

int removeDuplicates(int arr[], int n) {
    set<int> st;
    vector<int> result;
    for (int i = 0; i < n; i++) {
        if (st.insert(arr[i]).second) {
            result.push_back(arr[i]);
        }
    }

    for (int i = 0; i < result.size(); i++) {
        arr[i] = result[i];
    }
    return result.size();
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    int k = removeDuplicates(arr, n);
    for (int i = 0; i < k; i++) {
        cout << arr[i] << endl;
    }
}
