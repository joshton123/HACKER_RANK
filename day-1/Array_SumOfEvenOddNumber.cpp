#include<bits/stdc++.h>
using namespace std;


int main() {
    int n;
    cin>>n;
    int arr[n];
    int sum1=0, sum2=0;
    for(int i=0 ; i<n ; i++){
        cin>>arr[i];   
        
        if(arr[i]%2==0){
            sum1 += arr[i];
        }else{
            sum2 += arr[i];
        }
        
    }
    
    cout<<"The sum of the even numbers in the array is "<<sum1<<endl;
    cout<<"The sum of the odd numbers in the array is "<<sum2<<endl;
    
    
    return 0;
}
