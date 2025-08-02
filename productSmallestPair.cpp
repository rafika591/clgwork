#include<stdio.h>
#include<limits.h>
int productSmallestPair(int arr[],int len,int sum){
   if(len<2){
       return -1;
   }
    int min1=INT_MAX;
    int min2=INT_MAX;
    for(int i=0;i<len;i++){
        if(arr[i]<min1){
            min2=min1;
            min1=arr[i];
        }
        else if(arr[i]<min2){
            min2=arr[i];
        }
    }
    if(min1+min2<=sum){
        return min1*min2;
    }
    else{
        return 0;
    }
}
int main(){
    int arr[5]={4,3,1,7,8};
    int len=5;
    int sum=8;
    printf("%d",productSmallestPair(arr,len,sum));
    return 0;
}
