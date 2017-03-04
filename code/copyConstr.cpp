/*this program is to illustrate the use of a copy constructor
 * a copy constructor is just a constructor with a copy of the
 * same class as the input to the function.*/
#include<iostream>
#include<string.h>
class Sudoku {
private:
    int rows,columns,subs;
public:
    Sudoku(Sudoku &p) {
        this->rows=p.rows/p.subs;
        this->columns=p.columns/p.subs;
        this->subs=p.subs;
    }
    Sudoku(int rows,int columns, int subs) {
        this->rows=rows;
        this->columns=columns;
        this->subs=subs;
    }
    int getColumns() {
        return this->columns;
    }

    int getRows() {
        return this->rows;
    }

};
int main() {
    Sudoku s(4,4,2);
    Sudoku sub_s(s);
    std::cout<<sub_s.getRows()<<sub_s.getColumns()<<std::endl;
    return 0;
}
