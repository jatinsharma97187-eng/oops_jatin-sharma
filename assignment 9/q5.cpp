#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
    ofstream f("data.txt");

    string s;

    cout<<"Enter string: ";
    getline(cin,s);

    f<<s;

    cout<<"Length is: "<<s.length()<<endl;

    f.close();

    ifstream f2("data.txt");

    char ch;

    cout<<"Characters in file:"<<endl;

    while(f2.get(ch)){
        cout<<ch;
    }

    f2.close();

    return 0;
}
