#include<bits/stdc++.h>
using namespace std;

class Example{
    public:
        int x;
        int y;
        int z;
    //Constructor
    Example (int a, int b, int c){
        x = a;
        y = b;
        z = c;
    }
};

int main()
{
    Example newExample(10, 20, 30);

    cout << newExample.x << " " << newExample.y << " " << newExample.z << endl;
    /* code */
    return 0;
}
