#include <iostream>
using namespace std;

int main(){
    int n, num_primos[50], cp=0;
    bool array[100];
    
    cin>>n;

    //relleno el arreglo
    for(int i=1; i<=n;i++){
        array[i]=true;
    }

    //los que queden en verdadero serán numeros primos
    for(int i=2; i<n; i++){ 
        if(array[i]==true){
            num_primos[cp]=i;
            cp++;
        }
        for(int j=i+1;j<n; j++){
            if((j%i) == 0){
                array[j]=false;
            }
        }
    }

    for(int i=0; i<cp; i++){
        cout<<num_primos[i]<<" ";
    }
    
    return 0;
}
