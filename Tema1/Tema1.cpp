// Tema1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>


using namespace std;

int main()
{
	//Cerinta
	//
	//Intr-un brad sunt a globuri albe, de doua ori mai multe globuri rosii, iar globuri verzi cu 3 mai putine ca numarul
	//de globuri rosii.
	//Cate globuri sunt in total?
	//
	//Date de intrare
	//Programul citeste de la tastatura numarul total a
	//
	//Date de iesire
	//Programul va afisa pe ecran numarul total de globuri
	//
	//Restrictii si precizari
	// 2<= a <= 1000
	// 
	//Exemplu
	//
	//Intrare
	//7
	//
	//Iesire
	//32


	int a;

	cout << "Introduceti de la tastatura numarul total a " << endl;

	cin >> a;

	int total = a + 2 * a + (2 * a - 3);

	cout << "Numarul total de globuri este :" << total;




}