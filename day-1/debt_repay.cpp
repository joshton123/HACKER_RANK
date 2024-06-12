#include <bits/stdc++.h>
using namespace std;

int main() {

    float PA, RI, N, i, discount, amount, final_amount;
    
    cin >> PA >> RI >> N;
    
    i = (PA * RI * N) / 100;
    amount = i + PA;
    discount = i * 0.02f;
    final_amount = amount - discount;
    
    cout << fixed << setprecision(2);
    cout << i << endl;
    cout << amount << endl;
    cout << discount << endl;
    cout << final_amount << endl;
    

    return 0;
}
