#include<bits/stdc++.h>
using namespace std;

class parent
{
    private:
    int taka;

  protected:
      int password;

 public:
      parent(int tk, int ps)
      {
        taka = tk;
        password = ps;
      }
      friend void tellSecret(parent *ptr);

};


void tellSecret(parent *ptr){
 
   cout<<ptr->taka<<" "<<ptr->password<<endl;
   
};

int main (){

  parent pt(10000,2356);
  tellSecret(&pt);

    return 0;
}