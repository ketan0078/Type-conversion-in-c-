#include<iostream.h>
#include<conio.h>
class product{
 private:
  int m,n;
  public:
  void setdata(int x, int y){
  m=x; n=y;}
  int getM(){
  return (m);}
  int getN(){return (n);}
 };
class item{
  private:
  int a,b;
  public:
  void showdata(){cout<<"\na="<<a<<"\nb="<<b;};
  item(){};
  item(product p){
  a=p.getM();
  b=p.getN();
  }
};

 void main(){
 clrscr();
 item i1;
 product p1;
 p1.setdata(4,5);
 i1=p1;
 i1.showdata();
 getch();
 }