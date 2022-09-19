#include <iostream> 
using namespace std;
int main()
{
 int start,end;
 int count = 0;
 int i = 1;
 cout << "Composite Numbers between " << start <<" and " << end <<": \n";
 cin>> start;
 cin>>end;
 for(start=start; start<=end; start++)
 {
  for(i=1; i<=start; i++)
  {
   if(start % i == 0)
    count++;
  }
  if(count > 2)
   cout << start << " ";
  count = 0;
 }
 return 0;
}