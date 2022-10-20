#include<iostream>
#include<string>
using namespace std;
int main()
{
   string s1="nincompoop";
   cout<<s1.find("com");
   cout<<endl<<s1.find("poop");
   string s2="pifdydgfgpifdhdpi";
   cout<<endl<<s2.find("pi");
  s2.erase(s2.find("pi"),2);
  cout<<endl<<s2.find("pi");
}
