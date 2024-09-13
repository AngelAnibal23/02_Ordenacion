#include <iostream> 
using namespace std; 

int main(){
	int n; 

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
	
	
	
	return 0; 	
}