#include <stdio.h>
#include <stdlib.h>


int main() {
	
    float nota1, nota2, media;
	
	printf("Digite nota 1:"); 
	scanf("%f",&nota1);
	
	printf("Digite nota 2:"); 
	scanf("%f",&nota2);
	
	media = (nota1 + nota2)/2;
	
	printf("Media do aluno = %.1f\n",media);
	
    return 0;
}



