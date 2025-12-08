#include<stdio.h>
#include<string.h>

int main(){
	char phrase[100];
	scanf("%s",phrase);
	int x=strlen(phrase);
	for(int i=0;i<x+4;i++){
		printf("*");
	}
	printf("\n* %s *\n",phrase);
	for(int i=0;i<x+4;i++){
		printf("*");
	}
	printf("\n");
	
	return 0;
}

