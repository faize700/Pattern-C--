// Print Hollow Rectangle Pattern of Asterisk (*) in C++
// * * *
// *   *
// *   *
// * * *


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
        if (i == 0 || (i == rows - 1))
        {
           for (int j = 0; j < cols; j++)
            {
                cout<<"* ";
            } 
            
        }
        else{
            for (int j = 0; j < cols; j++)
            {
                if (j == 0 || (j == cols -1))
                {
                    cout<<"* ";
                }
                else{
                    cout<<"  ";
                }
            }
        }
        cout<<endl;
    }
    

}