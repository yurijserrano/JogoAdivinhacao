#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define NUMERO_DE_TENTATIVAS 5


int main(){

	/*
		Corrige a acentuação no terminal
	*/
	setlocale(LC_ALL, "Portuguese");


	/*
		Imprime o cabeçalho do jogo
	*/
	printf("******************************************\n");
	printf("* Bem Vindo ao nosso jogo de adivinhação *\n");
	printf("******************************************\n");

	int numeroSecreto = 42;
	int chute =0;
	
	int i ;

	//printf("O número %d é o secreto. Não Conta pra ninguém\n",numeroSecreto);


	for(i = 1; i<=NUMERO_DE_TENTATIVAS ;i++)
	{

		printf("Tentativa %d de %d\n",i,NUMERO_DE_TENTATIVAS);
		printf("Qual é o seu chute?");
		scanf("%d",&chute);
		printf("Seu chute foi %d",chute);

		if (chute < 0 )
		{
			printf("VocÊ não pode chutar números negativos!!!!!\n");
			i--;
			continue;

		}

		int acertou = (chute == numeroSecreto);
		int maior = chute > numeroSecreto;
		int menor = chute < numeroSecreto;

		if(acertou)
		{
			printf("Parabéns Você Acertou !!!!!!!\n");
			printf("Jogue Novamente, você é um bom jogador !!!!\n");
			break;
		}
		else if(maior)
		{
			printf("Seu chute foi maior que o número secreto\n");
		}
		else 
		{
			printf("Seu chute foi menor que o número secreto\n");
		}		
		
	}
	printf("Fim de Jogo!!!!\n");
	return 0;
}