/* a program to swap the elements of an array
 * these elements are related by a rule which
 * says the ith element is related to N-ith
 * the array is always finite. Using these
 * suppositions we can create a program that
 * takes M such queries to swap and then output
 * the array.
 */
#include<iostream>
using namespace std;
void swapRange(int* array,int lower_range,int upper_range) {
    for(int k=lower_range-1; k<upper_range; k++) {
        array[k]=-1*array[k];
    }
    return;
}
void getArray(int *array,int size,bool inout) {
    for(int j=0; j<size; j++) {
        if(inout) {
            cin>>array[j];
        } else {
            cout<<array[j]<<" ";
        }
    }
    return;
}
void makeSwap(int *array,int array_size) {
    int temp;
    int h=0;
    while(h<array_size) {
        if(array[h]<0) {
            if(array[array_size-1-h]<0) {
                array[h]=-1*array[h];
                if(h!=array_size-1-h) {
                    array[array_size-1-h]=-1*array[array_size-1-h];
                }
                h=h+1;
            } else {
                temp=-1*array[h];
                array[h]=array[array_size-1-h];
                array[array_size-1-h]=temp;
                h=h-1;
            }
        } else {
            h=h+1;
        }
    }

}
int main() {
    int array_size,query_size;
    cin>>array_size;
    int numbers[array_size];
    //input array
    getArray(numbers,array_size,true);
    //take queries
    int lower_range,upper_range;
    cin>>query_size;
    for(int q=0; q<query_size; q++) {
        cin>>lower_range>>upper_range;
        //process queries
        swapRange(numbers,lower_range,upper_range);
    }
    makeSwap(numbers,array_size);
    //give output
    getArray(numbers,array_size,false);
    return 0;
}
