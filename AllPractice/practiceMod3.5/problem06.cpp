#include<bits/stdc++.h>
using namespace std;
int main(){
    int size, sticks,sum=0;
    cin >>size >> sticks;

    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
           if (arr[i]>arr[j])
           {
               swap(arr[i], arr[j]);
           }
           
        }
        
    }
    for (int i = 0; i < sticks; i++)
    {
        sum = sum + arr[i];
    }

    cout << sum << endl;

    return 0;
}