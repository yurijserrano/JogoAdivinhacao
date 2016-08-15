#include <stdio.h>
#include <stdlib.h>
#include <time.h>
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

	int i =1;
	int segundos = time(0);
	srand(segundos);
	int numerogrande = rand();
	int numeroSecreto = numerogrande % 100;
	int chute =0;
	int acertou = 0;	
	int tentativas = 1;
	double pontos = 1000;
	int nivel;
	int numeroDeTentativas = 0;

	printf("Qual o nivel de dificuldade?\n");
	printf("(1) Facil | (2) Medio | (3) Dificil \n\n");
	printf("Escolha:");
	scanf("%d",&nivel);

	switch(nivel)
	{
		case 1:
			numeroDeTentativas = 20;
			break;
		case 2:
			numeroDeTentativas =  15;
			break;
		default:
			numeroDeTentativas = 6;
			break;
	}


	for(i = 1; i <= numeroDeTentativas; i++)
	{

		printf("Tentativa %d \n ",tentativas);
		printf("Qual é o seu chute?");
		scanf("%d",&chute);
		printf("Seu chute foi %d\n",chute);

		if (chute < 0 )
		{
			printf("Voce não pode chutar números negativos!!!!!\n");
			continue;

		}

		acertou = (chute == numeroSecreto);
		int maior = chute > numeroSecreto;		

		if(acertou)
			break;
			
		else if(maior)
		{
			printf("Seu chute foi maior que o número secreto\n");
		}
		else 
		{
			printf("Seu chute foi menor que o número secreto\n");
		}		
		tentativas++;
		double pontosperdidos = abs((double)(chute - numeroSecreto))/2;

		pontos -= pontosperdidos;
	}

	printf("Fim de Jogo!!!!\n");
	
	if(acertou)
	{
		printf("Parabéns Você Ganhou !!!!!!!\n");
		printf("Você Acertou em %d tentativas\n",tentativas);
		printf("Total de pontos: %.1f\n",pontos);		
	}
	else
	{
		printf("Voce perdeu! Tente de Novo!\n");
	}
	
	return 0;
}