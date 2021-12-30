#pragma once

class Matrice
{

private:

	int** mat;
	int l, c;

public:


	Matrice(int l , int c);
	void remplissage();
	void affichage();

	Matrice& operator + (const Matrice& mat);
	Matrice operator - (const Matrice& mat);
	Matrice operator * (const Matrice& mat);

	~Matrice();



};