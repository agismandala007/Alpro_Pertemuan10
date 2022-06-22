#include <iostream>
#include <string>
using namespace  std;

class Final{
  public:
    void input();
    void output();
  private:
    //string nama[5]={"Agis ", "Azwar", "Ramon", "Hayyu", "Bagus"};
    //int nim[5]={2000018075, 2100018480, 1700018245, 1900018022, 1800018019};
   string nama[5];
   int nim[5];
};

void Final::input(){
  for(int i=0; i<5; i++){
    cin.ignore();
    cout<<"Peserta "<<i+1<<endl;
    cout<<"Nama  : ";getline(cin, nama[i]);
    cout<<"NIM   : ";cin>>nim[i];
    cout<<endl;
  }
}

void Final::output(){
  cout<<"+---------------------+"<<endl;
  cout<<"| Nama   | NIM        |"<<endl;
  cout<<"+---------------------+"<<endl;
  for(int i=0; i<5; i++){
    string *name=&nama[i];
    int *n1m=&nim[i];
    cout<<"| "<<*name<<"  | "<<*n1m<<" |"<<endl;
  }
  cout<<"+---------------------+"<<endl;
}

int main(){
  Final x;
  x.input();
  x.output();
}
