#include<bits/stdc++.h>

using namespace std;

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

        cout << "**Detail of the customer**" << endl;
        cout << name  << endl << account_no << endl << balance << endl;

    }
};

int main(){

    Customers c1("Amit" , 12345 , 5203.23);
    c1.print();
    Customers c2(c1);
    c2.print();



}