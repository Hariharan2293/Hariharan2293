#include <iostream>
#include<string>
using namespace std;

void swap (int a,int b) {
 
    int temp;
    
    temp = a;
    a = b;
    b = temp;
    
    cout<< "N1: " << a<<endl;
    cout<< "N2: " << b<<endl;
}

int main() {
 
   int first, second;
 
   cout <<"Enter nalue N1 :";
   cin >> first;
   cout<<"Enter nalue N2 :";
   cin >> second;
 
   swap(first,second);
  return 0;
}
