#include<stdio.h>

int main(void){

	int number, yedek, b1, kat;
	int toplam = 0;
	
	printf("5 veya daha az basamaklı binary sayi giriniz : ");
	scanf("%d", &number );
	
	yedek = number;
	kat = 1;
	
	while( yedek > 0 ){
		
		b1 = yedek % 10;
		
		if( yedek == number ){
				
			kat = 1;	
			
		}
		
		
		else if ( yedek != number ){
		
			kat = kat * 2;	
			
		}
		
		
		yedek /= 10;
		toplam = ( b1 * kat ) + toplam ; 
		
	}
	
	printf("%d' nin onluk karşılığı : %d'dir", number, toplam );
	
		
	
}