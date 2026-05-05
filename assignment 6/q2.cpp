#include <iostream>
#include <string>
using namespace std;

class book{
public:
    string title;
    string author;
    int ISBN;
    
    book(){
        this->title="";
        this->author="";
        this->ISBN=0;
    }
    
    book(string a,string b,int c){
        this->title=a;
        this->author=b;
        this->ISBN=c;
    }
    
    book(const book &b ){
        this->title=b.title;
        this->author=b.author;
        this->ISBN=b.ISBN;
    }
};

class library{
public:
     book bookslist[100];   
     int count =0;

     bool addNewBook(string &title, string &author, int &ISBN);
     bool removebook(int &ISBN);
     void displaydetails();
};


bool library::addNewBook(string &title, string &author, int &ISBN){
         bookslist[count]=book(title,author,ISBN);
         count++;
         return true;
}
      
bool library::removebook(int &ISBN){
         int n=0; 
         int flag=1;
         while(n < count){
             if(bookslist[n].ISBN==ISBN){
                 flag=0;
                 break;
             }
             n++;
         }

         if(flag==0){
             
             while(n < count-1){
                bookslist[n]=bookslist[n+1];
                n++;
            }
            count--;
            return true;
         }
         else{
             return false;
         }
}
      
void library::displaydetails(){
    int n=0;
    while(n < count){
        cout<<"book "<<n+1<<" details are:\n";
        cout<<bookslist[n].title<<";"<<bookslist[n].author<<";"<<bookslist[n].ISBN<<endl;
        n++;
    }
}

int main()
{
    library l;

    string title, author;
    int ISBN;
    int n;
    
    cout<<"enter number of books you want to add first:";
    cin>>n;
    cin.ignore();

    
    for(int i=0;i<n;i++){
        cout<<"Enter title: ";
        getline(cin,title);
        cout<<"Enter author: ";
        getline(cin,author);
        cout<<"Enter ISBN: ";
        cin>>ISBN;
        cin.ignore();

        l.addNewBook(title,author,ISBN);
    }

    cout<<"\nAll Books:"<<endl;
    l.displaydetails();

    
    cout<<"\nEnter ISBN to remove: ";
    cin>>ISBN;

    if(l.removebook(ISBN))
        cout<<"Book removed"<<endl;
    else
        cout<<"Book not found"<<endl;

    cout<<"Updated List:"<<endl;
    l.displaydetails();
    
    //initializer list 
    
    book b1("C++", "Bjarne", 111);
    book b2("DSA", "AuthorX", 222);

   
    book b3 = b1;

    
    book *b4 = new book("OOP", "Someone", 333);

    cout<<"\nExtra objects created using constructors:"<<endl;
    cout<<b3.title<<" "<<b3.author<<" "<<b3.ISBN<<endl;
    cout<<b4->title<<" "<<b4->author<<" "<<b4->ISBN<<endl;

    delete b4;

    return 0;
}
