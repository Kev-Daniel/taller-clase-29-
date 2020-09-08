#include <iostream>
#include <fstream>
using namespace std ;
void heapsort (int b[],int x );

int main (){
  ofstream archivo ;
  archivo.open("heapsort.txt");
  int A [100],n;
  cout << " Cuantos elementos va a ingresar : \n";
  cin >> n ;
  for (int i = 1; i <= n ; i++){
    cout << "Elemento"<<i<< " : ";
    cin >> A[i];
  }
  cout << "EL ARREGLO DESORDENADO ES :";
  archivo << "EL ARREGLO DESORDENADO ES :";
    for (int i = 1; i <= n ; i++){
 
    cout << A[i]<< " ";
    archivo << A[i]<< " ";
  }
  cout << endl;
  archivo << endl;

  heapsort (A,n );
   cout << "EL ARREGLO ORDENADO ES :";
   archivo << "EL ARREGLO ORDENADO ES :";
    for (int i = 1; i <= n ; i++){
   cout <<  A[i] << " ";
   archivo <<  A[i] << " ";
  }
  archivo.close();

}
void heapsort (int b[],int  n ){
  int valor, temp , a ;
  for (int i = n ; i > 0;i--  ){
    for (int j =1 ; j <= i; j++){
      valor = b[j];
      a = j/2;
      while (a>0 && b [a]<valor){
        b[j]=b[a];
        j = a ;
        a = a /2;

      }
      b[j]= valor ;

    }
    temp=b[1];
    b [1]=b[i];
    b[i]=temp;

  }
 


}





