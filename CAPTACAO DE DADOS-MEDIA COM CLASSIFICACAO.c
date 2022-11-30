#include <stdio.h>
#include <stdlib.h>


int main() {
	
    float nota1, nota2, media;
	
	printf("Digite nota 1:"); 
	scanf("%f",&nota1);
	
	printf("Digite nota 2:"); 
	scanf("%f",&nota2);
	
	media = (nota1 + nota2)/2;
	
	if (media>=9 && media<=10){
		printf("Media do aluno = %.1f classificacao A \n",media);
	}else if(media>=8 && media<9){
		printf("Media do aluno = %.1f classificacao B \n",media);
	}else if(media>=7 && media<8){
		printf("Media do aluno = %.1f classificacao C \n",media);
	}else if(media>=6 && media<7){
		printf("Media do aluno = %.1f classificacao D \n",media);
	}else {
		printf("Media do aluno = %.1f classificacao F \n",media);
	}

    return 0;
}

