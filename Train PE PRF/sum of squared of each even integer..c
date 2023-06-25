#include<stdio.h>
int main(){
	int n , i , arr[100];
	scanf("%d",&n);
	for(i = 0 ; i < n ; i++){
		scanf("%d",&arr[i]);
	}
	int sum = 0;
	for(i = 0 ; i < n ; i++){
		if(arr[i] % 2 ==0 ){
			sum += arr[i] * arr[i];
		}
	}
	
	printf("OUTPUT: \n");
	printf("%d",sum);
}


