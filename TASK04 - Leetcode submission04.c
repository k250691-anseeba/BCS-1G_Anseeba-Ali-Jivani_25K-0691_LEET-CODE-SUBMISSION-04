#include <stdio.h>

struct box{
	int length;
	int width;
	int height;
};

int main(){
	
	int i, n;
	do{
	printf("Enter number of boxes:  ");
	scanf("%d", &n);
	if(n<1 || n>100){
		printf("Enter in range (1-100). Re-enter.\n");
	}
    }while(n<1 || n>100);
	
	
	struct box b[n];
	
	for(i=0;i<n;i++){
	do{
	printf("Enter length for box %d: ", i+1);
	scanf("%d", &b[i].length);
	printf("Enter width for box %d: ", i+1);
	scanf("%d", &b[i].width);
	printf("Enter height for box %d: ", i+1);
	scanf("%d", &b[i].height);
	
	if(b[i].length > 100 || b[i].height > 100 || b[i].width >100 || b[i].length <1 || b[i].width <1 || b[i].height <1){
		printf("Value out of range! Width, Length and Height must be in range (1-100). Re-enter Values.\n");
	}
    }while(b[i].length > 100 || b[i].height > 100 || b[i].width >100 || b[i].length <1 || b[i].width <1 || b[i].height <1);
	}

	
	for(i=0;i<n;i++){
		if(b[i].height < 41){
		    printf("%d\n", b[i].height*b[i].length*b[i].width);
		}
	}
	
	return 0;
}
