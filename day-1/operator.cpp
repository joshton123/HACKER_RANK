#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    if(n<0) n=n*-1;
    int first = n/1000;
    int last = n%10;
    cout<<first+last<<endl;
    return 0;
}



#include <bits/stdc++.h>
using namespace std;
int main() {
    int a , b , c;
    cin >> a >> b >> c;
    
    int revenue = a * b;
    
    int initial_profit = a*c + 100;
    
    int profit = revenue - initial_profit;
    cout << profit << endl;
    
    return 0;
}


