# Consignas
1.	Utilizando el Entorno de Desarrollo Integrado (IDE) Visual Studio Code (VSC), creá un proyecto C++ que contenga un método “main”, en el cual deberás codificar el último diagrama de flujos diseñado en el punto uno (1) de la API anterior (por el momento, no debés tener en cuenta la distinción entre productos promocionales). 
Para producir un código más ordenado y modularizado, deberás crear una función que se llame “calcularPrecioDeVenta”, la cual debe recibir como parámetros de entrada el precio de compra de un producto y su stock correspondiente. Como parámetro de salida la función tiene que devolver el precio de venta.
En el método “main” se deberá solicitar al usuario que ingrese un número entero (asumir que siempre será entero) correspondiente al precio de compra del producto del que necesita conocer el precio de venta. Luego deberá invocar a la función “calcularPrecioDeVenta” y almacenar en una variable entera el valor que retorne. Asumir que el stock del producto es de 100 unidades.
Finalmente se deberá imprimir por consola dicho valor.

2.	Dado que en el punto anterior creaste una función que permite realizar el cálculo para el precio de un producto, ahora deberás utilizarla para calcular el precio de venta de varios productos. 
Para esto, reemplazá el ingreso por consola del punto anterior por dos arreglos de cinco (5) decimales e inicializalos. Los arreglos tendrán el precio de compra y el stock de un producto en las mismas posiciones. Por ejemplo, en la posición 0 de los dos arreglos, estarán el precio y stock del primer producto.
Por cada uno de estos valores, invocar la función “calcularPrecioDeVenta” en informar los precios de venta.

3.	Finalmente, se te solicita automatizar al 100 % el algoritmo. Para eso, tendrás que solicitar al usuario que ingrese por consola cada uno de los cinco (5) valores de los arreglos.
Además de mostrar los valores de los precios de ventas, al final del informe deberás mostrar la suma de los precios de compra y la suma de los precios de ventas calculados.
