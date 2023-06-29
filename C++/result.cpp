#include<iostream>
using namespace std;
class Result {
  int m,e,s,a,p,t;
  public:
  void print()
  {
     cout<<"maths :"; 
     cin>>m;
     cout<<"eng :"; 
     cin>>e;
     cout<<"sp :"; 
     cin>>s;
     cout<<"acc :"; 
     cin>>a;                            
 }
      void out()
{
   t=m+e+s+a;     
   cout<<"your total is :"<<t<<endl;
   p=t/4;
   cout<<"your percentage is :"<<p<<endl;
}  
};
int main()
{
  Result z;
  z.print();
  z.out();
}