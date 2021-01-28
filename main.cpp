#include <iostream>
using namespace std;
#include <fstream>



int main() 
{
  string nombre;
  string apellido;
  int edad, ID;
  char r;
  ofstream archivoprueba;
  string nombrearchivo;
  cout<<"Ingrese el nombre del archivo:\n";
  //cin>>nombrearchivo;
  getline(cin, nombrearchivo);
  archivoprueba.open(nombrearchivo.c_str(),ios :: out);
  do
  {
    cout<<"Ingrese el nombre:\n";
    getline(cin,nombre);
    cout<<"Ingrese el apellido:\n";
    getline(cin,apellido);
    cout<<"Ingrese la edad:\n";
    cin>>edad;
    cout<<"Ingrese su ID:\n";
    cin >>ID;
    archivoprueba<<nombre<<" "<<apellido<<" "<<edad<<""<<ID<<endl;
    cout<<"Desea ingresar otro contacto s/n:\n";
    cin>>r;
    cin.ignore();
  }
  while (r=='s');

  archivoprueba.close();


   ifstream archivolectura(nombrearchivo.c_str());
   string texto;
   while (!archivolectura.eof())
   {
     archivolectura>>nombre>>apellido>>edad>>ID;

     getline(archivolectura,texto);
     if(!archivolectura.eof())
     {
        cout<<"Nombre: "<<nombre<<endl;

        cout<<"Apellido: "<<apellido<<endl;

        cout<<"Edad: "<<edad<<endl;

        cout<<"ID: "<<ID<<endl;
     }

     
   }
archivolectura.close();
}