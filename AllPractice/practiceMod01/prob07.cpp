#include<bits/stdc++.h>
using namespace std;
int main(){
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if (a*b>c*d)
    {
        cout << a * b;
    }else{
        cout << c * d;
    }
    
    return 0;
}