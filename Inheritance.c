#include<bits/stdc++.h>
using namespace std;

class parent
{
    public:
     int x;
     private:
       int y;
    protected:
    int z;
    public:
     parent(int a, int b, int c)
     {
        x=a;
        y=b;
        z=c;
     }
};

class Child:public parent
{
    public:
      int xx;
   Child(int aa,int a,int b,int c) : parent(a,b,c)
   {
    xx=aa;
   }

};

int main()
{
    parent pt(10,20,30);
    Child ch(100,10,20,30);
    cout<<ch.x<<endl;
    return 0;
}