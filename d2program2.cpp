#include<iostream>
using namespace std;
inline float sum(float a,float b)
{
   return(a+b);
}
inline float sub(float a,float b)
{
   return(a-b);
}
inline float mul(float a,float b)
{
    return(a*b);
}
inline float div(float a,float b)
{
return(a/b);
}
int main()
{
float x,y;
char n;
cout<<"enter values to process \n X=";
cin>>x;
cout<<"\n Y=";
cin>>y;
cout<<"Press'+'for Addition \nPress'-'for Subtraction \nPress'*'for multiplication\nPress'/'for Division\nChoise Is:";
cin>>n;
if(n=='+')
cout<<"Addition is:"<<sum(x,y);
else if(n=='-')
cout<<"subtracton is:"<<sub(x,y);
else if(n=='*')
cout<<"multiplication is:"<<mul(x,y);
else if(n=='/')
cout<<"division is :"<<div(x,y);
else if(char str[]="n")
cout<<"invalid input,enter the valid number";
else
  cout<<"wrong input";
return 0;
}