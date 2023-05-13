
# 1. Antes que nada lo primero

Los principales elementos que componen un programa de C++ son:

- Tipos
- Variables
- Expresiones
- Sentencias
- Funciones

En este capítulo introduciremos estos términos y explicaremos como compilar y ejecutar
un sencillo programa de C++.

En lugar de dar una definición exacta de los términos, nos limitaremos a proporcionar
una noción sencilla que nos permita empezar a escribir programas. 

A lo largo de esta introducción vamos a escribir un programa que nos permita hacer
un seguimiento de los libros vendidos en una librería.
La tienda mantiene un archivo con una lista de las transacciones realizadas. 
Cada transacción contiene tres elementos:

- ISBN un identificador único para cada publicación del tipo: "0-201-70353-X 4 24.99"
- El número de copias vendidas.
- El precio de venta de un ejemplar.

En cualquier momento, nuestro programa nos permitirá calcular el número total de libros 
vendidos, el importe total de la venta y el preció medio de los libros.

Si pensamos en como definir el programa podremos ver que necesitaremos:

- Escribir el programa, compilarlo y ejecutarlo.
- Definir variables (donde almacenar por ejemplo el precio total de venta de un ISBN)
- Operaciones de entrada salida (introducir transacciones, solicitar el cálculo).
- Utilizar una estructura de datos para almacenar las transacciones.
- Verificar si 2 transacciones tienen el mismo ISBN.
- Usar un bucle para procesar todas las transacciones.

Vamos a ir resolviendo paso a paso los problemas que se nos plantea.

## Un simple programa en C++

Todo programa de C++ contiene una o mas funciones. El programa empieza ejecutando una
función que debe denominarse "main" (principal en ingles), y que sirve precisamente
para indicar donde debe empezar la ejecución del programa. Esta función debe ser única.
Un programa posible (aunque poco útil) es el siguiente:

``` cpp

// main.cpp

int main() {
  int resultado;
  resultado = 0;
  return resultado;
}

```
El programa comienza con un comentario. En este caso el nombre del archivo que 
vamos a crear, y que nos servira posteriormente para realizar la compilación.
Las dos barras "//" inician un comentario, que finaliza al finalizar la línea.
El compilador ignora los comentarios.

En el programa nos hemos limitado a escribir una función "main".

Toda función devuelve un valor de cierto tipo, que en el caso de "main" debe ser un 
entero ("int"), en el caso de que no deseemos devolver ningún valor, utilizaremos un
tipo "void" (vacío).

Al tipo devuelto le sigue el nombre de la función, en este caso "main".

Continuamos con una lista de parámetros entre paréntesis. Al nombre de la función junto
con la lista de parámetros se le denomina firma ("signature") de la función, y en un 
programa esta firma debe ser única. La función main acepta varias firmas, una de ellas
es la que aparece y consiste en el nombre "main" y una lista vacía de parámetros.
(El caso de la función main es especial, pues únicamente podemos
tener una función main, no varias aunque tengan firmas diferentes. Podemos utilizar 
cualquiera de las firmas aceptadas, pero sólo una. Más adelante veremos otras formas
de definir la función main)

Por último tenemos el cuerpo ("body") de la función, el cual se encuentra en el bloque 
de código definido dentro de las llaves ("{}").
Dentro de este bloque se encontraran las sentencias que definen las acciones que 
realiza la función.
En nuestro caso la función se limita a crear una variable de tipo entero "int", con 
el nombre de "resultado" (declaración). 
``` c++
  int resultado;
```
Podemos entender la declaración como un contrato por el cual nos comprometemos a que
la variable "resultado" sea de tipo entero, o simplemente sea un entero.

Seguidamente le asigna el literal 0 (definición). Tras esta sentencia, la variable
resultado tendrá el valor 0. Aclarar que los literales tambien tienen un tipo asociado.
"0" es de tipo entero, con lo cual la asignación es correcta.

``` c++
  resultado = 0;
```
Posteriormente devuelve el valor de "resultado", es decir 0, 
tras lo cual el programa finaliza.
``` c++
  return 0;
```
¿A quién devuelve el valor? Lo devuelve al sistema operativo, que puede utilizarlo para
determinar si ha habido algún error durante la ejecución del programa.
Un valor de 0 suele indicar que no ha habido ningún fallo. Por el contrario un valor distinto
de 0 indica que se ha producido algún fallo.
El significado de este valor depende de la aplicación. En cuanto a su uso por parte del
sistema operativo, depende de este.

Algunos de los símbolos que aparecen en el programa: 
"int", "return", "{", "}", "(", ")" son simbolos propios del lenguaje C++.
Otros como "main" o "resultado" no son simbolos del lenguaje.

La diferencia es que no podemos definir una variable con el nombre "int", pues es
una palabra reservada, sin embargo sí podemos definir una variable con el nombre de resultado
o de main (siempre y cuando no se trate de una función que pueda confundir al compilador
con nuestra función main).

Cabe una mención especial de "int", esta palabra se refiere a un determinado "tipo", en
este caso a un tipo interno del c++. Los tipos definen tanto el conjunto de datos
que la variable puede tener, como las operaciónes que podemos realizar con dichos datos.
(C++ nos permite definir tipos adicionales, es decir, no internos. Gran parte de este
manual se dedica a explicar como).
Los datos de tipo "int", permiten almacenar un conjunto de números enteros, y permiten
operaciones como la suma ("+") o la multiplicación ("*").

En cuanto a resultado, se trata de una variable (podemos pensar en una variable como 
si fuera un casillero), el tipo de la variable define los valores que puede tener
(tamaño del casillero).

Las tres líneas del cuerpo de "main" son sentencias. Una sentencia se puede definir como
una operación que realiza determinada acción.
La primera línea crea una variable.
La segunda le asigna el valor 0.
La tercera devuelve el valor de la variable, 0 al sistema operativo.

Si nos hemos fijado cada una de las líneas finaliza con el símbolo ";". Este simbolo
se utiliza en la mayor parte de las sentencias, para indicar que ha finalizado la misma.

Una sentencia puede estar formada por una o más expresiones. Una expresión es una operación
que devuelve un valor.
En nuestro caso:
``` c++
  resultado = 0
```
Es una expresión. En este caso la operación que se realiza en la de asignación, y el operador
es "=". El valor devuelto por el operador "=" es el valor de la expresión que se encuentra a
la derecha del operador, en nuestro caso 0. Como vemos no es necesario utilizar el valor
devuelto por una expresión.

Podríamos iniciar 2 variables de la siguiente manera:
```c++
   otro_resultado = resultado = 0
```
en este caso particular, esto es equivalente a escribir:

```c++
   otro_resultado = (resultado = 0)
```
Es decir primero asignamos 0 a resultado, lo cual nos devuelve 0.
Posteriormente asignamos otro_resultado, al resultado anterior.

Evidentemente podriamos haber escrito también:
```c++
  resultado = 0;
  otro_resultado = 0;
```
En cuyo caso tendriamos dos sentencias, y cada una compuesta de sus respectivas 
expresiones.

En cuanto a "0", se trata de un literal, en este caso de tipo "int". Los literales
también constituyen expresiones y tiene asignados tipos.
La sentencia es correcta porque asignamos a una variable de tipo "int" un literal
de tipo "int".
La sentencia:
``` c++
  resultado = "hola";
```
No es correcta pues la expresión está intentando asignar un literal de tipo "cadena"
a una variable de tipo "int". Estos dos tipos pueden considerarse "incompatibles" y 
por lo tanto no podemos asignar uno con el otro. Más adelante explicaremos que 
entendemos por "incompatibles", de momento si sabemos que si los tipos son los mismos
no tendremos ningún problema.

### Compilación

## Entrada/Salida

Una forma de entender un programa, es como una caja negra que manipula datos.
Entregamos datos a la "caja" y esta nos devuelve otros datos, resultado del procesamiento
de los primeros.
Al proceso de entregar datos al progama le denominaremos "entrada", y a lo 
que devuelve "salida". En general lo denominaremos I/O ("input/output") o entrada/salida.

El lenguaje C++ no dispone de funciones de I/O. Estas se definen en la biblioteca estardar. 
Por biblioteca ("library"), debemos enterder un conjunto de funciones, y tipos que
no están incluidos en el lenguaje, sino definidos a partir del lenguaje y que 
se encuentran en archivos externos.

El "toolchain" que utilicemos incluye los archivos necesarios para usar la biblioteca 
estandar, esto significa que una vez instalado el "toolchain" no se necesita instalar
nada más para poder usar las funciones de la biblioteca estandar. Existen muchas mas
librerías que no forman parte de la librería estandar, y que si queremos usar deberemos
instalar correctamente.

En lo que se refiere a la I/O la biblioteca define varios tipos, en particular los tipos
"istream" y "ostream" de entrada salida, el objeto "cin"

## Comentamos

## Control

Uno de los aspectos básicos de cualquier lenguaje de programación es el denominado
"control de flujo", que no es sino el control en el orden de ejecución del programa.

Este control se establece en tiempo de ejecución

## Clases: un primer contacto

## Nuestra particular librería.

### Resumen

### Términos

Condición: Una expresión que se evalua a "cierto" o "falso".
Predicado: Una función que devuelve "cierto" o "falso".
Bloque: Secuencia de cero o más sentencias incluidas en llaves "{}". Un bloque es
        en si mismo una sentencia.