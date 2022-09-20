#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char nameAll[5][20],nameOne[20];
    int i, j;
	cout<<"ENTER:";
    for(i=0; i<5; i++)
        cin>>nameAll[i];
    for(i=1; i<5; i++)
    {
        for(j=1; j<5; j++)
        {
            if(strcmp(nameAll[j-1], nameAll[j])>0)
            {
                strcpy(nameOne, nameAll[j-1]);
                strcpy(nameAll[j-1], nameAll[j]);
                strcpy(nameAll[j], nameOne);
            }
        }
    }
	{
    cout<<"\nStrings (Names) in Alphabetical order:\n";
    for(i=0; i<5; i++)
        cout<<nameAll[i]<<endl;
    cout<<endl;
   char str[5][20]={"apple","banana","jack","carrot","radish"};
   char t[20];
   int i, j;
   for(i=1; i<5; i++){
      for(j=1; j<5; j++){
         if(strcmp(str[j-1], str[j])>0){
               strcpy(t, str[j-1]);
               strcpy(str[j-1], str[j]);
               strcpy(str[j], t);
         }
      }
   }
   cout<<"Sorted in Descending Order ::";
   for(i=5; i>=0; i--){
      cout<<" ";
      cout<<str[i]<<"\n";
   }
}
   return 0;
}


