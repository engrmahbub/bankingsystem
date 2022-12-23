#include<iostream>
using namespace std;

class Account{

private:

    string ac_name,ac_number;
    double ac_balance;

public:

    void setvalue(string ac_name,string ac_number,double ac_balance){

    this -> ac_name =ac_name;
    this -> ac_number =ac_number;
    this -> ac_balance =ac_balance;

    }

    string get_acname(){
    return ac_name;
    }
    string get_acnumber(){
    return ac_number;
    }
    double get_acbalance(){
    return ac_balance;
    }

    double deposit(double amount){
    if (amount > 0){
        cout<<"Deposit amount = "<<amount<<endl;
        ac_balance+= amount;
    }
    }

    double withdraw(double amount){
    if (amount > 0 && amount <ac_balance){
    cout<<"Withdraw amount = "<<amount<<endl;

        ac_balance-= amount;
    }
    }




};

int main(){

Account a1;

a1.setvalue( "Mahbub", "cse6011", 500);

cout<< "Account holder name :"<< a1.get_acname()<<endl;
cout<< "Account number :"<< a1.get_acnumber()<<endl;
cout<< "Initial Ac balance :"<< a1.get_acbalance()<<endl;
a1.deposit(1000);
cout<< "Ac balance after deposit :"<< a1.get_acbalance()<<endl;
a1.withdraw(200);
cout<< "Ac balance after deposit :"<< a1.get_acbalance()<<endl;
a1.deposit(5000);
cout<< "Ac balance after deposit :"<< a1.get_acbalance()<<endl;
a1.deposit(100);
cout<< "Ac balance after deposit :"<< a1.get_acbalance()<<endl;
a1.withdraw(2000);
cout<< "Ac balance after deposit :"<< a1.get_acbalance()<<endl;

}
// thanks everyone
