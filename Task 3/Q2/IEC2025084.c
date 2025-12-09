#include<stdio.h>
int main(){
	float a,b;
	printf("enter two numbers: ");
		scanf("%f %f",&a,&b);
		printf("choose operation");
		printf("1.addition\n2.subtraction\n3.multiplication\n3.division");
		scanf("%d",&calculator);
	switch(calculator){
		case 1 : printf("addition is %f: ",a+b);
			 break;
		case 2: printf("subtraction is :%f ",a-b);
			break;
		case 3: printf("multiplication :%f ",a*b);
			break;
		case 4: printf("division is :%f ",a/b);
			break;
			return 0;
	}


