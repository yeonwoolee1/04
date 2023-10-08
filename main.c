#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a; 
	printf("input the second:");
	scanf("%i",&a);
	
	int b= a%3600;
	printf("the time is for %i second is %i:%i:%i\n",a, a/3600, b/60,b%60);
	
	return 0;
}
