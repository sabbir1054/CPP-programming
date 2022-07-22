#include<bits/stdc++.h>
using namespace std;

class Parent{
 private:
     int taka;

public:
Parent(int tk){
    taka = tk;
}

friend class AbburBondhu;//friend class
friend void tell(Parent *pt);//friend function
};

//friend class
class AbburBondhu{
    public:
    void tellSecret(Parent *ptr){
        cout << ptr->taka<<endl;
    }
};


//friend function

void tell(Parent *pt){
    cout << pt->taka << endl;
}


int main()
{
    Parent pt(1500);

    AbburBondhu bondhu;
    bondhu.tellSecret(&pt);

    tell(&pt);
    return 0;
}
