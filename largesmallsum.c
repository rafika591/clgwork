#include<stdio.h>
#include<limits.h>
int largeSmallSum(int arr[],int len){
    int max1=INT_MIN, max2=INT_MIN;
    int min1=INT_MAX, min2=INT_MAX;
    for(int i=0;i<len;i++){
        if(i%2==0){
            if(arr[i]>max1){
                max2=max1;
                max1=arr[i];
            }
            else if(arr[i]>max2){
                max2=arr[i];
            }
        }
        else{
            if(arr[i]<min1){
                min2=min1;
                min1=arr[i];
            }
            else if(arr[i]<min2){
                min2=arr[i];
            }
        }
    }
    if(max2==INT_MIN || min2==INT_MAX) return 0;
    return max2+min2;
}
int main(){
    int arr[8]={3,2,5,4,6,7,1,8};
    int len=8;
    printf("%d",largeSmallSum(arr,len));
    return 0;
}
