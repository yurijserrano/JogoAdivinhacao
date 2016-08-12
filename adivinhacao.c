#include <stdio.h>


int main(){


	/*
		Imprime o cabeçalho do jogo
	*/
	printf("******************************************\n");
	printf("* Bem Vindo ao nosso jogo de adivinhação *\n");
	printf("******************************************\n");

	int numeroSecreto = 42;
	int chute =0;

	//printf("O número %d é o secreto. Não Conta pra ninguém\n",numeroSecreto);

	printf("Qual é o sue chute?");
	scanf("%d",&chute);
	printf("Seu chute foi %d",chute);

	return 0;
}