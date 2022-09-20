#include<iostream>
using namespace std;
int main()
{
	int n,a,b,c;
	while(n!=-1)
	{
		cout<<"\nENTER:";
		cin>>n;	
		if(n>0){
			b=b+n;
			cout<<"The sum of numbers:"<<b;
		if(n<0){
		b=b-n;
		cout<<b;
		}
		}
		}
	return 0;
}
