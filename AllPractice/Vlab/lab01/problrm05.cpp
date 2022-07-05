#include<bits/stdc++.h>
using namespace std;

int main(){

    float length, width, radius;
    cout << "Please input length,width,radius :";
    cin >> length >> width >> radius;

    float are_rec = length * width;
    float area_circle = 3.1416 * pow(radius, 2);

    cout << "The area of rectangle is = " << are_rec << " and area of circle is =" << fixed << setprecision(2)<< area_circle;

}