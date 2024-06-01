
#include<iostream>
using namespace std;

int main(){
    int rows;
    cout<<"Enter no of rows ";
    cin>>rows;

    for (int i = 0; i < rows; i++)
    {
        // space
        for (int j = 0; j < rows-i; j++)
        {
            cout<<"  ";
        }
        int start;
        // nums
        for (int j = 0; j < i+1; j++)
        {
            cout<<i+j+1<<" ";
            start = i+j+1;
        }
        // reverse
        for (int j = 1; j < i+1; j++)
        {
            cout<<start-j<<" ";
        }
        cout<<endl;
    }
    

}