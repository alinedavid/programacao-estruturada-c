#include <stdio.h>

int main()
{
    int valor,  maior, menor,  somadosnumeros, valor4;
    int i;
    i = 0;
    valor=0;
    do {

        printf("digite algo aqui:");
        scanf("%d", &valor);
        
        if(i==0){
        	maior=valor;
        	menor=valor;
        	somadosnumeros=valor;
		}
        if(valor > maior){
            maior = valor;
          somadosnumeros=somadosnumeros+maior;
		    
        }else if(valor < menor){
            menor = valor;
              somadosnumeros=somadosnumeros+menor;
        }
        i = i +1;
	}while(i <20);
       
printf("maior numero: %d\n", maior);
printf("menor numero: %d\n", menor);
printf("media dos numeros: %.1f", somadosnumeros/20.0);
    return 0;
}
