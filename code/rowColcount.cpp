#include <iostream>
using namespace std;

int getMatrix(int rows,int columns) {
    int romax=1,colmax=1,rocount=1;
    int matrix[rows][columns];
    int colcount[columns];
    for(int i=0; i<rows; i++) {
        rocount=1;
        for(int j=0; j<columns; j++) {
            cin>>matrix[i][j];
            if(j>0) {
                if(matrix[i][j-1]==matrix[i][j]) {
                    rocount++;
                } else {
                    rocount=1;
                }

            }
            if(i>0) {
                if(matrix[i-1][j]==matrix[i][j]) {
                    colcount[j]=colcount[j]+1;
                } else {
                    colcount[j]=1;
                }
            }

        }
        if(rocount>romax) {
            romax=rocount;
        }

    }
    for(int k=0; k<columns; k++) {
        if(colcount[k]>colmax) {
            colmax=colcount[k];
        }
    }

    return romax*colmax;
}
int main()
{
    int testcases,row,cols;
    cin>>testcases;
    for(int k=0; k<testcases; k++) {
        cin>>row>>cols;
        cout<<getMatrix(row,cols)<<endl;
    }
    return 0;
}
