#include<stdio.h>

int main(void){

	int number, b1, b2 ,b3 ,b4, b5;
	
	printf("5 basamaklı bir sayi giriniz : ");
	scanf("%d", &number);
	
	b5 = number / 10000;
	number = number % 10000;
	
	b4 = number / 1000;
	number = number % 1000;
	
	b3 = number / 100;
	number = number % 100;
	
	b2 = number / 10;
	b1 = number % 10;
	
	if( b5 == b1 && b4 == b2 ){
		
		printf("Sayi palindrom sayidir!!");
	}	
	
	else{
		
		printf("Sayi palindron sayi değildir");
	}

}