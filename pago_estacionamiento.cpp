#include <iostream>
#include <string>
using namespace std;

/*
Funcion que calcula la cantidad a pagar por concepto de estacionamiento
    de 1 a 5 horas, la hora cuesta $10
    de 6 a 10 horas, la hora cuesta $9
    por mas de 10 horas el costo es de $7
*/
float pago_estacionamiento(int horas)
{
	int cant(0);
	if (horas>=0 && horas<=5)
		cant = horas*10;
	if (horas>=6 && horas<=10)
		cant = horas*9;
	if (horas>11)
		cant = horas*7;

	return cant;
}

string evaluate(float fValue, float sValue){
	if(fValue == sValue) {
		return "Pass";
	} else {
		return "Fail";
	}
}

void casos_de_prueba(){

    cout << "TEST CASES" << endl;
    // Agrega tus casos de prueba
		cout << " TestData  |";
		cout << " Expected  |";
		cout << " Obtained  |";
		cout << " Pass/Fail |" << endl;

		//EP
		cout << "      4      " << "     40     " << "     " << pago_estacionamiento(4)  << "     " << "    " << evaluate(40, pago_estacionamiento(4))   << "    " << endl;
		cout << "      7      " << "     63     " << "     " << pago_estacionamiento(7)  << "     " << "    " << evaluate(63, pago_estacionamiento(7))   << "    " << endl;
		cout << "      12     " << "     84     " << "     " << pago_estacionamiento(12) << "     " << "    " << evaluate(84, pago_estacionamiento(12))  << "    " << endl;

		//BVA
		cout << "      -1     " << "      0     " << "     " << pago_estacionamiento(-1) << "     " << "    " << evaluate(0, pago_estacionamiento(-1))  << "    " << endl;
		cout << "      5      " << "     50     " << "     " << pago_estacionamiento(5)  << "     " << "    " << evaluate(50, pago_estacionamiento(5))  << "    " << endl;
		cout << "      6      " << "     54     " << "     " << pago_estacionamiento(6)  << "     " << "    " << evaluate(54, pago_estacionamiento(6))  << "    " << endl;
		cout << "      10     " << "     90     " << "     " << pago_estacionamiento(10) << "     " << "    " << evaluate(90, pago_estacionamiento(10)) << "    " << endl;
		cout << "      11     " << "     77     " << "     " << pago_estacionamiento(11) << "     " << "    " << evaluate(77, pago_estacionamiento(11))  << "    " << endl;
    cout << endl;

}

int main()
{

    casos_de_prueba();

	return 0;
}
