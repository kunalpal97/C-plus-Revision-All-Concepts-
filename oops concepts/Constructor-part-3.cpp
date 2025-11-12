#include<iostream>

using namespace std;


class Customers{

    public:
    string customer_name;
    int account_number;
    double balance;

    public:
    Customers(){
        cout <<"This is Default Constuctor" << endl;
    }
    Customers(string customer_name , int account_number , double balance){

        this->customer_name = customer_name;
        this->account_number = account_number;
        this->balance = balance;
    }

    void print(){

        cout <<"***Details of Customers**" << endl;
        cout << "Name is : " << customer_name << endl <<"Account No is " << account_number <<  endl << "balance he has : " << balance << endl;
        cout << "***Thank You For using Our service**" << endl;
    }
};

int main(){

    Customers c1("Abhi" , 785642 , 125.3210);
    c1.print();
    Customers c2("Ankit" , 7854123 , 6321.0523);
    c2.print();
    return 0;
}