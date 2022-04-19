#include <iostream> 
using namespace std;

/*
    1 1 2 3 5 8 13...n
    x+y=f
      x+y=f
        x+y=f
*/
int main(){
    int n=0, x=0, y=1, fibo=0;
    cin>>n;
    cout<<"1 ";
    for(int i=1; i<n; i++){
        fibo=x+y;
        cout<<fibo<<" ";
        
        x=y;
        y=fibo;
        fibo=x;
    }
    
    system("PAUSE");
    return 0;
}