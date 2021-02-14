
//main
#include "Empleado.cpp"
#include <iostream>
using namespace std;
main(){
	string nit,nombres,apellidos,direccion,codigo,puesto;
	int telefono,sw;
	float sueldo;
	cout<<"Ingrese el numero de usuario que desea registrar: "<<endl;
	cout<<"1. Empleado"<<endl;
	cout<<"2. Cliente"<<endl;
	cin>>sw;
	Empleado obj = Empleado();
	switch(sw){
	case 1: 
	cout<<"Ingrese los datos del Empleado: "<<endl;
	cout<<"Ingrese Nit: ";
	cin>>nit;
	cout<<"Ingrese codigo ";
    cin>>codigo;
	cout<<"Ingrese Puesto: ";
	cin>>puesto;
	cout<<"Ingrese Nombres: ";
	cin>>nombres;
	cout<<"Ingrese Apellidos: ";
	cin>>apellidos;
	cout<<"Ingrese Direccion: ";
	cin>>direccion;
	cout<<"Ingrese Telefono: ";
	cin>>telefono;
	cout<<"Ingrese Salario: ";
	cin>>sueldo;
	cout<<"**************Datos del Empleado**********"<<endl;

	obj.setNit(nit);
	obj.setNombres(nombres);
	obj.setApellidos(apellidos);
	obj.setDireccion(direccion);
	obj.setTelefono(telefono);
	cout<<"Nit: "<<obj.getNit()<<endl;
	cout<<"Codigo: "<<obj.getCodigo()<<endl;
	cout<<"Puesto: "<<obj.getPuesto()<<endl;
	cout<<"Nombres: "<<obj.getNombres()<<endl;
	cout<<"Apellidos: "<<obj.getApellidos()<<endl;
	cout<<"Direccion: "<<obj.getDireccion()<<endl;
	cout<<"Telefono: "<<obj.getTelefono()<<endl;
	cout<<"Sueldo: "<<obj.getSueldo()<<endl;
	break;
	case 2:
	cout<<"Ingrese Nit: ";
	cin>>nit;
	cout<<"Ingrese Nombres: ";
	cin>>nombres;
	cout<<"Ingrese Apellidos: ";
	cin>>apellidos;
	cout<<"Ingrese Direccion: ";
	cin>>direccion;
	cout<<"Ingrese Telefono: ";
	cin>>telefono;
cout<<"*************Datos del Cliente*****************"<<endl;

	obj.setNit(nit);
	obj.setNombres(nombres);
	obj.setApellidos(apellidos);
	obj.setDireccion(direccion);
	obj.setTelefono(telefono);
	cout<<"Nit: "<<obj.getNit()<<endl;
	cout<<"Nombres: "<<obj.getNombres()<<endl;
	cout<<"Apellidos: "<<obj.getApellidos()<<endl;
	cout<<"Direccion: "<<obj.getDireccion()<<endl;
	cout<<"Telefono: "<<obj.getTelefono()<<endl;	
	break;
	}
}
