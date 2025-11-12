#include<iostream>

using namespace std;


// constructor is Nothing just like a method in OOPs which is used to assign the values to the variables 
// constructor does not have any return type not even void
// constructor name is same as class name 
// constructor get invoked when ever object is begin created 
// so jaise he tum ek object banao ge tumhara constructor call ho jayega 
// dikhe ga nhi but call ho jayega jiss ko hum defalut constcutor bolte hai 


// in c++ three type constructor we have default , parameterised , copy constructor 


class Car{

    public:
    string model;
    string brand;
    int year;

    public:

    Car(){
        cout <<"Default Constructor is called" << endl;
    }

    Car(string m , string b , int y ){

        model = m;
        brand = b;
        year = y;
        cout << "Parameterised Constructor is being Called " << endl;

    }

    // This is void method just printing the values 
    void print(){

        cout <<"Car brand Name : " << brand << endl;
        cout << "Model Name : " <<  model << endl;
        cout <<"Year Model : " <<  year << endl;

    }

};

int main(){

    Car c("S class" , "BMW", 2015); // This is how object of class is created and initilsed the values 
    
    // I have assign values to the variable with the help of constructor 

    c.print();


}