#include<bits/stdc++.h>
using namespace std;
int main(){
    int countAr[500]={0};
    
    char inStr[100001];
    cin >> inStr;

    int len = strlen(inStr);

    for (int i = 0; i < len; i++)
    {
        int num = inStr[i];
        countAr[num]++;
    }
int min = 500;
    for (int i = 0; i < 500; i++)
    {
        
        if (countAr[i]==0&&i>96&&i<123)
        {
            
            if (min>i)
            {
                min = i;
            }
        }
       
    }
    
    
   char ch = min;

    if (min==500)
    {
        cout << "None";
    }else{
        cout<< ch <<endl;
    }
    
   


    return 0;
}