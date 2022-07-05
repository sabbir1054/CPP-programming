#include<bits/stdc++.h>
using namespace std;
int main(){
    int N, K, X, Y;
    cin >> N >> K >> X >> Y;
    int total;
    if (N>K)
    {
        total = (K * X) + ((N - K) * Y);
    }else{
        total = (N * X) ;
    }
    
    
    cout << total<<endl;
    return 0;
}