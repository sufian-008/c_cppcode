#include<bits/stdc++.h>
using namespace std;

class Example
{
    public:
    int add(int x, int y)
    {
        cout<<"First one"<<endl;
        return x+y;
    }
    double add(double x, double y)
    {
        cout<<"Second one"<<endl;
        return x+y;
    }
};

int main(){
    
    Example ex;
    cout<<ex.add(1.5,2.2)<<endl;
    return 0;
}