#include <iostream>
#include <stdlib.h>
using namespace std;
//grupo 1 factores de un numero

//grupo 2 fibonacci de un numero

//grupp 3 los n primeros numeros primos
int primos(int n){
    int aux=0;
    for(int i=2; i<=n; i++){
        for(int j=1 ; i>=j; j++){
            if(i%j==0){
                aux++;
            }
        }
        if (aux==2){
            cout<<i<<" "<<endl;
            aux=0;
        }
        else
            aux = 0;
    }

}
//grupo 4  los n numeros abundantes

//grupo 5  los n numeros deficientes

//grupo 6 validar n que sea mayor que 10 y menores que 20

main(){
    int n;
    //factores(n);
    //fibonacci(n);
    cout<<"Grupo 3"<<endl;
    cout<<"Integrantes: "<<endl;
    cout<<"Arley Camayo, Johao Flores, Brayam Guanoliquin, David Maila, Jordan Quishpi"<<endl;
    cout<<"Determinar los n numeros primos"<<endl;
    cout<<"Ingrese un numero: ";
    cin>>n;
    cout<<"Los numeros primos son "<<endl;
    primos(n);
    //abundantes(n)
    //deficientes(n)

}
