#include<bits/stdc++.h>
using namespace std;

int main() {
    
    int arr[10] = {11,14,18,16,19,1, 2, 3, 4, 5};
    int mn = arr[0];
    int mx = arr[0];
    for (int i = 0; i < 10; i++)
    {
        mn = min(mn, arr[i]);
        mx = max(mx, arr[i]);
    }
    cout << "Minimum of  Array is: "<<mn <<endl;
    cout << "Maximum of  Array is: "<<mx <<endl;
    
    
    
    return 0;
}