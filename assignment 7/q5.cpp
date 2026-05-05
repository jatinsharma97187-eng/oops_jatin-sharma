#include <iostream>
using namespace std;

class time{
private:
    int h,m,s;

public:
    time(int a,int b,int c){
        h=a;
        m=b;
        s=c;
    }

    time(){
        h=0;
        m=0;
        s=0;
    }

    time operator + (time t){
        time temp;

        temp.s = s + t.s;
        temp.m = m + t.m + temp.s/60;
        temp.s = temp.s % 60;

        temp.h = h + t.h + temp.m/60;
        temp.m = temp.m % 60;

        return temp;
    }

    void show(){
        cout<<"Time is: "<<h<<":"<<m<<":"<<s<<endl;
    }
};

int main(){
    time t1(5,15,34),t2(9,53,58),t3;

    t3 = t1 + t2;

    t3.show();

    return 0;
}
