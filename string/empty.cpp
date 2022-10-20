#include<iostream>
#include<string>
using namespace std;
int main()
{
   string s1="ABC";
  cout<<s1<<endl;
  s1.clear();
  cout<<s1<<endl;
  if(s1.empty())
  cout<<"String is empty";
  
}
