#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
int size;
cout<<"enter the number of elements in the array=";
cin>>size;
int Num[size],Temp;
cout<<"enter"<<size<<"elements of array"<<"\n";
for(int i=0;i<size_1;i++)
   cin>>Num[i];
   for(int i=0;i<size-1;i++)
   for(int j=i+1;j<size;j++)
   {
      if(Num[i]>Num[j])
      {
          Temp=Num[i];
          Num[i]=Num[j];
          Num[j]=Temp;
       }
    }
cout<<"elements of sorted array are\n";
    for(int i=0;i<size;i++) 
        cout<<Num[i]<<setw(4);
     return 0;
}