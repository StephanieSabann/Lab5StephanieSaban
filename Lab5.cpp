//Laboratorio 5 Stephanie Sabán
#include <iostream>
#include <conio.h>
#include <stdio.h>
using namespace std;
//Declaración de funciones
int SumaNumeros(int num1);
void NumFactorial();
int ContadorDig(int num1);
void Ordenador();
void SumarDig();
//Declaración de variable global
int num1;
//Inciamos la funcion principal
int main(){
	int opc;//declaración de variable para controlar el menú
	system("cls");
	do{
      cout <<"MENU PRINCIPAL \n\n";
      cout <<"1. Sumar numeros. \n";
      cout <<"2. Factorial de un numero. \n";
      cout <<"3. Contador de digitos. \n";
      cout <<"4. Ordenamiento de numeros. \n";
      cout <<"5. Sumar los digitos de un numero. \n";
      cout <<"6. Salir del menu\n\n";
      cout << "Ingrese el numero de su opcion (1-6): " ;
      cin>>opc;
switch(opc) //utilicé switch para que sea más ordenado llamar las funciones por medio de los case
{
	case 1:{
		system("cls");//para limpiar pantalla
		cout<<"Ingrese un numero entero: ";
     	cin>>num1;//pedimos el ingreso del numero y lo guardamos en variable
		SumaNumeros(num1);
		break;
	}
	case 2:{
		system("cls");//para limpiar pantalla
		NumFactorial();
		break;
	}
	case 3:{
		system("cls");//para limpiar pantalla
		cout<<"Ingrese un numero entero para el contador: ";
     	cin>>num1;//pedimos el ingreso del numero y lo guardamos en variable
		ContadorDig(num1);
		break;
	}
	case 4:{
		system("cls");//para limpiar pantalla
		Ordenador();
		break;
	}
	case 5:{
		system("cls");//para limpiar pantalla
		SumarDig();
		break;
	}
	case 6:{
		exit(1);
		break;
	}
	
}
system("pause");
}while(opc!=6);//se termina el do while
	return 0;//fin del main
}
//iniciamos la primera función
int SumaNumeros(int num1){
	bool ParIm;//declaramos función booleana para controlar nuestra condición
    cout<<"Desea sumar los numeros pares(1) o los numeros impares(0): ";
	cin>>ParIm;//preguntamos si es impar o par y lo guardamos en la variable
	int suma=0;
	for(int a=0;a<=num1; a++){ //el ciclo se termina hasta que sea igual al numero que ingresamos
	  if ((a % 2 == 0 && ParIm) || (a % 2 != 0 && !ParIm)) {//condición para ver si suma los pares o impares
	  	    cout<<a<<" + ";
            suma = suma + a;//va sumando los numeros 
        }
	}
	cout<<"\nEl resultado de la suma es: "<<suma<<endl;//imprimimos el resultado
	return suma;
}
//iniciamos nuestra segunda función
void NumFactorial(){
	int fact, factorial=1, a=1;//declaramos las variables a usar
	cout<<"Ingrese el numero para calcularle el factorial: ";
	cin>>fact;
	while(a <= fact){//ciclo para sacar el tiempo
		factorial= factorial*a;//multiplicamos el numero por el siguiente hasta llegar al num ingresado
		a++;
	}
	cout<<"\nEl factorial de "<<fact<<" es "<<factorial<<endl;//imprimimos el resultado
}
//iniciamos la tercera función
int ContadorDig(int num1){
	int a=0;//inicializamos la variable para nuestro ciclo
	do{
		num1=num1/10;//dividimos el numero ingresado en 10 para tener el digito
		a++;
	}while(num1>0);//para que se realice al menos una vez
	cout<<"El numero tiene "<<a<<" cifras."<<endl;//imprimimos el resultado
	return a;
}
//iniciamos la cuarta función
void Ordenador(){
	int num2, num3;//declaramos la variables a utilizar
	cout<<"Ingrese el primer numero entero: ";
	cin>>num1;
	cout<<"Ingrese el segundo numero entero: ";
	cin>>num2;
	cout<<"Ingrese el tercer numero entero: ";
	cin>>num3;//pedimos el ingreso de los tres numeros y los guardamos en las variables respectivas
	if(num1<num2&&num2<num3){//empezamos con las condicionales para ordenar los nums
		if(num2<num3)
		cout<<"El orden correcto es (ascendente): "<<num1<<" , "<<num2<<" , "<<num3<<endl;
		//imprimimos el resultado segun las condiciones
		else
		cout<<"El orden correcto es (ascendente): "<<num1<<" , "<<num3<<" , "<<num2<<endl;
		
	} 
	else if(num2<num1&&num2<num3){
		if(num1<num3)
		cout<<"El orden correcto es (ascendente): "<<num2<<" , "<<num1<<" , "<<num3<<endl;
		else
		cout<<"El orden correcto es (ascendente): "<<num2<<" , "<<num3<<" , "<<num1<<endl;
	}
	else if(num3<num1&&num3<num2){
		if(num1<num2)
		cout<<"El orden correcto es (ascendente): "<<num3<<" , "<<num1<<" , "<<num2<<endl;
		else
		cout<<"El orden correcto es (ascendente): "<<num3<<" , "<<num2<<" , "<<num1<<endl;
	}
}
//iniciamos la 5ta función
void SumarDig(){
	cout<<"Ingrese un numero entero: ";
	cin>>num1;//pedimos el ingreso del numero y lo guardamos en la variable
	int suma=0;//inicializamos la variable para el ciclo
	while(num1>0){
		suma= suma + num1%10;//hacemos la suma de los digitos por medio de separar el ultimo digito
	    num1=num1/10;//dividimos entre 10 para quitar el ultimo digito.
	}
	cout<<"La suma de los digitos es: "<<suma<<endl;//imprimir el resultado
}