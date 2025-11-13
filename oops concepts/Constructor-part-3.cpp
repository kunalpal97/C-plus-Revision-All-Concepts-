#include<iostream>

using namespace std;

// remember that once you have created a constructor by youself then 
// tumhare class mai..default constructor nhi banega ya milega always remeber that okay 

// what are the use case of the constructor ? does it is only use to initilse the values? or else it is use for 
// 

class Customers{

    public:
    string customer_name;
    int account_number;
    double balance;

    public:
    // Customers(){
    //     cout <<"This is Default Constuctor" << endl;
    // }

    // Here is the concept of customer overloading 
    // when we have two or more than two constructor 
    // so one thing is that constructor have same name as class name 
    // if two or more than two constructor there parameter are different so that is called overloading constructor

    Customers(){

        customer_name = "Kangal";
        account_number = 999999999;
        balance = 0.000000001;
    }
    
    Customers(string customer_name , int account_number , double balance){
        // this pointer is used to remember the address of the object which has called here so thats why we use it
        this->customer_name = customer_name;
        this->account_number = account_number;
        this->balance = balance;
    }

    // zaruri nhi jitna variables banaye to utne he param ke values ko pass karna padta hai 
    // sometimes you can choose to pass the lesser values as well
    Customers(string name , int n ){
        customer_name = name;
        account_number = n;
        balance = 25.12;
    }

    // inline constructor

    inline Customers(string a , int b , double c) : customer_name(a) , account_number(b) , balance(c){
        
    }

    void print(){

        cout << endl <<"***Details of Customers**" << endl;
        cout << "Name is : " << customer_name << endl <<"Account No is " << account_number <<  endl << "balance he has : " << balance << endl;
        cout << "***Thank You For using Our service**" << endl;
    }
};

int main(){

    Customers c1("Abhi" , 785642 , 125.3210);
    c1.print();
    Customers c2("Ankit" , 7854123 , 6321.0523);
    c2.print();
    Customers c3("jitesh" , 7854123);
    c3.print();
    Customers c4;
    c4.print();
    return 0;
}