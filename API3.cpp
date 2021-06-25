//Librerias
#include <cmath>
#include <iostream>

//

int calcularPrecioDeVenta(int precioCompra,int stock){
    int precioFinal = 0;
    double ganancia = 0 ;
    double iva = 0;
    iva  = precioCompra*0.21;
    if((precioCompra>= 1500 && stock < 1500) || stock < 50){
        
        ganancia = precioCompra*0.15;        
    
    }
    else{
        ganancia = precioCompra*0.20;
    } 
    precioFinal = precioCompra+ganancia+iva;

    return precioFinal;
}

void cargaPorArreglos(){
    //Inicio Punto 2
    int precioFinal = 0;
    int precios [5] = {100,150,1600,2000,50};
    int stock   [5] = {50,100,20,10,200};

    for (int i = 0; i < 5; i++)
    {
        precioFinal = calcularPrecioDeVenta(precios[i],stock[i]);
        printf("%s %d.\n","El precio final del producto ingresado es : $" , precioFinal);
    }
}

using namespace std ;
int main(){
    //Punto 1
    /*
    int precioProducto = 0;
    int stock =100;
    printf("Ingrese el precio de compra :");
    cin >> precioProducto;
    //printf("ingrese stock de producto");
    //cin >> stock;
    int precioFinal = calcularPrecioDeVenta(precioProducto,stock);
    printf("%s %d.","El precio final del producto ingresado es : $" , precioFinal);
    */
    //Punto2
    cargaPorArreglos();

    
    return 0;
}