#include <stdio.h>

int tribonacci(int n, int a, int b, int c){
	if(n==0){
		return a;
	}
	if(n==1){
		return b;
	}
	if(n==2){
		return c;
	}

	return tribonacci(n-1, b, c, a+b+c);
}

int main(){
	
	int n;
	printf("Enter n to find nth term of Tribonacci Sequence:  ");
	scanf("%d", &n);
	
	int a = 0, b = 1, c = 1;
	
	printf("%dth term of Tribonacci Sequence is:  %d", n,	tribonacci (n,a,b,c));
	
	return 0;
}
