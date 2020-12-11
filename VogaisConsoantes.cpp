#include <stdio.h>
#include<stdlib.h>
#include <string.h>
#include <locale.h>

//Faça um algoritmo que solicite ao usuário uma palavra/frase e informe a quantidade de
//vogais e de consoantes que esta frase possui e exiba a mesma invertida.
int main()
{
	setlocale(LC_ALL, "portuguese");

	char palavra[2000];
	int aux;
	int h = 0;
	int k = 0;
	int j = 0;
	int vogais = 0;
	int consoantes = 0;
	int i = 0;

	printf("\t\t\t\t\tInsira uma palavra ou frase\n\n");
	gets(palavra);

	// Vogais~
	for (i = 0; palavra[i] != '\0'; i++)
	{
		if (palavra[i] == 'a' || palavra[i] == 'A')
			vogais++;

		if (palavra[i] == 'e' || palavra[i] == 'E')
			vogais++;

		if (palavra[i] == 'i' || palavra[i] == 'I')
			vogais++;

		if (palavra[i] == 'o' || palavra[i] == 'O')
			vogais++;

		if (palavra[i] == 'u' || palavra[i] == 'U')
			vogais++;
	}

	printf("\n\nO numero de vogais nessa sentença é de: %d\n\n\n", vogais);

	for (j = 0; palavra[j] != '\0'; j++)
	{
		if (palavra[j] == 'b' || palavra[j] == 'B')
			consoantes++;

		if (palavra[j] == 'c' || palavra[j] == 'C')
			consoantes++;

		if (palavra[j] == 'd' || palavra[j] == 'D')
			consoantes++;

		if (palavra[j] == 'f' || palavra[j] == 'F')
			consoantes++;

		if (palavra[j] == 'g' || palavra[j] == 'G')
			consoantes++;

		if (palavra[j] == 'h' || palavra[j] == 'H')
			consoantes++;

		if (palavra[j] == 'j' || palavra[j] == 'J')
			consoantes++;

		if (palavra[j] == 'k' || palavra[j] == 'K')
			consoantes++;

		if (palavra[j] == 'l' || palavra[j] == 'L')
			consoantes++;

		if (palavra[j] == 'm' || palavra[j] == 'M')
			consoantes++;

		if (palavra[j] == 'n' || palavra[j] == 'N')
			consoantes++;

		if (palavra[j] == 'p' || palavra[j] == 'P')
			consoantes++;

		if (palavra[j] == 'q' || palavra[j] == 'Q')
			consoantes++;

		if (palavra[j] == 'r' || palavra[j] == 'R')
			consoantes++;

		if (palavra[j] == 's' || palavra[j] == 'S')
			consoantes++;

		if (palavra[j] == 't' || palavra[j] == 'T')
			consoantes++;

		if (palavra[j] == 'w' || palavra[j] == 'W')
			consoantes++;

		if (palavra[j] == 'x' || palavra[j] == 'X')
			consoantes++;

		if (palavra[j] == 'y' || palavra[j] == 'Y')
			consoantes++;

		if (palavra[j] == 'z' || palavra[j] == 'Z')
			consoantes++;
	}

	printf("O total de consoantes na sentença é de : %d\n\n ", consoantes);

	int qt = strlen(palavra);
	printf("\n\nA palavra/frase escrita de trás para frente equivale a: ");
	for (k = qt - 1; k >= 0; k--)
	{

		printf("%c", palavra[k]);
	}
}
