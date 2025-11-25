#include<iostream>

using namespace std;

// static data members ?
// thet are the attributes of the classes and class member 
// they are the variables which are used to in class to initilze the class variables and these are also
// know as the proeperties of the class which we use it 
// it is declear using static key words 
// static keywords are the attributes of class and class member

// just like static data members we have static member function hota hai


class Customer{

    // access modifier 
    // public:

    // data member 
    string name;
    int acc_no;
    int balance;
    static int TotalCustomer; // this is static data member of the whole class 
    // static data member can be accessible with out and object 
    // condition ye hai ki sirf wo public mai...declear ho that's it

    public:
    // parameterised constructor 
    Customer(string n , int a , int b){
        name = n;
        acc_no = a;
        balance = b;
        TotalCustomer = TotalCustomer + 1;

    }

    // copy constructor

    Customer(Customer &obj){
        name = obj.name;
        acc_no = obj.acc_no;
        balance = obj.balance;
        TotalCustomer = obj.TotalCustomer;

    }

    // int Customer :: TotalCustomer = 0;

    static void AccessStaticMember(){

        cout <<"Static data Member func: " << TotalCustomer << endl;
    }


    // methods or functions?

    void CustomerDetails(){

        cout << endl << "Name of Customer : " << name << endl;
        cout <<"Account No : " << acc_no << endl;
        cout <<"Balance is : " << balance << endl;
        cout << "Total customer are : " << TotalCustomer << endl;
    }

    void totalCustomers(){
        
        cout << TotalCustomer << endl;
    }


    

};

int Customer :: TotalCustomer = 0;  // this where we can assign the values to the variables 
// outside the class 


int main(){

    Customer c1("Kunal" , 452367 , 1200);

    c1.CustomerDetails();

    Customer c2("Rohit" , 563242 , 145222);
    
    c2.CustomerDetails();

    Customer c3("Hemant" , 4523 , 4523);

    c3.CustomerDetails();

    Customer c4(c3);

    c4.CustomerDetails();
    // c4.totalCustomers();
    // Customer::totalCustomers(); error can not call member function void 

    Customer::AccessStaticMember();

    // Customer :: TotalCustomer = 105; total Count Declear as Private to ye error dega idhar pe 
    // c4.totalCustomers();



}