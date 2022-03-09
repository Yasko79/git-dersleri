#include<stdio.h>

int main(void){
	
	int number, yedek , kat, b1;
	
	printf("5 veya daha az basamaklı bir tam sayı giriniz : ");
	scanf("%d", &number );
	
	yedek = number;
	kat = 1;
	
	while( yedek > 1 ){
		
		b1 = yedek % 10;
		
		if( yedek == number ){
			
			kat = 1;
		}
		
		else if( yedek != number ){
			
			kat = 10 * kat;
		}
		
		if( b1 % 7 == 0 ){
			
			if( b1 != 0){
			
			printf("%d\n", kat * b1 );
			
			}
				
		}
		
		yedek /= 10;
	
	}

}