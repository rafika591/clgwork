#include<stdio.h>
#include<stdlib.h>
int differenceOfSum(int n,int m){
	int sum1=0;
	int sum2=0;
	for(int i=1;i<=m;i++){
		if(i%2==0){
			sum1+=i;
		}
		else{
			sum2+=i;
		}
	}
	int result =abs(sum1-sum2);
	return (result);
}
int main(){
	int m=10;
	int n=3;
	printf("%d",differenceOfSum(n,m));
	return 0;
}}
