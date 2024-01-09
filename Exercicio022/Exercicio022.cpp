/*
Exercicio022.cpp

escreva um programa que leia um numero inteiro.
vamos supor que seja digitado um numero entre 0 á 10(inclusive)
escreva na tela o numero digitado por extenso. 
*/

#include <iostream>

int main()
{
    int numero;

    printf("digite um numero de 0 a 10: ");
    scanf_s("%d", &numero);

	switch (numero)
	{
	case 0:
		printf("zero \n");
		break;
	case 1:
		printf("um \n");
		break;
	case 2:
		printf("dois \n");
		break;
	case 3:
		printf("tres \n");
	case 4:
		printf("quatro \n");
	case 5:
		printf("cinco \n");
		break;
	case 6:
		printf("seis \n");
	case 7:
		printf("sete \n");
		break;
	case 8:
		printf("oito \n");
		break;
	case 9:
		printf("nove \n");
		break;
	case 10:
		printf("dez \n");
	default:
		printf("numero esta fora da faixa entre 0 a 10 \n");
		break;
	}
}


