#include <iostream>

using namespace std;

int main()
{
    int Math,Eng,Sci,SoST,Hin,Total,Avg;
    cout<<"Enter the mark obtained in Mathematics: "<<endl;
    cin>>Math;
    cout<<"Enter the mark obtained in English: "<<endl;
    cin>>Eng;
    cout<<"Enter the mark obtained in Science: "<<endl;
    cin>>Sci;
    cout<<"Enter the mark obtained in SoST: "<<endl;
    cin>>SoST;
    cout<<"Enter the mark obtained in Hindi: "<<endl;
    cin>>Hin;
    Total = Math+Sci+Eng+Hin+SoST;
    Avg= (Total/5);
    cout<<"The average mark obtained is "<<Avg;
    if(Avg >=90)
        cout<<"\n\nGrade A"<<endl;
    else if (Avg >80 && Avg<90)
        cout<<"\nGrade B"<<endl;
    else if (Avg >70 && Avg<80)
        cout<<"\nGrade C"<<endl;
    else if (Avg >60 && Avg<70)
        cout<<"\nGrade D"<<endl;
    else if (Avg >50 && Avg<60)
        cout<<"\nGrade E"<<endl;
    else
        cout<<"\nGrade F"<<endl;


    return 0;

}