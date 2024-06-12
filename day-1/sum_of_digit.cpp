#include<bits/stdc++.h>
using namespace std;

int sod(long long num){
    int temp=0;
    while(num>0){
        temp += num % 10;
        num = num/10;
    }
    return temp;   
}

int main() {
    long long n;
    cin>>n;
    
    int sum = sod(n);
    if(sum>9){
        sum = sod(sum);
    }
    cout<<sum<<endl; 
    return 0;
}
