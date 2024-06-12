#include<bits/stdc++.h>
using namespace std;


int main() {
    int n;
    cin>>n;
    
    set<int> st;
    int num;
    for(int i=0 ; i<n ; i++) {
        cin>>num;
        st.insert(num);
    }
    
    cout<<"There are "<<st.size()<<" distinct element in the array."<<endl;
    return 0;
}
