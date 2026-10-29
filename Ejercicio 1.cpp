#include<iostream>
using namespace std;

class Calculadora{
	private:
		float primero;
		float segundo;
		bool comprobar();
	
	public:
		Calculadora();
		Calculadora(float a, float b);
		
		void setNumeros(float a, float b);
		float getPrimero();
		float get segundo();
		
		float sumar();
		float restar();
		float multiplicar();
		bool dividir(float& resultado);
};

Calculadora::Calculadora() : primero(0), segundo(0) {}
Calculadora::Calculadora(float a, float b) :primero(a), segundo(b){}  
bool Calculadora::comprobar(){
	return segundo != 0;
}

void Calculadora::setNumeros(float a, float b){
	primero = a;
	segundo = b;
}

float Calculadora::getPrimero(){
	return primero;
}

float Calculadora::getSegundo(){
	return segundo;
}

float Calculadora::sumar(){
	return primero + segundo;
}

float Calculadora::restar(){
	return primero - segundo;
}

float Calculadora::multiplicar(){
	return primero * segundo;
}

bool Calculadora::dividir(float& resultado){
	if(comprobar()){
		resultado = primero / segundo;
		return true;
	}
	else{
		return false;
	}
}

int main(){
	Calculadora zzz;
	int opcion;
	float num1, num2, res;
	
	do{
		cout<<"1. Añadir numero"<<endl;
		cout<<"2. Consultar numeros guardados"<<endl;
		cout<<"3. Sumar"<<endl;
		cout<<"4. Restar"<<endl;
		cout<<"5. Multiplicar"<<endl;
		cout<<"6. Dividir"<<endl;
		cout<<"7. Salir"<<endl;
		cout<<"Seleccione una opcion: ";
		cin>>opcion;
		
		switch(opcion){
			case 1:
				cout<<"Digite el primer numero: "; cin>>num1;
				cout<<"Digite el segundo numero: "; cin>>num2;
				casio.setNumeros(n1,n2);
				cout<<"Los numeros que ingreso se guardaron correctamente.";
				break;
			case 2:
				cout<<"Primer numero"
			case 3:
			case 4:
			case 5:
			case 6:
			case 7:
			default:
		}
	}
}
