#include<iostream>

using namespace std;


class Car{

    public:
    string model_name;
    string car_name;
    int release_year;

    Car(string model_name , string car_name , int release_year){ 
        // this keyword is used to take the value in the class ki values properly 
        // this is pointer pointing to the current value 
        // ye uss value ko point karega jiss se values easly point ki ja skti hai 
        // this ka kaam hai jo bhi object ko mai create karta hu usske address ko store kar ke rakhta hai 
        //  
        this->model_name = model_name;  // root level pe check karege ki ye values kaha hai ?
        this->car_name = car_name;
        this->release_year = release_year;
    }

    void print(){

        cout <<"Car Model is :" << model_name << endl;
        cout <<"Car Name is : " << car_name << endl;
        cout << "Year of Relase model :" << release_year << endl;
    }

    

};

int main(){

    // This is how the dynamically memory is being assign to the variable
    // so we have the *ob pointer here which is going to store the values 


    // Car *ob = new Car();
    Car ob("xuv" , "Range-rover" , 2015);

    cout << sizeof(ob) << endl;
    ob.print();
    
}