#include <iostream>
using namespace std;
void printDivisors(int n)
{
	for (int i = 1; i <= n; i++)
		if (n % i == 0)
			cout <<" " << i;
}

/* Driver program to test above function */
int main()
{
	int z,n;
	cout<<"ENTER:";
	cin>>z;
	cout<<"N:";
	cin>>n;
	cout <<"The divisors are: \n";
	printDivisors(z);
	return 0;
}
