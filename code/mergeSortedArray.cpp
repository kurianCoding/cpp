/* this program takes in two sorted arrays and */
/* merges them together into a third array while */
/* keeping the sorting in tact. */

#include <iostream>
using namespace std;


void mergeArray(int *Array1,int array1Length,int *Array2,int array2Length){
	/* declare a third array whose length is */
	/* equal to array1+array2. */
	int array3[array1Length+array2Length];
	int count=0;
	int i=0,j=0;
	/* loop through array1 and array2 till no */
	/* elements are left to be added. */
	while(count<=array1Length+array2Length){
		if(Array1[i]<Array2[j]){
			array3[count]=Array1[i];
			i++,count++;
		}else{
			array3[count]=Array2[i];
			j++,count++;
		}
	}
	/* return the pointer to merged array */
	while(count>0){
		cout<<array3[count]<<" ";
		count--;
	}

}


int main(){
	int array1[10],array2[10],temp,i=0,j=0;

	/* for taking std in from a file */
	while(i<10){
		cin>>temp;
		array1[i]=temp;
		i++;
	}

	while(j<10){
		cin>>temp;
		array2[j]=temp;
		j++;
	}

	mergeArray(array1,10,array2,10);
	cout<<endl;
	return 0;

}
