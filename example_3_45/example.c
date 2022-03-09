#include<stdio.h>

int main(void){
	
	unsigned int n, yedek, fac;
	
	printf("Bir sayi giriniz : ");
	scanf("%d", &n);
	
	yedek = n;
	fac = 1;
	
	while( n >= 1 ){
	
		fac = fac * n;
		--n;
	}
	
	printf("%d", fac);

}