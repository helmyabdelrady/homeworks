#include <iostream>
using namespace std;    
int main()
{
    int nb , ng , nc;
    cin>>nb>>ng>>nc;
    cout<<(nb>25)<< "\n";
    cout<<(ng<=30)<< "\n";
    cout<<(nb>20&&nc>2||ng>30&&nc>4)<< "\n";
    cout<<(nb < 60 || ng < 70)<< "\n";
    cout<<!(nb < 60 || ng < 70)<< "\n";
    cout<<(nb == ng + 10)<< "\n";
    cout<<(nb-ng>10||nc>5)<< "\n";
    cout<<(nb==ng+10||ng==nb+15)<< "\n";
    return 0;
}