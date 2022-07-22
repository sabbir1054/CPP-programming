#include<bits/stdc++.h>
using namespace std;

class Example{
    
    private:
        int x;
        int y;
        int z;
        int pass;

    public:
        //Constructor should be public every time.
        // Example(int a,int b,int c){
        //     x = a;
        //     y = b;
        //     z = c;
        // } constructor not work for private data
        //For password protected we need constructor to set password
        Example(int password){
            pass = password;
        };

        void setter(int a,int p){
            if(pass==p){
                x = a;
            }else{
                cout << "password not match";
            }
        };
        int getter(int p){
            
            if(pass==p){
                return x;
            }else{
                cout << "password not match";
                return -1;
            }

        }
};


int main()
{
    Example newExample(1234);
    newExample.setter(1500,1234);

    cout << newExample.getter(134) << endl;
    /* code */
    return 0;
}
