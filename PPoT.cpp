#include <iostream>
using namespace std;

class Jugador {
private:
	short jugada;
public:
	int puntaje;
	short getJugada() {
		return jugada;
	}
	void setJugada(short newJugada) {
		jugada = newJugada;
	}
};

int main(){
	Jugador jugador1;
	Jugador jugador2;
	contrincante.setJugada(3);
	cout << "Jugador 1"
	cout << "introduzca su jugada (1 = piedra; 2 = papel; 3 = tijera)" << endl;
	cin >> jugador1.setJugada;
	cout << jugador1.getJugada;
	return 0;
}