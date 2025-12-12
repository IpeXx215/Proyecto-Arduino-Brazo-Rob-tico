
# PROYECTO BRAZO ROBÓTICO

## Concepto
Para el proyecto final de la asignatura de Programación informática en Arduino hemos decido crear un brazo robótico de 3 ejes que será contralo mediante un mando de joysticks.   
El objetivo principal es crear un brazo articulado contralado mediante un mando y si conseguimos lograrlo con margen de tiempo le añadiríamos otras funciones.
## Componentes 
* Arduino Uno
* Joysticks (2 uds.)
* Servomotores/Motores (4 uds.)
* Cables 
* Piezas brazo robótico (estructura, tornillos, pinzas...)

En un principio con estos componentes es suficiente, pero si vamos bien de tiempo también podríamos llegar a usar:
* LED's (2 uds.)
* Pantalla LCD 
* Conectores para la pantalla

Además, para facilitar las pruebas del equipo y código sin necesidad de montar todo el brazo es posible que usemos una placa Protoboard.
## Diario de sesiones
**Sesión 0 (7/11):**  

Esta primera sesión a sido introductoria, se ha explicado en qué iba a consistir el proyecto, el metodo de calificación y los diferentes objetivos a realizar.  
Por nuestra parte hemos buscado qué dispositivo crear, ya que no queríamos que fuera muy complicado de montar ni programar, pero tampoco demasiado sencillo, buscábamos un deafío. Después de quedarnos entre 3 opciones, elegimos el brazo articulado.


**Sesión 1 (14/11):** 

En esta segunda sesión de trabajo, hemos comenzado a desarrollar activamente el proyecto del brazo robótico. Nuestro objetivo del día fue la creación de un borrador inicial del software mediante Tinkercad, donde hemos creado un diseño inicial de como queremos que sean y funcionen los componentes electrónicos de nuestro brazo.

Es por esto, que hemos realizado la programación de los servomotores que actuarán como articulaciones del brazo. También hemos programado los joysticks, que funcionan como potenciómetros para un manejo intuitivo y, por último, hemos realizado un diseño del hardware en Tinkercad.

Es verdad que el borrador básico está muy avanzado, sin embargo aún nos falta acabar el código que preveemos realizarlo en la próxima sesión; y más adelante, ya proceder con la construcción física del brazo articulado.  

**Sesión 2 (28/11):**

En esta sesión hemos continuado con la programación del brazo, pero esta vez ya hemos podido aplicarlo a los componentes físicos. Como ya disponemos de los servomotores, hemos tratado de determinar el rango de movimiento de cada uno, pero resulta más dificil de lo que pensabamos.  
Aun nos faltará por implementar el programa de los controles ya que aun no hemos podido aplicar el codigo a los joysticks.  

Respecto al código estamos tratando de mejorarlo para que pueda terminar haciendo dos funciones a la vez, y quizás implementemos una nueva funcionalidad al brazo si nos da tiempo.  

**Sesión 3 (5/12):**  

En la cuarta sesión, acabamos de medir los ángulos que se moverán cada servomotor, tanto la base, el brazo y la pala, siendo éstos los que completamos. Sin embargo, tuvimos un problema con la pinza ya que aunque programasemos que hiciese ciertos ángulos, a la hora de probarlo físicamente hacía ángulos de más, es decir se movía más de lo que queríamos, y va a ser uno de nuestros objetivos en la próxima sesión

Por otra parte, ya recibimos los josticks, con esto la parte del hardware, los elementos requeridos del montaje físico, ya estaría más o menos listo, y solo faltaría ya montarlo. Es por ello, que en la próxima sesión, se intentará montar y hacer una prueba general del brazo róbitico.

Por último todos los elementos del software, el código, ya está listo, incluso una parte extra, que será la posibilidad de jugar a piedra, papel o tijera, usando la pinza, con un ser humano. Dependiendo de cómo se mueva la pinza, indicará si es piedra, papel o tijera.   

**Seasio 4: Presentación proyecto (12/12)**

En nuestra última sesión hemos empleado la primera hora para cambiar la pinza del brazo; ya que el servomotor de la pinza no funcionaba correctamente, a continuaación hemos instalado la base y por último hemos implementado los josticks; asía y terminando el montaje físico del brazo róbotico. 

Después ha sido la presentación del brazo róbotico, que creemos haber explicado todas sus funcionalidades, que ha modo de resumen, el primer jostick movía el brazo y la pala, en los ejes x e y respectivamente. Y el segundo jostick movía la base y la pinza, también en los ejes x e y respectivamente.

Sin embargo, si hubiesemos tenido más tiempo podríamos haber implemetado el juego de piedra, papel y tijera, ya que teniamos gran parte del código para ello, y en el caso de que se puediera desarrollar este proyecto un poco más, nos hubiera gustado poner un monitor serial para elegir este juego e incluso dirigir también el brazo robótico.

## Bibliografía
Proyecto sacado de [Instructables](https://www.instructables.com/Automated-Robotic-Arm-That-Learns-Ft-Tinkercad-Ard/)
