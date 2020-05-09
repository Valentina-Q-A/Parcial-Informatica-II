#ifndef CODIGO_H
#define CODIGO_H
#include <iostream>
#include <fstream>
#include <string>
#include <map>
#include <vector>
#include <sstream>
#include <algorithm>
#include <iterator>
#include <string>
using namespace std;

struct combo{
    string comida;
    int valor;};

class Rango{
    public:
    void ingresar_productos();
    void crear_combos();
    void reporte_del_dia();
    void mirar_combos();
    void comprar_combo();
    void entrega_del_pedido();
    void leer_datos(string archivo);
    void escribir_datos(string archivo);
    void leer_admin(string archivo);
    void leer_usuarios(string archivo);
    
    void setAdministrador(map<string,string> admin) {
        Administrador = admin;
    }
    map<string,string> getAdministrador() {
        return Administrador;
    }
    void setUsuario(map<string,string> usuario) {
        Usuarios = usuario;
    }
    map<string,string> setUsuario() {
        return Usuarios;
    }
    

    private://proteccion get(para darle un valor de la variable) set(sacar el valor)
        map<string,string> Administrador;
        map<string,string> Usuarios;
        bool permiso;
        vector<combo> combos;
};

void menu();
void administrador();
void usuario();




#endif // CODIGO_H
