#include<iostream>

using namespace std;

// By default the access specifier is private in c++ , we have Public , Private , Protected 


class Shape{
    
    private:
    int sides;
    string shape_name;

    public:

    Shape(int s , string sName){
        sides = s;
        shape_name = sName;

    }

    void print(){
        cout << "sides are "  << sides << endl;

        cout <<"shape are " << shape_name << endl;
    }



};


int main(){
    //this is how i can declear the dynamically object which store the data in the heap 
    // stack has a limited storeage to store the data but 
    
    Shape *s1 = new Shape(12 , "Triangle");
    cout <<sizeof(s1) << endl;

    s1->print();


}