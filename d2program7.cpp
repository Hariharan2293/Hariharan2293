#include<iostream>
using namespace std;
int main()
{
int y;
cout<<"Enter your age:"<<endl;
cin>>y;
if(y<18){
cout<<"You are allowed to vote in"<<y-18<<"years."<<endl;
}
if(y>=18){
cout<<"You are allowed to vote."<<endl;
}
if(y<0){
cout<<"INVALID!"<<endl;
}
return 0;
}
