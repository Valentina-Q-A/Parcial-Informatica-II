#include "codigo.h"


int main()
{
    Rango a;
    a.leer_datos("base_de_datos.txt");
    a.ingresar_productos();
    a.escribir_datos("base_de_datos.txt");
    a.ingresar_productos();
    a.escribir_datos("base_de_datos.txt");
    a.leer_admin("administrador.txt");

}
