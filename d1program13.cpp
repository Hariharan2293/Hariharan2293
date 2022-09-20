#include<iostream>
using namespace std;
int main()
{
	int N,sum=0,n,m;
	cout<<"enter N value:";
	cin>>N;
	cout<<"enter "<<N<<" digit number:";
	cin>>n;
	while(n>0)
	{
		m=n%10;
		sum=sum+m;
		n=n/10;
	} 
	cout<<"sum of "<<N<<" digit number:"<<sum;
	return 0;
}