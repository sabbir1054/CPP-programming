#include<bits/stdc++.h>
using namespace std;

int main() {
    int a = 100, b = 500;
    swap(a, b);
    cout << "Swap of number" << endl;
    cout << "a= " << a << " and b= " << b << endl;
    int arr[10] = {11,0,18,16,19,1, 2, 3, 4, 5};
    
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (arr[i]<arr[j])
            {
                swap(arr[i], arr[j]);
            }
            
        }
        
    }
    cout << "Shorted Array is: " <<endl;
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }
    
    
    return 0;
}