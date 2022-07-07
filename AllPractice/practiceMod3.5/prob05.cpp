#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,max=0,res=1;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int count = 0;
        int num = i;
        while (num%2==0)
        {
            count++;
            num = num / 2;
        }
        if (max<count)
        {
            max = count;
            res = i;
        }
        
    }
    cout<< res;
    return 0;
}