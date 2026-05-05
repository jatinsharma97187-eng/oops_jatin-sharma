#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ifstream f1("a.txt");
    ofstream f2("b.txt");

    char ch;

    while(f1.get(ch)){
        f2.put(ch);
    }

    cout<<"File copied"<<endl;

    f1.close();
    f2.close();

    return 0;
}
