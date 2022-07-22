#include<bits/stdc++.h>
using namespace std;
// bank account class
class BankAccount
{
public:
    string account_holder;
    string address;
    int age;
    int account_number;

protected:
    int balance;
private:
    string password;
public:
    BankAccount(string account_holder,string address,int age, string password)
    {
        this->account_holder = account_holder;
        this->address = address;
        this->age = age;
        this->password = password;
        this->account_number = rand();
        this->balance = 0;
        cout << "Your account number is " << this->account_number << endl;
    }
    //show balance
    int show_balance(string password){
        if (this->password==password)
        {
            return this->balance;
        }else{
            return -1;
        }
        
    }
    // add balance
    void add_money(string password,int amount){
        if (this->password==password)
        {
            cout << "Add money successful : "<< amount <<endl;
            this->balance += amount;
        }else{
            cout << "Money not added, Password not valid" << endl;
        }
        
    }
    //withdraw balance
    void withdraw_balance(string password,int amount){
        if (this->password==password && this->balance>amount)
        {
             cout << "Withdraw money successful : "<< amount <<endl;
            this->balance -= amount;
        }else if(this->password==password && this->balance<amount){
            cout << "Not enough money " <<endl;
        }else{
            cout << "Password is incorrect" << endl;
        }
        
    }
    friend class MyCash;
};

//my cash

class MyCash{
    protected:
        int balance;
    public:
    MyCash(){
        this->balance = 0;
    }
    void add_money_from_bank(BankAccount *myAccount, string password, int amount){
        if (myAccount->password==password)
        {
            this->balance += amount;
            myAccount->balance -= amount;
            cout << "Add money from bank to my cash successful " << endl;
        }else{
            cout << "Password did not matched" << endl;
        }
        
    }
    int cash_balance(){
    return this->balance;   
    }
};

//Create account function
BankAccount* create_account(){
    string account_holder, password, address;
    int age;

    cout << "\t\t Create Account" << endl;
    cout << "\t\t --------------" << endl;
    cin >> account_holder >> address>>age >> password;

    BankAccount *myAccount = new BankAccount(account_holder,address,age,password);
    return myAccount;
}
//add balance function
void add_balance(BankAccount *myAccount){
    int amount;
    string password;
    cout << "\t\t Add money " << endl;
    cout << "\t\t ----------" << endl;
    cin >> password >> amount;

    myAccount->add_money(password, amount);
}

//withdraw money function

void withdraw_money(BankAccount *myAccount){
    int amount;
    string password;

    cout << "\t\t Withdraw Money" << endl;
    cout << "\t\t ---------------" << endl;
    cin >> password >> amount;

    myAccount->withdraw_balance(password, amount);
}
// //bank to myCash transfer

void add_from_bank(MyCash *myCash,BankAccount *myAccount){

    string password;
    int amount;
    cout << "\t\tAdd from bank" << endl;
    cout << "\t\t ------------" << endl;
    cin >> password >> amount;

    myCash->add_money_from_bank(myAccount, password, amount);
    cout << " My Cash Balance :  " << myCash->cash_balance()<<endl;
}
int main() {
    BankAccount *myAccount = create_account();

  
    

    while (true)
    {
    cout << "\t Choose Your Option" << endl;
    cout << "\t 1. Deposit Money" << endl;
    cout << "\t 2. Withdraw Money" << endl;
    cout << "\t 3. Add to My Cash  Account" << endl;
    cout << "\t 4. Exit the program" << endl;
    int option;
        cin >> option;
        if(option==1){
            add_balance(myAccount);
        }else if(option==2){
             withdraw_money(myAccount);
        }else if (option==3)
        {
             //my cash object making
            MyCash *myCash = new MyCash;
            add_from_bank(myCash, myAccount);
        }else{
            cout << "** ** Program Stop ** ** ";
            return 0;
        }

           if (myAccount->show_balance("1234")==-1)
            {
            cout << "Password not match";
            }else
            {
            cout << "Your bank balance is " << myAccount->show_balance("1234")<<endl<<endl;
             }
    }
    return 0;
}