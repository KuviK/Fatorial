#include <stdio.h>
#include <stdlib.h>

/* Fun��o: aplica��o que solicita um numero ao utilizador e apresenta o fatorial desse numero
   Autor:  Lu�s Filipe */

int main(int argc, char *argv[]) {
	
	//Variaveis	
	int numero, fatorial;
	
	//Solicitar o numero a ser fatorizado
	printf("Introduza o numero: ");
	scanf("%d", &numero);

	//Fatorial do numero	
	fatorial = 1;
	while (numero > 1)
	{
		fatorial = fatorial * numero;   
	    numero = numero - 1;                    
    }
    
    //Apresenta��o do fatorial do numero
	printf("O fatorial e: %d\n", fatorial); 
	
	   
}
