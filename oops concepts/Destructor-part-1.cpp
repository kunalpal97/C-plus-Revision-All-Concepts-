#include<iostream>

using namespace std;

class Customer{

    public:
    string name;
    int *age;

    Customer(){

        name = "Abhi";
        age = new int;
        *age = 14;;
        cout <<"Constructor is called"<<endl;
    }

    ~Customer(){
        delete age;
        cout <<"Destructor is called" << endl;
    }
};


int main(){

    Customer c1;

}