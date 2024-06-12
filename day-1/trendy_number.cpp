#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    if(n>100 && n<999){
        int mid = (n/10) % 10;
        
        if(mid%3==0){
            cout<<"Trendy Number"<<endl;
        }else{
            cout<<"Not a Trendy Number"<<endl;
        }
    }else{
        cout<<"Invalid Number"<<endl;
    }
    return 0;
}
