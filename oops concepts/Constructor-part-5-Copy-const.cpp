#include<iostream>

using namespace std;


class Customers{

    public:
    string name;
    int account_no;
    double balance;

    Customers(){
        cout << "This is Default Constructor" << endl;
    }

    Customers(string n , int cn , double balance){

        name = n;
        account_no = cn;
        this->balance = balance;
    }

    void print(){

        cout << endl <<"Detail of Customer : " << endl;
        cout << "Name is : " << name << endl;
        cout <<"Bank acc no :" << account_no << endl;
        cout <<"Balance it has :" << balance << endl;
    }

    Customers(Customers &K){
        name = K.name;
        account_no = K.account_no;
        balance = K.balance;
    }


};

int main(){

    Customers c;
    Customers c1("Amit" , 789456 , 1236.213);
    c1.print();
    Customers c2;
    
    c2 = c1;
    c2.print();
    Customers m(c2);
    m.print();

    

}