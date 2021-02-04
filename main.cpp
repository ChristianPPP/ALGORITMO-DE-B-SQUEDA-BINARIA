#include <iostream>
#include <fstream>

using namespace std;

#define tamanio(a) (sizeof(a)/sizeof(a[0]));

void busquedaBinaria (int arr[], int t, int dato);

void algoritmoBurbuja (int arr[], int t);

void ingresarElementos(int arr[], int t);

void imprimirElementos(int arr[], int t);
void escribirArchivo(int arr[], int t, int dato);

int main() 
{
  int arreglo1[8]={1,3,5,4,6,8,7,9};

  int t = tamanio(arreglo1);

  algoritmoBurbuja(arreglo1, t);

  busquedaBinaria(arreglo1,t, 5);
 
}

void busquedaBinaria (int arr[], int t, int dato)
{
  ofstream binario;
  binario.open("binario.txt",ios::app);
  int b,i,j,k;
  i=0;
  j= t - 1;
  b= dato;
  binario<<"Lista de elementos"<<endl;
  if(dato<=t){
  do
  {
    k=(i+j)/2;

    if(arr[k]<=b) 
    {
      i=k+1;  
    }
    if(arr[k]>=b)
    {
      j=k-1;  
    }

  }
  while(i<=j);
  //binario<<"|"<<arr[]<<"|";
    for (int i=0; i<t; i++)
  {
    binario<<"!"<<arr[i]<<"!";//<<endl;
  }
  //binario<<endl;
  cout <<"Elemento buscado :"<<dato<<endl;
  binario<<endl;
  binario<<"Elemento buscado :"<<dato<<endl;
  cout<<endl<<"EL ELEMENTO A BUSCAR SI ESTA EN EL ARREGLO "<<i<<endl;
  binario<<"EL ELEMENTO A BUSCAR SI ESTA EN EL ARREGLO "<<i<<endl;
  binario.close();
  }
  else{
    cout<<"Elemento no encontrado";
  }
}

void algoritmoBurbuja (int arr[], int t)
{
  int aux;

    for (int i=0 ; i<t ; i++)
    {
        for(int j=i+1 ; j<t ; j++)
        {
            if(arr[j]<arr[i])
            {
                aux=arr[i];

                arr[i]=arr[j];

                arr[j]=aux;

            }

        }
    }
}

/*void escribirArchivo(int arr[], int t)
{
  ofstream binario;
  binario.open("binario.txt", ios::out);
  binario<<"Lista de elementos: \n";
  for (int i=0; i<t; i++)
  {
    binario<<"!"<<arr[i]<<"!";
  }
  binario.close();
}*/