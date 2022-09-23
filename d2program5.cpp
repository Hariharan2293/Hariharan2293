i#include<iostream>
 using namespace std;
 class Employee
 {
     private:
         int empno;
         char empname[20];
         char department[20];
         char designation[20];
     public:
     	Employee();
         void GetData();
         void DispData();
 };
 void Employee::GetData()
 {
     cout<<"Enter the employee number: ";
     cin>>empno;
     cout<<"Enter the employee name: ";
     cin>>empname;
     cout<<"Enter the employee department:";
     cin>>department;cin>>department;
     cout<<"Enter the employee designation";
     cin>>designation;
 }
 void Employee::DispData()
 {
     cout<<endl<<empno<<"\t"<<empname<<"\t"<<department<<"\t"<<designation;
 }
 int main()
 {
     Employee e[3];
     cout<<"Enter the employee information:"<<endl;
     for(int i=0;i<3;i++)
     {
         e[i].GetData();
     }
     cout<<endl<<"The employee information is:";
     cout<<endl<<"Empno \t Name \t department \t designation";
     for(int i=0; i<3;i++)
     {
         