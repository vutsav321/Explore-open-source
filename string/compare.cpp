#include<iostream>
#include<string>
using namespace std;
int main()
{
   string s1,s2;
   s1="abc";
   s2="abc";
   cout<<s1<<"\t"<<s2<<endl;
   cout<<s2.compare(s1)<<endl;
   if(!s1.compare(s2))
   cout<<"String are equal\n";
  
}
