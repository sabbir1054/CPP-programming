#include<bits/stdc++.h>
using namespace std;
int main(){
    char str[27];
    cin >> str;
    int len = strlen(str);
    int countArr[500] = {0};


    for (int i = 0; i < len; i++)
    {
        int num = str[i];
        countArr[num]++;
    }

     for (int i = 96; i < 123; i++)
     {
        if (countArr[i]>=2)
        {
            cout << "no";
            return 0;
        }
      
     }

     cout << "yes";

     return 0;
}