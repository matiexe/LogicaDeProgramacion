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

using namespace std ;
int main(){
    int precioProducto = 0;
    int stock =100;
    printf("Ingrese el precio de compra :");
    cin >> precioProducto;
    //printf("ingrese stock de producto");
    //cin >> stock;
    int precioFinal = calcularPrecioDeVenta(precioProducto,stock);
    printf("%s %d.","El precio final del producto ingresado es : $" , precioFinal);
    
    return 0;
}