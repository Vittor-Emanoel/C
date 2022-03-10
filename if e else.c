#include <stdio.h>
//Vittor-Emanoel
int main() {
	
	float nota1=0 , nota2=0;
	int media = 0;
	
	printf("Digite a primeira nota:");
	scanf("%f", &nota1);
	
	printf("Digite a segunda nota:");
	scanf("%f", &nota2);
	
	media = (nota1 + nota2)/2;
	
	if(media <= 5){
		printf("Reprovado!");
		
	}else{
		
		printf("aprovado!");
	}
	
}
