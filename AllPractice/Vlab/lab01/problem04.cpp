#include<iostream>
using namespace std;

int main(){
    double fahrenheit;
    cout << "Please input Temperature in Fahrenheit :";
    cin >> fahrenheit;

    float celsius = (fahrenheit - 32) * 5 / 9;
    cout << "The temperature in Celsius =" << celsius;
    return 0;
}