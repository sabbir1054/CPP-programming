#include<bits/stdc++.h>
using namespace std;
int main(){
    char str[100001];
    cin >> str;
    int len = strlen(str);
    for (int i = 1; i <=len ; i++)
    {
        if (i%2!=0)
        {
            cout << str[i - 1];
        }
        
    }
    
    return 0;
}