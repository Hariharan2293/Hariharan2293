#include<iostream>
using namespace std;
class student
{
   string name;
public:
   Student(string s)
   {
       name=s;
   }
   Student()
   {
   name="unknowmn";
   }
   void print_name()
   {
       cout<<name<<endl;
   }
};
int main()
{
    Student s1("jhon");
    Student s2;
    s1.print_name();
    s2.print_name();
    return 0;
}