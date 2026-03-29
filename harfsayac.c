#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void MetinGir(char* ptr);
void Hesapla(char* ptr);
int main(int argc, char *argv[]) {
	
	char metin[100];
	MetinGir(metin);
	Hesapla(metin);
	
	
	
	
	
	return 0;
}
void MetinGir(char* ptr){
	printf("Metninizi giriniz.\n");
	gets(ptr);
	printf("Girdiginiz metin : %s\n",ptr);
	
	
}

void Hesapla(char* ptr){
	int i,hesap[26],boyut;
	boyut = strlen(ptr);
	
	for(i=0;i<26;i++){
		hesap[i]=0;
	}
	
	for(i=0;i<boyut;i++){
		if(*(ptr+i)>='A' && *(ptr+i)<= 'Z'){
			*(ptr+i) = *(ptr+i) + 32;
		}
	}
	
	for(i=0;i<boyut;i++){
		if(*(ptr+i)>='a' && *(ptr+i)<= 'z'){
			hesap[*(ptr+i) - 97]++;
		}
		
	}
	for(i=0;i<26;i++){
		if(hesap[i]!=0){
		printf("%c : %d\n",(i+97),hesap[i]);
		}
	}
	
	
}
