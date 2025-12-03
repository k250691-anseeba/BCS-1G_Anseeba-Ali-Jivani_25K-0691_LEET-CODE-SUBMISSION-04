#include <stdio.h>

struct Student{
	int age;
	char first_name[50];
	char last_name[50];
	int standard;
};

int main(){
	
	struct Student s1;
	printf("Enter age: ");
	scanf("%d", &s1.age);
	printf("Enter first name: ");
	scanf(" %[a-z]", s1.first_name);
	printf("Enter second name: ");
	scanf("  %[a-z]", s1.last_name);
	printf("Enter standard: ");
	scanf("%d", &s1.standard);
	
	
	printf("%d %s %s %d", s1.age, s1.first_name, s1.last_name, s1.standard);
	
	
	return 0;
}
