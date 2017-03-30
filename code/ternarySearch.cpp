/* this is a program to implement ternary search
 * it takes an array and a number. It returns the
 * index of the number.*/
# include<iostream>
int ternarySearch(int *array,int key,int length) {
    int max=length,min=0;
    while(max-min>0) {
        int max1=min+(max-min)/3;
        int max2=min+(max-min)*(2/3);
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
    // take input
    // search for index
    // 	divide the input to three parts
    // 	if value lies in first part then
    // 	search the first part or the sec
    // 	ond or third part.
    return 0;
}
