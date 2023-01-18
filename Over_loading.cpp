#include<bits/stdc++.h>
using namespace std;

class parent
{
    public:
    void fun()
    {
        cout<<"Parent"<<endl;
    }
};

class child: public parent
{
public:
    void fun()
    {
        cout<<"Child"<<endl;
    }
};
int main(){
  child obj;
  obj.fun();
     

    return 0;

}