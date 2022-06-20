#include <iostream>
#include <queue>
#include <stack>

using namespace std;

stack <int> pila; stack <int> pilaaux;
queue <int> cola; queue <int> colaaux;

int main(){
    int op=0, count=0, struc=0, out=0, inp=0;

    while (out==0)
    {
        cout<<"Que desea realizar? ";  
        cin>>op;

        if (op==1){
            if(struc==1 || struc==2){   //Elegir tipo de estructura
                cout<<"Ya a elegido un tipo de estructura\n";
            }else{
                cout<<"Que estructura quieres?\n1. Pila\n2. Cola\n";
                cin>>struc; //Asumiré que el usuario elegira solo esto
            }
        }else if (op==2){   //Aniadir
            if (struc==1){
                cout<<"Aniadir: ";
                cin>>inp;
                pila.push(inp);
                count++;
            }else{
                cout<<"Aniadir: ";
                cin>>inp;
                cola.push(inp);
                count++;
            }
        }else if(op==3){    //Extraer
            cout<<"Extraer: ";
            if (struc==1){
                cout<<pila.top();
                pila.pop();
                count--;
            }else{
                cout<<cola.front();
                cola.pop();
                count--;
            }
            cout<<endl;
        }else if(op==4){    //Mostrar la estructura
            cout<<"Mostrar la estructura\n";
            if(struc==1){   //Mostrar la pila
                for (int i = 0; i < count; i++){
                    cout<<pila.top()<<" ";
                    pilaaux.push(pila.top());
                    pila.pop();
                }
                for (int i = 0; i < count; i++){
                    pila.push(pilaaux.top());
                    pilaaux.pop();
                }
                cout<<endl;
            }else{          //Mostrar la cola
                for (int i = 0; i < count; i++){
                    cout<<cola.front()<<" ";
                    colaaux.push(cola.front());
                    cola.pop();
                }

                for (int i = 0; i < count; i++){
                    cola.push(colaaux.front());
                    colaaux.pop();
                }
                cout<<endl;
            }
        
        }else if(op==5){
            if(struc==1){
                for (int i = 0; i < count; i++){    //Pasar de pila a cola
                    cola.push(pila.top());
                    pila.pop();
                }
                struc=2;
            }else{
                for (int i = 0; i < count; i++){
                    pila.push(cola.front());
                    cola.pop();
                }
                struc=1;
            }
        }else if(op==6){    //Salida
            cout<<"Desea salir: \n1. Si\n0. No\n";
            cin>>out;
        }

    }

    return 0;
}