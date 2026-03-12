🏦 CuentaBancaria - POO en C++
Simulación de un sistema bancario básico implementado en C++ usando Programación Orientada a Objetos (POO).

📋 Descripción
Este programa modela cuentas bancarias con operaciones esenciales como depósitos, retiros y transferencias entre cuentas. Está diseñado como ejercicio práctico de POO en C++, aplicando conceptos de encapsulamiento, clases y métodos.

🗂️ Estructura del proyecto
cuenta_Bancaria_POO.cpp   # Archivo fuente principal
README.md                 # Este archivo

🏗️ Clase CuentaBancaria
Atributos
AtributoTipoAccesoDescripciónidintprivateIdentificador único de la cuentanroCuentastringprivateNúmero de cuentasaldodoubleprivateSaldo disponiblepropietariostringpublicNombre del titular
Métodos
MétodoRetornoDescripciónCuentaBancaria(id, nroCuenta, saldo, propietario)—Constructor que inicializa todos los atributosdepositar(double monto)voidSuma el monto al saldo si es válido (> 0)retirar(double monto)boolResta el monto si hay saldo suficiente; retorna true/falsetransferir(CuentaBancaria &destino, double monto)voidTransfiere fondos a otra cuenta distintaverEstado()voidImprime número de cuenta, titular y saldo actual

⚙️ Compilación y ejecución
Requisitos

Compilador C++ con soporte para C++11 o superior (g++, clang++, MSVC)

Compilar
bashg++ -std=c++11 -o cuenta_bancaria cuenta_Bancaria_POO.cpp
Ejecutar
bash./cuenta_bancaria

💡 Ejemplo de uso
cppCuentaBancaria cuentaA(0, "1234", 0.0, "Juan Rodriguez");
CuentaBancaria cuentaB(1, "1235", 0.0, "Maria Lopez");

cuentaA.depositar(300.0);
cuentaA.retirar(340.0);         // Falla: saldo insuficiente
cuentaA.transferir(cuentaB, 100.0);

cuentaA.verEstado();
cuentaB.verEstado();
Salida esperada
saldo insuficiente
Cuenta: 1234 | Titular: Juan Rodriguez | Saldo actual: $200
Cuenta: 1235 | Titular: Maria Lopez    | Saldo actual: $100

🛡️ Validaciones implementadas

❌ No se permiten montos negativos en depósitos ni retiros
❌ No se puede retirar más saldo del disponible
❌ No se puede transferir dinero a la misma cuenta de origen


📌 Conceptos de POO aplicados

Encapsulamiento: atributos sensibles (saldo, id, nroCuenta) declarados como private
Constructores con lista de inicialización: inicialización correcta de atributos
Paso por referencia: transferir() recibe la cuenta destino por referencia (&)
Métodos con retorno booleano: retirar() comunica si la operación fue exitosa


👤 Autor
Proyecto educativo de práctica en C++ — POO básica.