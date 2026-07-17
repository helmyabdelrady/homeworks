#include <iostream>
using namespace std;
int main()
{
string name1;
cout<<" what is student 1 name: ";
cin>>name1;

string id1;
cout<<"his id is: ";
cin>>id1;

double grade1;
cout<<"his grade: ";
cin>>grade1;

string name2;
cout<<" what is student 2 name: ";     
cin>>name2;

string id2;
cout<<"his id is: ";
cin>>id2;

double grade2;
cout<<"his grade: ";
cin>>grade2;

cout<<name1<<"(with id "<<id1<<") has grade: "<<grade1<<"\n";
cout<<name2<<"(with id "<<id2<<") has grade: "<<grade2<<"\n";
cout<<"the average of the two students is: "<<(grade1+grade2)/2.0<<endl;
return 0;
}   