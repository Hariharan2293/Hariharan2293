#include<iostream>
using namespace std;
void decToBinary(int s)
{
    int binaryNum[32];

    int i = 0;
    while (s > 0) {

        binaryNum[i] = s % 2;
        s = s / 2;
        i++;
    }
    for (int j = i - 1; j >= 0; j--)
        cout <<binaryNum[j];
}
void decToOctal(int s)
{
    int octalNum[100];
    int i = 0;
    while (s != 0) {
        octalNum[i] = s % 8;
        s = s / 8;
        i++;
    }
    for (int j = i - 1; j >= 0; j--)
        cout <<octalNum[j];
}
int main()
{
    int s;
    cout<<"Decimal number: "<<endl;
    cin>>s;
    cout<<"Binary number: "<<endl;
    decToBinary(s);
    cout<<"\nOctal number: "<<endl;
    decToOctal(s);
    return 0;
}