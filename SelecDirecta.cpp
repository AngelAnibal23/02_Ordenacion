#include <iostream> 
using namespace std; 

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
	
     int menor, k; 
    //seleccionDirecta: 
    for(int i=0; i<n; i++){
    	menor = array[i];
	k=i;
	for(int j=i+1; j<n; j++){
	    if(menor > array[j]){
	    	menor = array[j];
	    	k=j;
	    }
	}
	array[k] = array[i];
	array[i] = menor;  
    }
   
    cout<<"\nArreglo ordenado por seleecion directa: "<<endl; 
    for(int i=0; i<n; i++){
	cout<<array[i]<<" ";  
    }
    cout<<endl; 
     
    return 0; 
}