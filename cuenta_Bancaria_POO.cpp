#include <iostream>
using namespace std;
class CuentaBancaria
{
private:
    int id;
    string nroCuenta;
    double saldo;
public:
    string propietario;
    CuentaBancaria(int id, string nroCuenta, double saldo, string propietario):
    id{id}, nroCuenta{nroCuenta},saldo(0.0),propietario{propietario}{
    }
    void depositar(double monto){
        if(monto<0){
            cout<<"introduzca un monto válido por favor \n";
        }else{
            this->saldo=saldo+monto;
        }

    }
    bool retirar(double monto){
        if(monto<0){
            cout<<"introduzca un monto válido por favor \n";
            return false;
        }else if(this->saldo<monto){
            cout<<"saldo insuficiente \n";
            return false;
        }else{
            this->saldo=saldo-monto;
            return true;
        }
    }
    void transferir(CuentaBancaria &destino, double monto){
        if(this->retirar(monto)){
            if(this->id != destino.id){
                destino.depositar(monto);
            }else{
                cout<<"esta tratando de transferir a su propia cuenta"<<endl;
            }
        }else{
            cout<<"el monto es invalido o no hay saldo suficiente"<<endl;
        }
        
    }
    void verEstado(){
        cout<<"Cuenta: "<<this->nroCuenta<<'|'<<" Titular: "<<this->propietario<<'|'<<" Saldo actual: $"<<this->saldo<<endl;
    }
};

int main(){
    CuentaBancaria cuentaA(0,"1234"s,0.0f, "Juan Rodriguez"s);
    CuentaBancaria cuentaB(1,"1235"s,0.0f, "Maria Lopez"s);
    cuentaA.depositar(300.0);
    cuentaA.retirar(340.0);

    cuentaA.transferir(cuentaB,100.0);

    cuentaA.verEstado();
    cuentaB.verEstado();

   return 0; 
}