#include<bits/stdc++.h>
using namespace std;

class Student
{
    public://Access modifier /specifier
        char name[100];
        int roll;
};

int main()
{
    Student rahim;
    strcpy(rahim.name, "MD Rahim Akbar");
    rahim.roll = 56;
    Student karim;
    strcpy(karim.name, "MD Karim Akbar");
    karim.roll = 6;
cout << rahim.name << " " << rahim.roll << endl;
    cout << karim.name << " " << karim.roll << endl;
    return 0;
}
