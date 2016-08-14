#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


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


	for(i = 1; i<=3 ;i++)
	{

		printf("Tentativa %d de 3\n",i);
		printf("Qual é o seu chute?");
		scanf("%d",&chute);
		printf("Seu chute foi %d",chute);
		int acertou = (chute == numeroSecreto);
		
		if(acertou)
		{
			printf("Parabéns Você Acertou !!!!!!!\n");
			printf("Jogue Novamente, você é um bom jogador !!!!\n");
		}
		else
		{

			int maior = chute > numeroSecreto;
			if(maior)
			{
				printf("Seu chute foi maior que o número secreto\n");
			}
			else
			{
				printf("Seu chute foi menor que o número secreto\n");
			}
		
		
		}
	}

	return 0;
}