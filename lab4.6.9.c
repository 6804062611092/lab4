#include<stdio.h>
int main(){
	//int n,i;
	//scanf("%d",&n);
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	int f = 0;
	while(1){
			int score;
		scanf("%d",&score);
		if(score >= 0 && score <= 100){
			if(score >= 68){
				if(score >= 85){
					printf("%d(A)\n",score);
					a++;
				}
				else if(score >= 75){
					printf("%d(B)\n",score);
					b++;
				}
				else if(score >= 68){
					int temp = 75 - score;
					printf("%d(C)\n",score);
					c++;
				}
			}
			else{
				if(score >= 55){
					printf("%d(D)\n",score);
					d++;
				}
				else{
					printf("%d(F)\n",score);
					f++;
				}
			}
		}
	
		if(score == -1){
			break;
		}
		
	}
	printf("A(%d)\n",a);
	printf("B(%d)\n",b);
	printf("C(%d)\n",c);
	printf("D(%d)\n",d);
	printf("F(%d)\n",f);
		
}
