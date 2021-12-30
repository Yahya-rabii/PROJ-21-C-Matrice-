#include <iostream>
#include "Header.h"

using namespace std;

int main()
{
	Matrice m1(2, 2);
	Matrice m2(2, 2);
	cout << endl;
	m1.remplissage();
	m2.remplissage();
	cout << endl;
	m1.affichage();
	m2.affichage();
	cout << endl;
	Matrice m3 = m1 + m2;
	m3.affichage();
	cout << endl;
    Matrice	m4 = m3 * m2;
	m4.affichage();
	cout << endl;
}