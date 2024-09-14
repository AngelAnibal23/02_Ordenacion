#include <iostream> 
using namespace std; 

void intercambioDirecto(int a[], int elementos){
	int aux; 
	for(int i=0; i<elementos-1; i++){
		for(int j=i+1; j<elementos; j++){
			if(a[i] > a[j]){
				aux = a[i];
				a[i] = a[j];
				a[j] = aux; 
			}
		}
	}
	
	cout<<"\nOrdenacion directa por la derecha: "; 
	for(int i=0; i<elementos; i++){
		cout<<a[i]<<" ";  
	} 
	cout<<endl; 
}

int main(){
	int n; 
	int opcion;
	cout<<"Digite cuantos elementos tendra el arreglo: "; 
	cin>>n; 

	int array[n];  

	for(int i=0; i<n; i++){
		cout<<"Digite el elemento ["<<i<<"]: "; 
		cin>>array[i];  
	} 
	

	cout<<"\nImprimiendo el arreglo: "; 
	for(int i=0; i<n; i++){
		cout<<array[i]<<" ";  
	} 
	cout<<endl; 
	
	do{
 
		
	cout<<"\nA continuacion se le muestran distitintos metodos de ordenacion :"<<endl; 
	cout<<"(1) Intercambio Directo por la derecha. "<<endl; 
	cout<<"(2) Intercambio directo por la izquierda. "<<endl; 
	cout<<"(3) Intercambio directo -----------"<<endl; 
	cout<<"(4) Intercambio directo ------------"<<endl;
	cout<<"(0) Salir."<<endl;  
	cout<<"Digite el metodo de ordenacion que desea realizar: "; 
	cin>>opcion; 
	cout<<endl; 
	
	switch(opcion){
		case 1: {
			intercambioDirecto(array, n); 
			break;
		}
		case 2: {
			// commit?
			break;
		}
		case 3: {
			
			break;
		}
		
		case 4: {
			
			break;
		}
		case 0:{
			cout<<"Saliendo del programa...."; 
			opcion = 0; 
			break;
		}
		default:{
			cout<<"Opcion invalida. "; 
			break;
		}
	}
	
		
	}while(opcion != 0); 
	
	return 0; 	
}