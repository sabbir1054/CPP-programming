#include<iostream>
using namespace std;
int main(){
    int distance;
    cout << "Please Input The Distance into KM :"<<endl;
    cin >> distance;

    int meter = distance * 1000;

    cout << "The distance in METER = "<< meter;


    return 0;
} 
