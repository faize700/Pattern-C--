// Print Solid Square Pattern of Asterisk (*) in C++
// * * * *
// * * * *
// * * * *
// * * * *

#include <iostream>
using namespace std;

int main(){
    int sides;
    cout<<"Enter Length of sides"<<endl;
    cin>>sides;
    
    for (int i = 0; i < sides; i++)
    {
        for (int j = 0; j < sides; j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
}