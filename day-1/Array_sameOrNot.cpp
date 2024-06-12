#include <bits/stdc++.h>

using namespace std;

int main() {
    int n1,n2;
    int a[n1],b[n2];
    int sum1=0 , sum2=0;
    cin>>n1>>n2;
    
    if(n1 != n2){
         cout<<"Not Same"<<endl;
        return 0;
    }
    
    for(int i=0;i<n1;i++){
        cin>>a[i];
        sum1 += a[i];
    }
    
    for(int i=0;i<n2;i++){
        cin>>b[i];
        sum2 += b[i];
    }
    
    if(sum1 == sum2){
        cout<<"Same"<<endl;
    }else{
        cout<<"Not Same"<<endl;
    }
    
    return 0;
}
