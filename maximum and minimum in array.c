/*Write a program to find the maximum and minimum elements in an array of integers*/

#include<stdio.h>
    int main (){
    int arr[]={1,2,3,4,5};
    int n= sizeof(arr)/sizeof(arr[0]);
    int max=arr[0],min =arr[0];
    for(int i=0;i<n;i++){
    if(arr[i]>max){
    	max=arr[i];
    	}
    if(arr[i]<min){
    	min=arr[i];
    	}	
    }
    printf("maximum element:%d\n:",max);
    printf("minimum element:%d\n:",min);
    
    return 0;
}
