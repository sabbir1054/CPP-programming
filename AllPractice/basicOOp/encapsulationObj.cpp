#include<bits/stdc++.h>
using namespace std;

class Student {

    public:
        char name[20];
        void printRoll(int roll){
            
            cout <<name << " Your roll is " << roll;
        }
    protected://accessible by child and friend
        string dob;
    private://accessible by only friend
        string father;

};

int main()
{
    Student rahim;
    strcpy(rahim.name, "Md Rahim Khan");
    rahim.printRoll(100);
    /* code */
    return 0;
}
