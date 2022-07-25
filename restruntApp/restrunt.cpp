#include <bits/stdc++.h>
using namespace std;

class Restaurant{

    public:
        int food_item_codes[12];
        string food_item_name[12];
        int food_item_prices[12];
    protected:
        double total_tax;
    public:
        Restaurant(){
            this->total_tax = 0;
        }

        string get_food_name(int code,int num){
            
            for (int i = 0; i < num; i++)
            {
                if (this->food_item_codes[i]==code)
                {
                    return food_item_name[i];
                }
                
            }
            return 0;
        }
        int get_food_price(int code,int num){
            
            for (int i = 0; i < num; i++)
            {
                if (this->food_item_codes[i]==code)
                {
                    return food_item_prices[i];
                }
                
            }
            return 0;
        }
        
        void set_tax(int tax){
            this->total_tax += tax;
        }
       
};



//take foods info 
void take_item(int num, Restaurant *new_bill){
    for (int i = 0; i < num; i++)
    {
        string name;
        cin >> new_bill->food_item_codes[i];
        cin.ignore();
        getline(cin, name);
        new_bill->food_item_name[i] = name;
        cin >> new_bill->food_item_prices[i];
        
    }
    
}

// display food items
void display_item(int num, Restaurant *new_bill){

    cout << "\t\t\t Make Bill \t\t\t" << endl;
    cout << "\t\t_____________________________________\t\t" << endl;
    cout << "Item Code" << "\t\t" << "item Name" << "\t\t\t" << "Item Price" << endl;
    for (int i = 0; i < num; i++)
    {
        cout << new_bill->food_item_codes[i] << "\t\t\t" << new_bill->food_item_name[i] << "\t\t" << new_bill->food_item_prices[i] << endl;
    }
    
}



//make bill calculation and display Bill Summary 
void display_summary(Restaurant *new_bill, int codeArr[],int quantityArr[],int num_of_total_food,int table_no,int num_of_selected_food){

   
     //make total bill
    int total_without_tax = 0;
    
    cout << "\n\n\t\t\t"
         << "BILL SUMMARY "
         << "\t\t\t" << endl;
    cout << "\t\t"
         << "___________________________________________ "
         << "\t\t" << endl;
    cout << "Table No. : " << table_no << endl;
    cout << "Item Code"
         << "\tItem Name\t\t"
         << "Item Price\t"
         << "Item Quantity\t"
         << "Total Price"<<endl;


    for (int i = 1; i <= num_of_selected_food; i++)
    {
        int item_code =  codeArr[i];
        int quantity =  quantityArr[i];
        string item_name = new_bill->get_food_name(codeArr[i], num_of_total_food);
        int item_price = new_bill->get_food_price(codeArr[i], num_of_total_food);
        int sub_total = item_price * quantity;
    
        total_without_tax += sub_total;
    
        cout << item_code << "\t\t" << item_name << "\t" << item_price << "\t\t" << quantity << "\t\t" << sub_total<<endl;
    }

      //make tax
        double tax = double(total_without_tax)*0.05;
        double net_total = total_without_tax + tax;

    //set tax to total tex
        new_bill->set_tax(tax);

    cout << "Tax\t\t\t\t\t\t\t\t\t" <<fixed <<setprecision(2)<<tax<<endl;
    for (int i = 0; i < 100; i++)
    {
        cout << "_";
    }
    cout << endl;
    cout << "Net total\t\t\t\t\t\t\t\t" << fixed << setprecision(2) << net_total<< " Taka\n\n\n"<<endl; 
}


// Check food availability
int availability(int num,int code,Restaurant *new_bill){
    int result = 0;
    for (int i = 0; i < num; i++)
    {
        if (new_bill->food_item_codes[i]==code)
        {
            result = 1;
        }
        
    }
    return result;
}



//make ordered item list
void make_ordered_list(int num,Restaurant *new_bill){
    int table_no,num_of_selected_items,selected_code,quantity;

    cout << "\nEnter Table no : ";
    cin >> table_no;
    cout << "Enter Number of items : ";
    cin >> num_of_selected_items;

    //make selected food code and quantity array
    int food_code[num_of_selected_items];
    int food_quantity[num_of_selected_items];


    for (int i = 1; i <= num_of_selected_items; i++)
    {
        cout << "Enter Item " << i << " Code : ";
        cin >> selected_code;

        //======Error Handling======
        int checking_res = availability(num,selected_code,new_bill);
        if (checking_res==1)
        {
           food_code[i] = selected_code;
            cout << "Enter Item " << i << " Quantity : ";
           cin >> quantity;
           food_quantity[i] = quantity;
        }else{
            cout << "Food code is not valid. Enter food code again " << endl;
            i--;
            continue;
        }
          
        
    }


    // display summary function call
    display_summary(new_bill, food_code, food_quantity,num,table_no,num_of_selected_items);
}


//main function

int main()
{
    Restaurant *new_bill = new Restaurant;

    //number of item
    int numbers_of_food;
    cin >> numbers_of_food;
    //take item 
    take_item(numbers_of_food,new_bill);
    

 while (true)
 {
    //display item
    display_item(numbers_of_food, new_bill);
     //make bill
    make_ordered_list(numbers_of_food, new_bill);
 }
 

    return 0;
}





// 12
// 170
// Chicken Soup 1:2
// 260
// 171
// Chicken Corn Soup 1:2
// 200
// 172
// Thai Special Soup 1:2
// 300
// 260
// Chicken Fried Rice 1:2
// 250
// 261
// Egg Fried Rice 1:2
// 230
// 262
// Prawn Fried Rice 1:2
// 300
// 310
// Beef Mutton Kabab 1:1
// 150
// 311
// Chicken Grill 1:4
// 340
// 450
// Chicken Curry 1:3
// 550
// 451
// Beef Special Curry 1:3
// 760
// 452
// Chicken Sizzling 1:3
// 710
// 453
// Beef Sizzling 1:3
// 970
