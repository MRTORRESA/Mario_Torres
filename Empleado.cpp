//Empleado
#include "Persona.cpp"
#include <iostream>
using namespace std;
class Empleado : Persona{
	//atributos
	private : string nit;
	private : string codigo;
	private :  string puesto; 
	private : float sueldo;
	//constructor
	public :
	Empleado(){
	}
	Empleado(string nom,string ape,string dir,int tel,string n,string cod,string pue,float suel) : Persona(nom,ape,dir,tel){
		nit = n;
		cod = codigo;
		pue = puesto;
		sueldo = suel;
	}
	// set(modificar)
	void setNit(string n){nit = n;}
	void setNombres(string nom){nombres = nom;}
	void setApellidos(string ape){apellidos = ape;}
	void setDireccion(string dir){direccion = dir;}
	void setTelefono (int tel){telefono=tel;}
	void setCodigo(string cod){codigo = cod;}
	void setPuesto(string pue){puesto = pue;}
	void setSueldo(float suel){sueldo = suel;}
	//get (mostrar)
	string getNit(){return nit;}
	string getNombres(){return nombres;}
	string getApellidos(){return apellidos;}
	string getDireccion(){return direccion;}
	int getTelefono(){return telefono;}
	string getCodigo(){return codigo;}
	string getPuesto(){return puesto;}
	float getSueldo(){return sueldo;}
	void mostrar(){
		cout<<"__________________"<<endl;
		cout<<nit<<","<<nombres<<","<<apellidos<<","<<direccion<<","<<telefono<<","<<codigo<<","<<puesto<<","<<sueldo<<endl;
	}
};
