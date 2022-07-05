#include<iostream>
using namespace std;
int main(){
    float basic_salary, d_allowance, house_rent;
    
    cout << "Please Input Your Basic Salary" << endl;
    cin >> basic_salary;

    d_allowance = basic_salary * (float(40)/float(100));
    house_rent = basic_salary * (float(20)/float(100));
    float gross_salary = basic_salary - (d_allowance + house_rent);

    cout << "Gross Salary is = " << gross_salary<< endl;
    return 0;
} 
    