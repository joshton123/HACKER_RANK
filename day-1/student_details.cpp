#include <bits/stdc++.h>
using namespace std;

int main() {
    string Name;
    int Age;
    float CGPA;
    char Grade;

    getline(cin, Name);
    cin >> Age >> CGPA >> Grade;
    int a = CGPA*100;
    CGPA = a/100.0;
    cout << "Name: " << Name << endl;
    cout << "Age: " << Age << endl; 
    cout << fixed << setprecision(2);
    cout << "CGPA: " <<  CGPA<< endl;
    cout << "Grade: " << Grade << endl;
    
    return 0;
}
