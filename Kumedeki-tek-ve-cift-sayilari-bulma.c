#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	
	int number,i;
	printf("Kac sayi girceginizi yazin.\n");
	scanf("%d",&number);
	
	int kume[number];
	
	printf("Sayilari girme işlemi başlıyor.\n");
	for(i=0;i<number;i++){
		printf("Sayi giriniz.\n");
		scanf("%d",&kume[i]);
	}
	printf("Cift Sayilar: \n");
	for(i=0;i<number;i++){
		if(kume[i]%2==0){
			printf("%d ",kume[i]);
		}
	}
	
	printf("\n Tek Sayilar: \n");
	for(i=0;i<number;i++){
		if(kume[i]%2!=0){
			printf("%d ",kume[i]);
		}
	}
	
	
	
	return 0;
}
