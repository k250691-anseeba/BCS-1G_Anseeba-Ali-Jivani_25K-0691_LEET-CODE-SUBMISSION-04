#include <stdio.h>

int climb(int n) {
    if(n == 1){
    	return 1;
	}
    if(n == 2){
    	return 2;
	} 
	 
    return climb(n-1) + climb(n-2);
}

int main(){
	
	int n;
	do{
	printf("Enter n steps that are needed to climb to the top:  ");
	scanf("%d", &n);
	if(n<1 || n>45){
		printf("'n' Out of Range (1-45). Re-enter.\n");
	}
    }while(n<1 || n>45);
    
    printf("\n There are %d ways to climb %d steps to the top", climb(n), n);
	
	return 0;
}
