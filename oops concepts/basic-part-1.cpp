
#include<bits/stdc++.h>

using namespace std;

// so classes are the userDefine data type 
// which has the variables and methods togather
// class is a tamplet/blueprint of an object

class Students{ 

    public:
    string name;
    int roll_no;

    public:

    void print(){
        cout << "Name is " << name << " roll no : " << roll_no << endl;
    }
};



int main(){

    Students s; // this is how an object is created 
    //object is an instance of class 
    // object can be a real world entity like person , car , pen , chasma
    s.name = "Amitab Bacchan";
    s.roll_no = 83;

    cout << s.name << endl;
    cout << s.roll_no << endl;

    s.print();

    cout << sizeof(Students) << endl;
    return 0;

}