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
	
    //Inserccion directa:
    int aux, k; 
     
    for(int i=1; i<n; i++){
    	aux = array[i]; 
    	k = i-1; 
    	
    	while((k>=0) && aux < array[k]){
    		array[k+1] = array[k];
    		k = k - 1; 
	    }
	array[k+1] = aux; 
    }
   
   
    cout<<"\nArreglo ordenado por seleecion directa: "<<endl; 
    for(int i=0; i<n; i++){
	cout<<array[i]<<" ";  
    }
    cout<<endl; 
     
    return 0; 
}