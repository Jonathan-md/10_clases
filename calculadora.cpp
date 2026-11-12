#include<iostream>
using namespace std;

class Calculadora{
	private:
		float primero;
		float segundo;
		bool comprobar();
	
	public:
		Calculadora();
		void setNumeros(float, float);
		float getPrimero();
		float getSegundo();
		float sumar();
		float restar();
		float multiplicar();
		bool dividir(float& resultado);
};

Calculadora::Calculadora(){
    primero= 0;
    segundo= 0;
}

void Calculadora::setNumeros(float a,float b){
    primero= a;
    segundo= b;
}

float Calculadora::getPrimero(){
	return primero;
}

float Calculadora::getSegundo(){
	return segundo;
}

bool Calculadora::comprobar(){
	if(segundo != 0)
		return true;
	else
		return false;
}

float Calculadora::sumar(){
	float suma;
	suma= primero + segundo;
	return suma;
}

float Calculadora::restar(){
	float resta;
	resta= primero - segundo;
	return resta;
}

float Calculadora::multiplicar(){
	float multiplicacion;
	multiplicacion= primero * segundo;
	return multiplicacion;
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
	float num1, num2, result;
	
	do{
		cout<<"\n----------------------"<<endl;
		cout<<"1. Ingresar Numeros"<<endl;
		cout<<"2. Sumar"<<endl;
		cout<<"3. Restar"<<endl;
		cout<<"4. Multiplicar"<<endl;
		cout<<"5. Dividir"<<endl;
		cout<<"6. Numeros ingresados"<<endl;
		cout<<"7. Salir"<<endl;
		cout<<"\nSeleccione una opcion: ";
		cin>>opcion;
		cout<<endl;
		
		switch(opcion){
			case 1:
				cout<<"Digite el primer numero: "; 
				cin>>num1;
				cout<<"Digite el segundo numero: "; 
				cin>>num2;
				zzz.setNumeros(num1,num2);
				break;
			case 2:
				cout<<"Suma: "<<zzz.sumar()<<endl;
				break;
			case 3:
				cout<<"Resta: "<<zzz.restar()<<endl;
                break;
			case 4:
				cout<<"Multiplicacion: "<<zzz.multiplicar()<<endl;
                break;
			case 5:
				 if(zzz.dividir(result)){
                    cout<<"Division: "<<result<<endl;
                }
                else{
                    cout<<"NO SE PUEDE DIVIDIR ENTRE CERO."<<endl;
                }
                break;
			case 6:
				cout<<"Primer numero: "<<zzz.getPrimero()<<endl;
                cout<<"Segundo numero: "<<zzz.getSegundo()<<endl;
                break;
			case 7:
				cout<<"Saliendo..."<<endl;
                break;
			default:
				cout<<"Opcion no encontrada."<<endl;
		}
	}while(opcion!=7);
	return 0;
}
