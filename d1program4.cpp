#include<iostream>

using namespace std;

int main()

{

int age;

cout<<"Enter the age of candidate: " <<endl;

cin>>age;

if(age < 18)

{

cout<<"Eligible to vote ";

}

if(age > 18)

{

cout<<"Not eligible to vote" ;

}

if(age < 0)

{

cout<<"NOT VALID";

}

else

{

cout<<"NOT VALID!";

}

return 0;

}
