#include <iostream>
#include <string>

using namespace std;

struct empleado {
    string nombre;
    string identificacion;
    double salario;
};

int main() {
    int numero;
    cout<<"Ingrese el numero de empleados: ";
    cin>>numero;

    empleado empleadoMasAlto, empleadoMasBajo;
    empleadoMasAlto.salario=empleadoMasBajo.salario=0.0;

    empleado* empleados=new empleado[numero]; 

    for (int i=0;i<numero;i++) {
        empleado empleado;
        cout<<"empleado " << i + 1 << endl;
        cout<<"nombre: ";
        cin>>empleado.nombre;
        cout<<"identificacion: ";
        cin>>empleado.identificacion;
        cout<<"salario: ";
        cin>>empleado.salario;
        cout<<"\n";

        empleados[i]=empleado; 

        //buscar el salario más alto y más bajo
        if(empleado.salario>empleadoMasAlto.salario || i==0) {
            empleadoMasAlto=empleado;
        }
        if(empleado.salario<empleadoMasBajo.salario || i==0) {
            empleadoMasBajo=empleado;
        }
    }

    cout<<"\n";
    cout<<"empleado con el salario mas alto:"<<endl;
    cout<<"nombre: "<<empleadoMasAlto.nombre<<endl;
    cout<<"identificacion: "<<empleadoMasAlto.identificacion<<endl;
    cout<<"salario: "<<empleadoMasAlto.salario<<endl;

    cout<<"\n";
    cout<<"empleado con salario mas bajo:"<<endl;
    cout<<"nombre: "<<empleadoMasBajo.nombre<<endl;
    cout<<"identificacion: "<<empleadoMasBajo.identificacion<<endl;
    cout<<"salario: "<<empleadoMasBajo.salario<<endl;

    cout<<"\n";
    string clave;
    cout<<"ingrese el nombre o la identificacion del empleado a buscar: ";
    cin>>clave;

    bool encontrado=false;

    for(int j=0;j<numero;j++) {
        if(clave==empleados[j].nombre || clave==empleados[j].identificacion){
            cout<<"nombre: "<<empleados[j].nombre<<endl;
            cout<<"identificacion: "<< empleados[j].identificacion<<endl;
            cout<<"salario: "<<empleados[j].salario<<endl;
            encontrado=true;
            break;
        }
    }

    if (!encontrado) {
        cout<<"empleado no encontrado";
    }

    return 0;
}