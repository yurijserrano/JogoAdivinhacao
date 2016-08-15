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
	
	
	int tentativas = 1;
	int pontos = 1000;
	

	while(1)
	{

		printf("Tentativa %d \n ",tentativas);
		printf("Qual é o seu chute?");
		scanf("%d",&chute);
		printf("Seu chute foi %d\n",chute);

		if (chute < 0 )
		{
			printf("VocÊ não pode chutar números negativos!!!!!\n");
			continue;

		}

		int acertou = (chute == numeroSecreto);
		int maior = chute > numeroSecreto;		

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
		tentativas++;
		int pontosperdidos = (chute - numeroSecreto)/2;
		pontos -= pontosperdidos;
	}
	printf("Fim de Jogo!!!!\n");
	printf("Você Acertou em %d tentativas\n",tentativas);
	printf("Total de pontos: %d\n",pontos);
	return 0;
}