#include <bits/stdc++.h>?
using namespace std;

int main(){
    int x;
    cin >> x;
    cout << abs(x)/(abs(x)-1) + 11/(x*x - 1) << endl;
    cout << sqrt(x + 1) + 89/sqrt(x) << endl;
    cout << x/(sin(x/2)*sin(x/2) - 1) + sqrt(x) << endl;
    
    return 0;
}