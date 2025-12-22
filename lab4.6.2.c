#include<stdio.h>
int main(){
	int a,n,i,j;
	scanf("%d %d",&a,&n);
	
	for(i = 0;i < n;i++){
		for(j = 0;j < n;j++){
			printf("%d",a);
		}
		printf("\n");
	}
}
