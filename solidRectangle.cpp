// Print Solid Rectangle Pattern of Asterisk (*) in C++
// ******
// ******
// ******
// ******


#include <iostream>
using namespace std;

int main(){
    int rows, cols;
    cout<<"Enter Number of Rows"<<endl;
    cin>>rows;
    cout<<"Enter Number of Columns"<<endl;
    cin>>cols;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}