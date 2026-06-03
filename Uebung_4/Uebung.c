/*
=====================================================
  Autor:				Name
  Erstellungsdatum:		dd.mm.yyyy
  Beschreibung:         4. Übung zur Vorlesung Programmieren 2
  Datei:				Uebung_4.c - Aufgaben zur vierten Übung
=====================================================
*/
   
#include <stdio.h>
#include "MatrixMath.h"
#include "char_cnt.h"
#include "StringManipulation.h"


//Deklaration der Funktion calc
//static double calc(int op1, int op2, char operation);
static void calc();


int main(void)	//Block 1
{		

	
	{	//Block 2
		char satz[] = { "wIrrWarr vOn gross- und kleinBuchsTaben!" };

		int i = 0;

		while (satz[i])
		{
			if(satz[i] >= 'a' && satz[i] <= 'z')
			{
				satz[i] = satz[i] - ('a' - 'A');
			}
			i++;
		}

		printf("%s\n", satz);				//Textausgabe
	}

	{	//Block 3
		int zeile, spalte;
		double A[3][3] = { {1.0, 2.0, 3.0},{4.0, 5.0, 6.0},{7.0, 8.0, 9.0} };
		double b[] = { 1.0, 2.0, 3.0 };
		double x[3] = { 0.0 };

		double A2[4][3] = { {1.0, 2.0, 3.0},{4.0, 5.0, 6.0},{7.0, 8.0, 9.0},{10.0, 11.0, 12.0} };
		double b2[] = { 1.0, 2.0, 3.0, 4.0 };

		double x2[4] = { 0.0 };
		
		int n = 0;
		int m = 0;

		for (; n < 3; n++)
		{
			m = 0;
			for (; m < 3; m++)
			{
				x[n] += A[n][m] * b[m];
			}
		}
		x[0] = x[0];
		x[1] = x[1];
		x[2] = x[2];

		// MatrixMul(A, b, x);
		MatrixMul2(A2, 4, 3, b2, x2);
		x2[0] = x2[0];
	}

	{	//Block 4
		
		calc();

	}

	{	//Block 5
		char satz[] = { "HS-Kempten Programmieren 2" };
		int cnt = character_cnt(satz, 'm');
		printf("Anzahl der gesuchten Zeichen: %d\n", cnt);
	}

}



//Definition der Funktion calc 
/*
static double calc(int op1, int op2, char operation)
{
	double erg = 0;

	if (op2 == 0 && operation == '/')
	{
		print("Eine Division durch Null ist nicht erlaubt! \n");
		return 0.0;
	}


	switch (operation)
	{
		case '+':
			erg = op1 + op1;
			break;
		
		case '-':
			erg = op1 - op1;
			break;

		case '/':
			erg = op1 / op1;
			break;

		case '*':
			erg = op1 * op1;
			break;

		default:
			printf("Keine gueltige Operation!\n");
			erg = 0;
			break;

	}
	return erg;
}
*/

static void calc()
{
	char text[10];

	printf("Geben Sie die erste Zahl ein: \n");
	fgets(text, 10, stdin);
	int op1 = atoi(text);

	printf("Geben Sie die zweite Zahl ein: \n");
	fgets(text, 10, stdin);
	int op2 = atoi(text);

	printf("Geben Sie den Operator ein: \n");
	fgets(text, 10, stdin);
	char operation = text[0];

	double erg = 0;

	if (op2 == 0 && operation == '/')
	{
		printf("Eine Division durch Null ist nicht erlaubt! \n");
	}
	else
	{

		switch (operation)
		{
		case '+':
			erg = op1 + op2;
			break;

		case '-':
			erg = op1 - op2;
			break;

		case '/':
			erg = op1 / op2;
			break;

		case '*':
			erg = op1 * op2;
			break;

		default:
			printf("Keine gueltige Operation!\n");
			erg = 0;
			break;

		}
	}

	printf("Ergebnis: %f\n", erg);
}