#include<bits/stdc++.h>
#include "Match.cpp"

using namespace std;

class Students{

    // here we write the property of class methods realted to that 

    private:
    int rollNo;
    string name;

    
    public:
    void getRollno(int r){
        rollNo = r;
    }

    void getName(string n){
        name = n;
    }

    string setName(){
        return name;
    }

    int setRollno(){
        return rollNo;
    }


};


int main()
{
    Students s1;
    Match c1;

    c1.score = "185 Runs and 4 Wickets down";
    c1.result = "Winner";

    s1.getName("Kunal");
    s1.getRollno(45);

    cout << sizeof(c1) << endl;
    cout << "Class student size is " << sizeof(s1) << endl;

    cout <<"Score is " << c1.score << " Result is " << c1.result << endl;
    cout << "Roll no : "  << s1.setName() << endl;
    cout << "Name is : " << s1.setRollno() << endl;


}