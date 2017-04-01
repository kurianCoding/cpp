#include <iostream>
using namespace std;

int getMatrix(int rows,int columns) {
    int romax=1,colmax=1,rocount=1,colcount=1;
    int matrix[rows][columns];
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
                    colcount++;
                } else {
                    colcount=1;
                }
            }

        }
        if(rocount>romax) {
            romax=rocount;
        }
        if(colcount>colmax) {
            colmax=colcount;
        }
        if(i==rows-1) {
            colcount=1;
        }
        cout<< rocount<<colcount<<endl;
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
