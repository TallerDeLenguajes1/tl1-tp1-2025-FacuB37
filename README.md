# tp1
## .gitignore
**Por qué es conveniente incluirlo**
Gitignore conviene inlcuirlo para poder ignorar los archivos innecesarios, para mantener los repositorios limpios y organizados al excluir archivos innecesarios y protege información sensible (ej. claves, configuraciones locales) evitanod que sean agregadas por error.

**¿Cuándo se debe hacer?**
Al inicio del proyecto, junto con la primera configuración del repositorio o también puede actualizarse más adelante si aparecen nuevos archivos que deberian ignorarse.

**¿Cómo configuraría el archivo .gitignore?**
En el directorio raíz de tu proyecto, crea un archivo llamado .gitignore. 
Abra el archivo .gitignore en un editor de texto y agregue los archivos y directorios que desea que Git ignore. Cada entrada debe estar en una línea nueva.


## Ejercicio 3
**código_sin_funcionar errores y soluciones:**

-A las limas 17 y 22 les faltaba el ; (erro de sintaxis) y lo agregue
-Al scanf del valor 1 le falta & (error de lógica con punteros) asique le agregue el &
-La función era del tipo void y recibía la copia de un valor y como no retornaba nada no cambiaba el valor real así que para mantener la forma de void hice que recibiera un puntero y cambie la función para que funcionara con un valor por referencia 

**codigo_misterioso:**

Cambie el nombre de f_alpha por invertir ya que recibe un valor por referencia e invierte el numero con un while, guardando en una variable rev (renombrado a reversa) el resto de dividir el numero por 10 + renombrado*10 y luego al numero lo divide en 10,despues de finalizar el while le asigna al puntero del numero el valor de reversa 

La función f_beta la renombre mitad porque recibe un valor por referencia y lo divide en 2

La función f_gamma la renombre suma_de_digitos porque recibe un valor por referencia y le suma la suma de sus digitos que consigue con un while en donde se guarda en la variable suma el resto de dividir un variable temp que vale lo mismo que el valor pasado por 10 y luego a temp se lo divide en 10 y al final al numero se le suma el valor final de suma

Procesar_enigma le cambie el nombre a transformador ya que recibe por referencia un numero y lo invierte luego lo divide en 2 y al final le suma la suma de sus dígitos

A dato_misterioso solo le cambie el nombre a numero


## Ejercicio 4

Los apartados 2 y 3 son iguales ya que el 2 es la direccion la variable x y en el 3 el puntero guarda justamente la dirección de memoria de la variable a la que apunta que es x.

El apartado 4 es distinto a los anteriores ya que este tiene la direccion de memoria asignada al puntero ya que un puntero tambien ocupa un espacio en la memoria y el 4 muestra esa direccion de memoria