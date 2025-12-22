#include<stdio.h>
int main(){
	int n,i;
	scanf("%d",&n);
	for (i=0;i < n;i++){
		int score;
		scanf("%d",&score);
		if(score >= 0 && score <= 100){
			if(score >= 68){
				if(score >= 85){
					printf("(A)\n");
				}
				else if(score >= 75){
					printf("(B)\n");
				}
				else if(score >= 68){
					int temp = 75 - score;
					printf("(C)\n");
				}
			}
			else{
				if(score >= 55){
					printf("(D)\n");
				}
				else{
					printf("(F)\n");
				}
			}
		}
		else{
			printf("error score\n");
		}
	
		}
	
}
