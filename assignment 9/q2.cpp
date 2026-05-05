#include <iostream>
#include <fstream>
using namespace std;

void countalpha(){
    ifstream f("NOTES.txt");

    char ch;
    int count = 0;

    while(f.get(ch)){
        if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z')){
            count++;
        }
    }

    cout<<"Number of alphabets are: "<<count<<endl;

    f.close();
}

int main(){
    countalpha();
    return 0;
}
