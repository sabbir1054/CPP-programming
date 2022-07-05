#include<bits/stdc++.h>
using namespace std;
int main(){
    int num;
    cin >> num;
    if (num>=15)
    {
        int count = num / 15;
        cout << (num * 800) - 200*count;
    }else{
        cout << num * 800;
    }
    
    return 0;
}