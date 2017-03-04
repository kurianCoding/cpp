/* writing a program to demonstrate desctructors in function
 * a destructor is a function which returns nothing and takes
 * nothing in and executes when class is garbage collected or
 * delete function is called.*/
#include<iostream>
class Item {
public:
    ~Item() {
        std::cout<<"removed Item"<<std::endl;
    }
};
int main() {
    Item i;
    return 0;
}
