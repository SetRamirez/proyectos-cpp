#include <iostream>
using namespace std;

class Torre{
    private:
        int fila;
        int columna;
        bool esNegra;

        bool validarMovimiento(int nFila, int nColumna){
            if(this->fila == nFila || this->columna == nColumna){
                return true;
            }else{
                return false;
            }
        }
    public:
        Torre(int fila, int columna, bool esNegra):
        fila{fila},columna{columna}, esNegra{esNegra}{}

        string dibujar(bool esNegra){
            if(esNegra){
                return "[##]";
            }else{
                return "[TT]";
            }
        }
        void mover(int nFila, int nColumna){
            if(this->fila+nFila>8 || this->columna+nColumna>8){
                cout<<"el movimiento exede el tamaño del tablero";
            }else if(validarMovimiento(nFila,nColumna)){
                this->columna=+nColumna;
                this->fila=+nFila;
            }else{
                cout<<"Movimiento diagonal no permitido para la Torre";
            }
        }
        void imprimirEstado(){
            if(this->esNegra){
                cout<<dibujar(this->esNegra)<<" Negra en Fila: "<<this->fila<<" Col: "<< this->columna<<endl;
            }else{
                cout<<dibujar(this->esNegra)<<" Blanca en Fila: "<<this->fila<<" Col: "<< this->columna<<endl;
            }
            
        }
};

int main(){
    Torre t1(1,1,false);
    Torre t2(8,8,true);
    t1.imprimirEstado();
    t2.imprimirEstado();
    return 0;
}