#include<bits/stdc++.h>
using namespace std;

class Student
{
   public:  //Access modifire / specifire
      char name[100];
      int roll;
};


int main(){
  Student Humayra;
  strcpy(Humayra.name,"Humayra Afia ");
  Humayra.roll=221002033;
  cout<<Humayra.name<<" "<<Humayra.roll<<endl;
  return 0;
}