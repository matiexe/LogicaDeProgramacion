//Librerias
#include <cmath>
#include <iostream>
#include<stdlib.h>

//
//Funcion que calcula el precio final de un producto
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

//Calculo de los precios de venta
void calcularYMostrar(int precios[],int stock[],int preciosVentas[],int precioFinal){
for (int i = 0; i < 5; i++)
    {
        precioFinal = calcularPrecioDeVenta(precios[i],stock[i]);
        preciosVentas[i] = precioFinal;
        printf("%s %d. %s %d \n","Producto ",i+1," Precio de venta : $" , precioFinal);
    }
}
    
//Funcion que calcula la suma de los precios de compras cargados en un arreglo
int sumatoriaPreciosCompra(int precios[]){
    int sumaPrecioCompra = 0;
    for (int i = 0; i < 5; i++)
    {
        sumaPrecioCompra = sumaPrecioCompra+precios[i];
    }

    return sumaPrecioCompra;
}

//Funcion que calcula la suma de los precios finales de un arreglo dado
int sumatoriaPreciosfinales(int preciosVentas[]){
    int sumaPrecioFinales = 0;
    for (int i = 0; i < 5; i++)
    {
        sumaPrecioFinales = sumaPrecioFinales+preciosVentas[i]; 
    }
    
    return sumaPrecioFinales;
}

using namespace std ;
int main(){
    int precioFinal = 0;
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
    //cargaPorArreglos();
    //Punto 3
    int precios[5];
    int stock  [5];
    int preciosVentas[5];
    //carga de los arreglos por parte del usuario
    for (int i = 0; i < 5; i++)
    {
        system("cls");
        printf("%s %d \n","Datos para el producto ", i+1);
        printf("Ingrese el precio de compra: ");
        cin >> precios[i];
        printf("Ingrese stock de producto: ");
        cin >> stock [i];
    }
    system("cls");
    //Calculo de los precios de venta
    calcularYMostrar(precios,stock,preciosVentas,precioFinal);
    printf("\n");
    //Sumatorias de precios de venta compra
    printf("%s %d \n","Total Precios de compra: " ,sumatoriaPreciosCompra(precios));
    //Sumatoria precio finales
    printf("%s %d \n","Total Precios de venta: " ,sumatoriaPreciosfinales(preciosVentas));
    
    
    
    
    return 0;
}