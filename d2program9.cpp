#include<iostream>
using namespace std;
int main()
{
        int P,R = 10,T,SI;
	char s;
        cout << "\n\n Calculate the Simple Interest :\n";
	cout << " -----------------------------------\n";
	cout<<" Input the Principle amount: ";
	cin>>P;
	cout<<" Input the Rate of Interest: "<<R<<endl;
	cout<<" Input the Time: ";
	cin>>T;
	cout<<"Enter whether the customer is senior citizen or not: ";
	cin>>s;
	SI=(P*R*T)/100;
	if (s=='y'){
        R = 12;
        cout<<" The Simple interest for the amount "<<P<<" for "<<T<<" years @ "<<R<<" % is: "<<SI;
        cout << endl;
    }
    else
	cout<<" The Simple interest for the amount "<<P<<" for "<<T<<" years @ "<<R<<" % is: "<<SI;
        cout << endl;
	return 0;
}