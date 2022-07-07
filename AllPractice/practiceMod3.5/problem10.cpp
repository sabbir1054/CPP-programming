#include<bits/stdc++.h>
using namespace std;
int main(){
    char str1[51], str2[51];
    cin >> str1 >> str2;
    int len = strlen(str1) + strlen(str2);

    for (int i = 1,j=0,k=0; i <= len; i++)
    {
        if (i%2!=0)
        {
            cout << str1[j];
            j++;
        }else{
            cout << str2[k];
            k++;
        }
        
    }
    
    
    return 0;
}