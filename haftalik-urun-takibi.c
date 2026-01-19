#include <stdio.h>
#include <stdlib.h>



int main(int argc, char *argv[]) {
	
	int day,urun1=0,urun2=0,urun3=0,urun4=0,urun5=0,urun6=0,urun7=0,toplam=0;
	
	printf("Hangi gunde oldugunuzu giriniz.(1-7)\n");
	scanf("%d",&day);
	
	switch(day){
		
		case 7: 
				printf("Pazar günü kac urun satildi.\n");
				scanf("%d",&urun7);
				toplam=urun7;
		
		case 6: 
				printf("Cumartesi günü kac urun satildi.\n");
				scanf("%d",&urun6);
				toplam=urun7+urun6;
				
		case 5: 
				printf("Cuma günü kac urun satildi.\n");
				scanf("%d",&urun5);
				toplam=urun7+urun6+urun5;
				
		case 4: 
				printf("Persembe günü kac urun satildi.\n");
				scanf("%d",&urun4);
				toplam=urun7+urun6+urun5+urun4;
				
		case 3: 
				printf("Carsamba günü kac urun satildi.\n");
				scanf("%d",&urun3);
				toplam=urun7+urun6+urun5+urun4+urun3;
				
		case 2: 
				printf("Sali günü kac urun satildi.\n");
				scanf("%d",&urun2);
				toplam=urun7+urun6+urun5+urun4+urun3+urun2;
				
		case 1: 
				printf("Pazartesi günü kac urun satildi.\n");
				scanf("%d",&urun1);
				toplam=urun7+urun6+urun5+urun4+urun3+urun2+urun1;
				break;
				
		default: printf("Hatali secim");
		break;
		
		
	}
	printf("Bugune kadar hafta basindan beri satilan urun: %d",toplam);
	
	
	
	
	
	return 0;
}
