#include<bits/stdc++.h>
using namespace std;

void change(int *num){
    *num = 500;
}

int main(){

    int num = 10;
    change(&num);

    cout << num;

    return 0;
}