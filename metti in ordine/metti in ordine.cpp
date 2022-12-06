// Benny Ye
// Srivi un programma che legge in input mediante una funzione/metodo tre umeri diversi tra loro e li visualizza ordinati in senso crescente.


#include <iostream>

using namespace std;

void sort() {

	int n1, n2, n3;
	cout << "Inserisci 3 cifre\n";
	cin >> n1 >> n2 >> n3;

	if (n1 > n3)
		swap(n1,n3);

	if (n1 > n2)
		swap(n1, n2);

	if (n2 > n3)
		swap(n2, n3);

	cout << n1 << " " << n2  << " " << n3;
}

int main() {
	sort();
	return 0;
}