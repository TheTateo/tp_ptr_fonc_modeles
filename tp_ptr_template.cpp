#include <iostream>

using namespace std;

template<typename T, typename R>
R moyenne(const T tableau[], int taille)
{
	R somme = 0;
	for (int i = 0; i < taille; ++i) {
		somme += tableau[i];
	}
	return somme / taille;
}

int main()
{
	// tableau
	int tabInt[] = { 1, 2, 3, 4, 5 };

	// int vers int
	int moyInt = moyenne<int, int>(tabInt, 5);
	cout << "Moyenne (int -> int) : " << moyInt << endl;

	// int vers float
	float moyFloat = moyenne<int, float>(tabInt, 5);
	cout << "Moyenne (int -> float) : " << moyFloat << endl;

	// float vers double
	float tabFloat[] = { 1.1, 2.2, 3.3, 4.4, 5.5 };
	double moyDouble = moyenne<float, double>(tabFloat, 5);
	cout << "Moyenne (float -> double) : " << moyDouble << endl;

	return 0;
}
