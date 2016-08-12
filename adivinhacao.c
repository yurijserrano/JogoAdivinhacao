#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(){





	/*
		Corrige a acentuação no terminal
	*/
	setlocale(LC_ALL, "");


	/*
		Imprime o cabeçalho do jogo
	*/
	printf("******************************************\n");
	printf("* Bem Vindo ao nosso jogo de adivinhação *\n");
	printf("******************************************\n");

	int numeroSecreto = 42;
	int chute =0;

	//printf("O número %d é o secreto. Não Conta pra ninguém\n",numeroSecreto);

	printf("Qual %c o seu chute?",130);
	scanf("%d",&chute);
	printf("Seu chute foi %d",chute);

	if(chute == numeroSecreto){
		printf("Parabéns Você Acertou !!!!!!!\n");
		printf("Jogue Novamente, você é um bom jogador !!!!\n");
	}
	else{
		if(chute > numeroSecreto)
		{
			printf("Seu chute foi maior que o número secreto\n");
		}
		if(chute < numeroSecreto)
		{
			printf("Seu chute foi menor que o número secreto\n");
		}
		printf("Número Errado!!!!!! Tente Novamente\n");
	}

	return 0;
}