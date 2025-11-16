#include<bits/stdc++.h>

using namespace std;

/* Copy constructor is used to copy the values of object one into another object  */

class Customers{

    public:
    string name;
    int account_no;
    double balance;

    public:
    Customers(){
        cout << "This is default constructor" << endl;
    };

    Customers(string n , int a , double b){

        name = n;
        account_no = a;
        balance = b;
    }

    void print(){

        cout << endl << "**Detail of the customer**" << endl;
        cout << name  << endl << account_no << endl << balance << endl;

    }

    Customers(Customers &B){
        name = B.name;
        account_no = B.account_no;
        balance = B.balance;
    }
    // above is copy constructor 
};

int main(){

    Customers c1("Amit" , 12345 , 5203.23);
    c1.print();
    Customers c2(c1);
    c2.print();
    Customers c3;
    c3 = c1;
    c3.print();



}