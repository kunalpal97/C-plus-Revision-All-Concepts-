#include<iostream>

using namespace std;


class CustomerInBank{

    public:
    string name;
    int acc_no;
    int balance;

    static int total_acc_count;
    static int TotalMoneyInBankAccount;


    CustomerInBank(string name , int acc_no , int balace){

        this->name = name;
        this->acc_no = acc_no;
        this->balance = balace;
        total_acc_count++;
        TotalMoneyInBankAccount += balance;
    }


    void CustomerDetails(){

        cout << endl <<"Name is : " << name << endl;
        cout <<"Account no is : " << acc_no << endl;
        cout <<"Balance is : " << balance << endl;
        cout <<"Customer Account Count is " << total_acc_count << endl;
    }

    static int TotalAmountInbackis(){
        return TotalMoneyInBankAccount;
    }

    int DepositAmount(int money){

        if(money > 0){
            balance += money;
        }
        else{
            cout <<"Please Enter The Valid Amount it should be Positive" << endl;
        }

        return balance;
    }

    int WidrowMoney(int money){

        if(balance > money){
            balance-=money;
        }
        else{
            cout <<"Please Enter the Valid Amount" << endl;
        }

        return balance;
    }

};

int CustomerInBank :: total_acc_count = 0;
int CustomerInBank :: TotalMoneyInBankAccount = 0;


int main(){

    CustomerInBank c1("Anuj" , 12345 , 2312);

    c1.CustomerDetails();
    c1.DepositAmount(-123);
    c1.CustomerDetails();
    c1.WidrowMoney(5000);
    c1.CustomerDetails();

    CustomerInBank::TotalMoneyInBankAccount;

    



}