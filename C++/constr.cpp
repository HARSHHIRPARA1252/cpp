#include<iostream>
using namespace std;
class result
{
  int m,s,e;
  public:
  result()
  {
     cout<<"Enter marks of maths=";
     cin>>m;
     cout<<"Enter marks of stat=";
     cin>>s;
     cout<<"Enter marks of eng=";
     cin>>e;
  }
   void data()
  {
    cout<<"marks of maths"<<m<<endl;
    cout<<"marks of stat"<<s<<endl;
    cout<<"marks of eng"<<e<<endl;
    cout<<"total marks"<<m+s+e<<endl;
    cout<<"per"<<(m+s+e)/3<<endl;
  }
};
  int main()
{
  result r;
  r.data();
}
    