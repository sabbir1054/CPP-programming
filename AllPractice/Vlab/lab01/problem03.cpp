#include<iostream>
using namespace std;
int main(){
    int sub1, sub2, sub3, sub4, sub5;
    
    float percentage, avg, total;
    cout << "Please Input marks 01: " << endl;
    cin >> sub1;
    cout << "Please Input marks 02: " << endl;
    cin >> sub2;
    cout << "Please Input marks 03: " << endl;
    cin >> sub3;
    cout << "Please Input marks 04: " << endl;
    cin >> sub4;
    cout << "Please Input marks 05: " << endl;
    cin >> sub5;

    total = sub1 + sub2 + sub3 + sub4 + sub5;
    percentage = (total * 100) / 500;
    avg = total / 5;

    cout << "Total number is =" << total << "Percentage is =" << percentage << "Average =" << avg;

    return 0;
}