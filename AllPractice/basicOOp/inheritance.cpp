#include<bits/stdc++.h>
using namespace std;
//Inheritance means উত্তরাধীকারী 

class Parents{
    public:
        int x;
    protected:
        int y;
    private:
        int z;

    //Constructor
    public:
    Parents(int a,int b,int c){
        x = a;
        y = b;
        z = c;
    }
};

            //here public means Parents এর পাবলিক ডাটা চাইল্ড এর কাছেও পাবলিক থাকবে
class Child:public Parents{
    public:
        int xx;
    
    Child(int aa,int a,int b,int c):Parents(a,b,c){
        xx = aa;
    }

    void tellMe(){
        cout << "Protected value : " << y;
    }
};

int main()
{
    Parents pt(10, 20, 30);
    Child ch(100, 10, 20, 30);
    ch.tellMe();
    /* code */
    return 0;
}
