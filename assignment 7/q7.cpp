#include <iostream>
using namespace std;

class matrix{
public:
    int a[2][2];

    void get(){
        cout<<"Enter 4 elements: ";
        for(int i=0;i<2;i++){
            for(int j=0;j<2;j++){
                cin>>a[i][j];
            }
        }
    }

    void show(){
        for(int i=0;i<2;i++){
            for(int j=0;j<2;j++){
                cout<<a[i][j]<<" ";
            }
            cout<<endl;
        }
    }

    friend matrix operator * (matrix, matrix);
};

matrix operator * (matrix x, matrix y){
    matrix temp;

    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            temp.a[i][j]=0;
            for(int k=0;k<2;k++){
                temp.a[i][j] += x.a[i][k]*y.a[k][j];
            }
        }
    }

    return temp;
}

int main(){
    matrix m1,m2,m3;

    cout<<"Enter first matrix:"<<endl;
    m1.get();

    cout<<"Enter second matrix:"<<endl;
    m2.get();

    m3 = m1 * m2;

    cout<<"Result matrix:"<<endl;
    m3.show();

    return 0;
}
