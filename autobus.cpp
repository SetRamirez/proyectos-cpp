#include <iostream>
using namespace std;
class Autobus
{
private:
	float combustible;
	int pasajeros;
public:
	int nroAsientos;
	float tarifa;

	//constructor  -> es una funcion PARTICULAR permite configurar el objeto.
	// tiene el mismo nombre de la clase
	// comunmente es publico
	// Una clase puede tener 0, 1 o varios constructores
	Autobus() // -> CONSTRUCTOR POR DEFECTO
	{
		combustible = 100;
		pasajeros = 0;
		nroAsientos = 25;
		tarifa = 2;
	}
	Autobus(float con, int nroPas, int nroAs, float tar ) // -> CONSTRUCTOR con parametros
	{
		combustible = con;
		pasajeros = nroPas;
		nroAsientos = nroAs;
		tarifa = tar;
	}
	void Imprimir()
	{
		cout << "Total Asientos " << nroAsientos  << endl;
		cout << "Tarifa " << tarifa  << endl;
		cout << "Total Combustible " << combustible  << endl;
		cout << "Nro de Pasajeros " << pasajeros  << endl;
	}
	void cargarCombustible(float cantidad) {
		if (cantidad > 0) {
			if (combustible + cantidad) {
				combustible = capacidadTanque;
			}
			else {
				combustible = combustible + cantidad;
			}
		}
		else {
			cout << "Cantidad Invalida" << endl;
		}
	}
	void recogerPasajeros(int nuevosPasajeros) {
		if (nuevosPasajeros > 0) {
			if (pasajeros + nuevosPasajeros > nroAsientos) {
				nroPasajeros = nroAsientos;
			}
			else {
				nroPasajeros = nroPasajeros + nuevosPasajeros;
			}
		}
		else {
			cout<<"cantidad de pasajeros invalida"
		}
	}
	int calcularAsientosLibres() {
		return asientos - pasajeros;
	}
	float calcularPagoFullear(float costo) {
		return (capacidadTanque-combustible)*costo;
	}

	float getCombustible() { return combustible; }
	int   getPasajeros() { return pasajeros; }

	void  setCombustible(float newCombustible) { combustible = newCombustible; }
	void  setPasajeros(int newPasajeros) { pasajeros = newPasajeros; }
};
int main()
{
	Autobus a1, a2, a3(200, 0, 50, 5);
	cout << a1.nroAsientos << endl;
	cout << a2.nroAsientos << endl;
	cout << a3.nroAsientos << endl;
	a1.Imprimir();


	// Autobus A1, A2;// configurar el objeto A2 con 20 asientos, cobra 5, no tiene combustible y tiene 20 pasajeros
	// A1.nroAsientos = 10;
	// A1.tarifa = 3;
	// A1.setCombustible(100);
	// A1.setPasajeros(0);

	// cout<< "Total Asientos "<< A1.nroAsientos<<endl;
	// cout<< "Tarifa "<< A1.tarifa<<endl;
	// cout<< "Total Combustible "<< A1.getCombustible()<<endl;
	// cout<< "Nro de Pasajeros "<< A1.getPasajeros()<<endl;


	// A2.nroAsientos = 20;
	// A2.tarifa = 5;
	// A2.setCombustible(0);
	// A2.setPasajeros(20);

	// cout<< "Total Asientos "<< A2.nroAsientos<<endl;
	// cout<< "Tarifa "<< A2.tarifa<<endl;
	// cout<< "Total Combustible "<< A2.getCombustible()<<endl;
	// cout<< "Nro de Pasajeros "<< A2.getPasajeros()<<endl;

	// Autobus A3;
	// A3.nroAsientos = 50;
	// A3.tarifa = 1;
	// A3.setCombustible(0);
	// A3.setPasajeros(0);

	// cout<< "Total Asientos "<< A3.nroAsientos<<endl;
	// cout<< "Tarifa "<< A3.tarifa<<endl;
	// cout<< "Total Combustible "<< A3.getCombustible()<<endl;
	// cout<< "Nro de Pasajeros "<< A3.getPasajeros()<<endl;

	return 0;
}