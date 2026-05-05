#include <iostream>
#include <string>
using namespace std;

class account{
public:
    const long acc_no;
    long trans_id;
    string trans_type;
    double balance;

    account(long a, double b) : acc_no(a){
        balance = b;
        trans_id = 1000;
        trans_type = "none";
    }

    long depositAmount(const long &to, const long &from, const double &amount);
    long creditAmount(const long &to, const long &from, const double &amount);
    void displayDetails() const;
};

long account::depositAmount(const long &to, const long &from, const double &amount){
    if(acc_no == to){
        balance = balance + amount;
        trans_id++;
        trans_type = "credit";
        return trans_id;
    }
    if(acc_no == from){
        balance = balance - amount;
        trans_id++;
        trans_type = "debit";
        return trans_id;
    }
    return -1;
}

long account::creditAmount(const long &to, const long &from, const double &amount){
    if(acc_no == to){
        balance = balance + amount;
        trans_id++;
        trans_type = "credit";
        return trans_id;
    }
    if(acc_no == from){
        balance = balance - amount;
        trans_id++;
        trans_type = "debit";
        return trans_id;
    }
    return -1;
}

void account::displayDetails() const{
    cout<<"Account number: "<<acc_no<<endl;
    cout<<"Balance: "<<balance<<endl;
    cout<<"Last transaction id: "<<trans_id<<endl;
    cout<<"Transaction type: "<<trans_type<<endl;
}

int main(){
    account a1(101,1000), a2(102,2000), a3(103,3000), a4(104,4000), a5(105,5000);

    long t1 = a1.depositAmount(101,102,500);
    long t2 = a2.depositAmount(101,102,500);

    cout<<"Transaction id for transfer: "<<t1<<endl;

    long t3 = a3.creditAmount(103,104,300);
    long t4 = a4.creditAmount(103,104,300);

    cout<<"Transaction id for transfer: "<<t3<<endl;

    cout<<"\nAccount Details:\n";

    a1.displayDetails();
    a2.displayDetails();
    a3.displayDetails();
    a4.displayDetails();
    a5.displayDetails();

    return 0;
}
