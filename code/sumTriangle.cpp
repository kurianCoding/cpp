#include<iostream>
using namespace std;
void printTriangle(int* array,int arrayLength){
	int temp [arrayLength];
	int lengthOfTempArray=arrayLength;

	while( lengthOfTempArray>0 ){
		for(int i=0;i<lengthOfTempArray;i++){
			cout<<array[i]<<" ";
			temp[i]=array[i]+array[i+1];
		}
		array=temp;
		cout<<endl;
		lengthOfTempArray--;
	}
	return;
}
int main(){
	int count=10;
	int array[count];
	int i=count;
	while(i>=0){
		cin>>array[i];
		i--;
	}
	printTriangle(array,count);
	return 0;
}
