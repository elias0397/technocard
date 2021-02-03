// Calcular el costo de impresion de cada etiqueta.
//Necesitamos saber:
//1-cantidad de etiquetas por bobinas.
	//para obtener la cantidad de etiquetas por cada bobina se debe dividir la
	//logitud total de la bobina entre la altura de cada etiqueta.
	//y luego multiplicar por la cantidad de carreras de cada bobina
//2-costo de cada etiqueta.
	// Definido por el usuario al comienzo del programa.
//3-costo del ribbon.
	// Definido por el usuario al comienzo del programa.
//4-costo de cada etiqueta impresa.
	// Se suman los costos de ribbon por etiquetas + las etiquetas y se imprime el resultado.

#include<stdlib.h>		//libreria
#include<iomanip>
#include<iostream>		//libreria
using namespace std;	//namespace
int main()				//
{
		//Cantidad de etiquetas por bobina
		//longitud de bobina=long_bob altura de etiqueta=alt_etiq
		//cantidad de etiquetas por bobinas=cant_etiq_bob carreras=carr
		int alt_etiq, cant_etiq_bob, long_ribb=36000, cost_ribb,
		cost_etiq, cant_etiq_ribb, cost_ribb_etiq, cost_final, carr;
			cout<< "Ingrese altura de cada etiqueta en centimetros:";
			cin>> alt_etiq;
			cout<< "Ingrese cantidad de carreras:";
			cin>> carr;
			cout<<"Ingrese costo de cada etiqueta: GS.";
			cin>>cost_etiq;
			cout<<"Ingrese costo de cada ribbon: GS.";
			cin>> cost_ribb;
			cant_etiq_ribb= long_ribb/alt_etiq;
			cost_ribb_etiq=cost_ribb/cant_etiq_ribb;
			cost_final= cost_etiq+cost_ribb_etiq;
			cost_final= cost_final/carr;
		cout<<"Costo de cada etiqueta impresa: GS."<<cost_final<<endl;
	
		main ();
}
