#include <iostream>
#include <stack> //Libreia para la pila
#include <string.h>
using namespace std;

stack <string> ciencias; //Creo la pila

int main(){
    int opcn;
    char word[20];
    bool salir=false;

    while (salir==false) //Para hacer la salida
    {
        //Menú
        cout<<"1. Extraer 1 nombre\n";
        cout<<"2. Extraer 2 nombres\n";
        cout<<"3. Extraer 3 nombres\n";
        cout<<"4. Agregar 4 nombres\n";
        cout<<"5. Salir\n";
        cin>>opcn;

        //Seleccion del menu
        if (opcn==1){
            cout<<ciencias.top()<<endl;
            ciencias.pop();
        }else if (opcn==2){
            for (int i = 0; i < 2; i++){
            cout<<ciencias.top()<<endl;
            ciencias.pop();
            }
        }else if(opcn==3){
            for (int i = 0; i < 3; i++){
            cout<<ciencias.top()<<endl;
            ciencias.pop();
            }
        }else if(opcn==4){
            for (int i = 0; i < 4; i++){
            cin.getline(word, 20, '\n');
            ciencias.push(word);
            }
        }else if (opcn==5){
            cout<<"\nBye, bye!";
            salir=true;
        }
    }
    return 0;
}
