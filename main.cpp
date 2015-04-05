#include<iostream>
#include <stdlib.h>
using namespace std;
int main() 
{
	int i;
	int nr;
	int numr;
	string op;
	float r1;
	int rn;
	bool salir;
	salir = false;
	do 
    {
		cout << "|--------------------|" << endl;
		cout << "|Suma de Resistencias|" << endl;
		cout << "|--------------------|" << endl;
		cout << "" << endl;
		cout << "Elegir Opcion:" << endl;
		cout << "" << endl;
		cout << "  1 - Resistencias en Serie" << endl;
		cout << "  2 - Resistencias en Paralelo" << endl;
		cout << "  0 - Salir del Programa" << endl;
		cout << "" << endl;
		cin >> op;
		cout << endl;
		if (op=="1") 
        {
			cout << "Ingresar Cantidad de Resistencias" << endl;
			cin >> nr;
			cout << "Ingresar Valor de R1" << endl;
			cin >> r1;
			numr = 1;
			for (i=1;i<=nr-1;i++) 
            {
				numr = numr+1;
				cout << endl;
				cout << "Ingresar Valor de R" << numr << endl;
				cin >> rn;
				r1 = r1+rn;
			}
			cout << endl;
			cout << "Resistencia Total=" << r1 << endl;
			cout << "---------------------------------" << endl;
			system("PAUSE");
            system("cls");
			cout << endl;
		} 
        else 
        {
			if (op=="2") 
            {
				cout << endl;
                cout << "Ingresar Cantidad de Resistencias" << endl;
                cin >> nr;
                cout << "Ingresar Valor de R1" << endl;
                cin >> r1;
                numr = 1;
				for (i=1;i<=nr-1;i++) 
                {
					numr = numr+1;
					cout << "Ingresar Valor de R" << numr << endl;
					cin >> rn;
					r1 = (r1*rn)/(r1+rn);
				}
				cout << "Resistencia Total=" << r1 << endl;
				cout << "---------------------------------" << endl;
                system("PAUSE");
                system("cls");
                cout << endl;
			} 
            else 
            {
				if (op=="0") 
                {
					salir = true;
				} 
                else 
                {
					cout << "Opcion No valida!" << endl;
					cout << "---------------------------------" << endl;
					system("PAUSE");
                    system("cls");
                    cout << endl;
				}
			}
		}
	} 
    while (!(salir));
	cout << "ADIOS" << endl;
	cout << endl;
	cout << "Made by TheFR4NC1SC0" << endl;
	cout << endl;
	system("PAUSE");
    return 0;
}
