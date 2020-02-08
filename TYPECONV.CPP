/*hey , here we go with some cool stuffs */ 
#include<iostream.h>
#include<conio.h>
/* conversion of a product value into item value using a constructor */
class product{
 private:
  int m,n;
  public:
  void setdata(int x, int y){
  m=x; n=y;}
  int getM(){     // getM and getN are created so that we can access them into item class ...
   return (m);}
  int getN(){return (n);}
 };
class item{
  private:
  int a,b;
  public:
  void showdata(){cout<<"\na="<<a<<"\nb="<<b;};
  item(){}; //default constructor...
  item(product p){   //parametarised constructor...
  a=p.getM();
  b=p.getN();
  }
};

 void main(){
 clrscr();
 item i1;
 product p1;
 p1.setdata(4,5);
 i1=p1;  // assigning value of product into item ...
 i1.showdata();
 getch();
 }
