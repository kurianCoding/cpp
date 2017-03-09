/*a program to swap rows and columns*/
#include<iostream>
#include<string.h>
using namespace std;
int main() {
    int rows,columns;
    cin>>rows>>columns;
    int outArray[columns][rows];
    for(int i=0; i<rows; i++) {
        string temp;
        for(int j=0; j<columns; j++) {
            cin>>outArray[j][i];
        }
    }
    for(int i=0; i<columns; i++) {
        string temp;
        for(int j=0; j<rows; j++) {
            cout<<outArray[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
