#include<stdio.h>

int main(void){
	
	unsigned i, yedek, yedek2;
	int fac;
	float toplam = 0.00;
	float kat;
	
	printf("Sıfırdan farklı bir sayi giriniz : ");
	scanf("%d", &i);
	yedek = i;
	
	while( yedek >= 1 ){
	
		
		if( yedek == i ){
			
			kat = 1.00;
		}
		
		else if( yedek != i ){
			
			yedek2 = yedek;
			fac = 1;
			
			while( yedek2 >= 1){
			
			fac = fac * yedek2; 	
			--yedek2;
			
			}
			
			kat = 1 / (float)fac ;
		}
		
		
		toplam = toplam + kat;
		--yedek;
	}
	
	printf("Sonuc : %.3f", toplam );
}