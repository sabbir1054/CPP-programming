#include<bits/stdc++.h>
using namespace std;
int main(){
    char c;
    cin >> c;


    switch (c)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    cout << "vowel";
        break;
    
    default:
    cout << "consonant";
        break;
    }
    
    return 0;
}