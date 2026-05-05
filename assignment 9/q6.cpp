#include <iostream>
#include <fstream>
using namespace std;

int main(){

    ofstream f("file.txt");

    for(char c='A';c<='Z';c++){
        f<<c;
    }

    f.close();

    fstream f2("file.txt", ios::in | ios::out);

    char ch;

    f2.seekg(9);
    f2.get(ch);
    cout<<"10th character is: "<<ch<<endl;

    f2.seekp(4);
    f2<<"Z";
    cout<<"5th character changed"<<endl;

    f2.seekg(0, ios::end);
    cout<<"File size is: "<<f2.tellg()<<endl;

    f2.seekg(-1, ios::end);
    f2.get(ch);
    cout<<"Last character is: "<<ch<<endl;

    f2.close();



    ofstream f3("data.txt");

    f3<<"Hello world\nThis is file handling\nMultiple lines here";

    f3.close();

    ifstream f4("data.txt");

    f4.seekg(10);

    cout<<"Position is: "<<f4.tellg()<<endl;

    cout<<"Remaining content:"<<endl;

    while(f4.get(ch)){
        cout<<ch;
    }

    f4.close();



    fstream f5("hello.txt", ios::out);

    string s = "HelloWorld";

    for(int i=0;i<s.length();i++){
        f5<<s[i];
        cout<<"\nPosition after writing: "<<f5.tellp();
    }

    f5.close();

    fstream f6("hello.txt", ios::in | ios::out);

    f6.seekp(5);
    f6<<"C++";

    cout<<"\nWord replaced"<<endl;

    f6.close();

    return 0;
}
