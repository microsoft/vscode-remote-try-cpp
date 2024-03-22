#include <iostream>

using namespace std;

int main()
{
    int i,j ,temp;
    // Enter First value 
    cout<<"Enter the value of i : ";
    cin>> i ;
    cout<<"Enter the value of j : ";
    cin>> j ;

    // Swap the value 
    temp = i; i= j;j= temp;

    cout<<endl<<"The swap value of i : "<<i<<endl
    <<"The swap value of j : "<<j;

    return 0;
}
