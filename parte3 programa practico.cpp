#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
    string nombreCliente;
    double precioProducto;
    int cantidad;
    double subtotal, iva, total;

    cout << "Ingresar nombre completo del cliente (nombres y apellidos): ";
    getline(cin, nombreCliente);

    cout << "precio del producto: ";
    cin >> precioProducto;

    cout << "cantidad comprada: ";
    cin >> cantidad;

    subtotal = precioProducto * cantidad;
    iva = subtotal * 0.12;
    total = subtotal + iva;

    cout << fixed << setprecision(2);

    cout << "\n----- FACTURA -----\n";
    cout << "Cliente: " << nombreCliente << endl;
    cout << "Subtotal: $" << subtotal << endl;
    cout << "IVA (12%): $" << iva << endl;
    cout << "Total a pagar: $" << total << endl;

    cout << "\nCreado por: Lisbeth Vanesa Lopez Catalan" << endl;

    return 0;
}
