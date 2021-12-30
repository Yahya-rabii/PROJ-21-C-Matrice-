#include "Header.h"
#include <iostream>
#include <assert.h>

using namespace std;




Matrice::Matrice(int l, int c)
{

	this->l = l;
	this->c = c;

	this->mat = new int* [l];

	for (int i = 0; i < l; i++)
	{

		this->mat[i] = new int[c];

	}



}

void Matrice::remplissage()
{
	int val = 0;

	for (int i = 0; i < this->l; i++)
	{

		for (int j = 0; j < this->c; j++)
		{

			cout << "entree une valeur de la case ["<<i<<"]"<<"["<<j<<"]"<< "::" << endl;
			cin >> val;
            this->mat[i][j] = val;

		}

	}

}

void Matrice::affichage()
{
	int val = 0;

	for (int i = 0; i < this->l; i++)
	{

		for (int j = 0; j < this->c; j++)
		{

			cout <<  this->mat[i][j] << " ";
			

		}

		cout << endl;

	}

}

Matrice& Matrice::operator+(const Matrice& mat1) // yahya rabii 
{
	Matrice* matr = new Matrice(this->l, this->c);	

	for (int i = 0; i < this->l; i++)
	{

		for (int j = 0; j < this->c; j++)
		{

			matr->mat[i][j] = this->mat[i][j] + mat1.mat[i][j];

		}

	}
	return *matr;

}

Matrice Matrice::operator-(const Matrice& mat1)
{
	Matrice* matr = new Matrice(this->l, this->c);	

	for (int i = 0; i < this->l; i++)
	{

		for (int j = 0; j < this->c; j++)
		{

			matr->mat[i][j] = this->mat[i][j] - mat1.mat[i][j];

		}

	}
	return *matr;

}

Matrice Matrice::operator*(const Matrice& mat1)
{

	assert((this->l == mat1.c ));

	Matrice* matr = new Matrice(this->l, this->c);

	int somme;
	
	for (int i = 0; i < this->l; i++)
	{

		for (int j = 0; j < mat1.c; j++)
		{
			 somme = 0;

			for (int t = 0; t < mat1.c; t++)
			{

				somme += this->mat[i][t] * mat1.mat[t][j];
				

			}
			matr->mat[i][j] = somme;
		}

	}
			return *matr;

}

Matrice::~Matrice()
{

	for (int i = 0; i < this->l; i++)
	{
     
		delete[] this->mat[i];
		this->mat[i] = nullptr;
	}

	delete[] this->mat;
	this->mat = nullptr;




}
