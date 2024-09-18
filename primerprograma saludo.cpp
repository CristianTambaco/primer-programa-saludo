#include <iostream>
#include <string>

using namespace std;
void saludar (string name, int age) {
cout<<"\nHola "<<name<<", estas en los " << age << " anios" <<endl;
}

main(){
	
int edad=0;
string nombre="";

cout<<"Ingresa tu nombre: "<<endl; cin>>nombre;
cout<<"Ingresa tu edad: "<<endl; cin>>edad;

saludar(nombre, edad);

return 0;
	
}
