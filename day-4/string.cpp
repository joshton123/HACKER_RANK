#include <bits/stdc++.h>
using namespace std;

void leftrotate(string &s, int d) {
    reverse(s.begin(), s.begin() + d);
    reverse(s.begin() + d, s.end());
    reverse(s.begin(), s.end());
}

void rightrotate(string &s, int d) {
    leftrotate(s, s.length() - d);
}

int main() {
    string str;
    int d;

    cout << "Enter the string: ";
    cin >> str;

    cout << "Enter the number of positions to rotate left: ";
    cin >> d;
    leftrotate(str, d);
    cout << "Left rotated string: " << str << endl;

    cout << "Enter the string: ";
    cin >> str;

    cout << "Enter the number of positions to rotate right: ";
    cin >> d;
    rightrotate(str, d);
    cout << "Right rotated string: " << str << endl;

    return 0;
}
