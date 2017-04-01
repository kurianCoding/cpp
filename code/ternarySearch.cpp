/* this is a program to implement ternary search
 * it takes an array and a number. It returns the
 * index of the number.*/
# include<iostream>
using namespace std;
int ternarySearch(int *array,int key,int length) {
    int max=length,min=0,max1=0,max2=0;
    while(max-min>0) {
        max1=min+(max-min)/3;
        // the small correction made here because cpp calculated 2/3 as
        // 0.
        max2=min+(max-min)*2/3;
        cout <<max1<<","<<max2<<endl;
        if(key==array[min]) {
            return min;
        }
        if(key<=array[max1]) {
            if(key==array[max1]) {
                return max1;
            }
            max=max1;
        } else {
            if(key<=array[max2]) {
                if(key==array[max2]) {
                    return max2;
                }
                max=max2;
                min=max1;
            } else {
                min=max2;
            }

        }

    }
    return -1;
}

int search(int *array,int key,int length) {
    return ternarySearch(array,key,length);
}


int main() {
    int array[]= {1,2,3,6,7};
    cout<<search(array,7,5)<<endl;
    cout<<search(array,1,5)<<endl;
    cout<<search(array,3,5)<<endl;
    return 0;
}
