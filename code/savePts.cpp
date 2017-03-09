/* a simple problem in hacker earth which can be solved
 * by sorting the given first array and the second array*/

/* this function bubble sorts the array*/
#include<iostream>
using namespace std;
void sortBB(int* array,int length) {
    int temp=0;
    for(int k=0; k<length; k++) {
        for(int j=k; j<length; j++) {
            if(array[j]>array[k]) {
                temp=array[k];
                array[k]=array[j];
                array[j]=temp;
                temp=0;
            }
        }
    }
    return;
}

/* this function finds the difference between elements
 * of meds and patz if there is even a negative then we
 * return false else we return true*/
bool diffArr(int meds[], int patz[], int length) {
    for(int k=0; k<length; k++) {
        if(patz[k]>meds[k]) {
            return false;
        }
    }
    return true;
}
int main() {
    int numbers=0;
    cin>>numbers;
    int medicine[numbers], patients[numbers];
    for(int u=0; u<numbers; u++) {
        cin>>medicine[u];
    }
    for(int u=0; u<numbers; u++) {
        cin>>patients[u];
    }
    sortBB(medicine,numbers);
    sortBB(patients,numbers);
    if(diffArr(medicine,patients,numbers)) {
        cout<<"Yes";
    } else {
        cout<<"No";
    }
    return 0;
}

