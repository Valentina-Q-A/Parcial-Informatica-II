#include "codigo.h"

void menu(){
    int N;
    cout<<"Ingrese un 1 para ingresar como administrador, 2 para metodo ingresar como usuario y otro numero para salir: ";
    cin>>N;
    switch (N){
        case 1:
            administrador();
        break;

        case 2:
            usuario();
        break;

        default:
            break;
}}



void Rango::ingresar_productos()//mirar bien valor es entero y debe ser string
{
    combo c;
    cout<<"Ingrese comida: "<<endl;
    getline(cin,c.comida);
    cout<<"Ingrese valor: "<<endl;
    cin>>c.valor;
    combos.push_back(c);
}

void Rango::leer_datos(string archivo)// poner en cada iter con los maps
{
    string Datos;
    ifstream datos(archivo);
        while(!datos.eof()){
            std::getline(datos,Datos);
            cout<<Datos<<endl;
        }
        datos.close();
}

void Rango::leer_admin(string archivo)//cada ' ' mustra la separacion entre usuario y contraseña los cuales se insertan en el admin
{
    string Datos;
    vector<string> datosArray;
    map<string,string> Administrador;
    ifstream datos(archivo);
        while(!datos.eof()){
            while(std::getline(datos,Datos,' ')){
                Administrador=getAdministrador();
                    datosArray.push_back(Datos);
                    Administrador.insert ( std::pair<string,string>(datosArray[0],datosArray[1]));
        }
        }
        datos.close();
        setAdministrador(Administrador);//agregarlos datos del administrador
}

void Rango::leer_usuarios(string archivo)// poner en cada iter con los maps
{
    string Datos;
    ifstream datos(archivo);
        while(!datos.eof()){
            std::getline(datos,Datos);
            cout<<Datos<<endl;
        }
        datos.close();
}




void Rango::escribir_datos(string archivo)
{
    ofstream datos(archivo, ios::out);
    for (auto k=combos.begin();k!=combos.end(); k++){
           datos<<k->comida<<' '<<k->valor<<endl;
       }
    datos.close();

}

void usuario(){

}

void administrador()
{
//    for(auto a=Administrador.begin();)
}
