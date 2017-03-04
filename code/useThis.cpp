/* its a simple programm to show the use of this
 * in a function*/
#include<iostream>
class Matrix {
private :
    int rows;
    int columns;
public:
    Matrix(int rows,int columns) {
        this->rows=rows;
        this->columns=columns;
    }
    int getRows() {
        return this->rows;
    }
    int getColumns() {
        return this->columns;
    }

};
int main() {
    Matrix m(3,3);
    std::cout<<m.getRows()<<m.getColumns()<<std::endl;
    return 0;
}
