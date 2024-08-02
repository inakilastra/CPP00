# CPP00

<h1>C++ - Module 00</h1>

<br />

> Other Languages
>
> - [English](https://github.com/inakilastra/CPP00/blob/main/README.md)

<br /><br />

>
> - :white_check_mark: [Subject](#subject)
>
>   - :white_check_mark: [Exercise 00: Megaphone](#exercise-00-megaphone)
>
>   - :white_check_mark: [Exercise 01: My Awesome PhoneBook](#exercise-01-my-awesome-phonebook)
>
>   - :white_check_mark: [Exercise 02: The Job Of Your Dreams](#exercise-02-the-job-of-your-dreams)

<br /><br />

>
> - :white_check_mark: [Evaluation](#evaluation)
>
>   - :white_check_mark: [Ex00: Megaphone](#ex00-megaphone)
>
>   - :white_check_mark: [Ex01: My Awesome Phonebook](#ex01-my-awesome-phonebook)
>
>   - :white_check_mark: [Ex02: The Job Of Your Dreams](#ex02-the-job-of-your-dreams)

<br /><br /><br /><br />

## <h2>Subject</h2>

<h3>Reglas generales</h3>

**Compilando**

- Compila tu código con c++ y los flags -Wall -Wextra -Werror

- Su código aún debería compilarse si agrega el flag -std=c++98

**Convenciones de formato y nomenclatura**

- Los directorios de ejercicios se denominarán de esta forma: ex00, ex01, ... , exn

- Nombra tus archivos, clases, funciones, funciones miembro y atributos según lo requerido en las pautas.

- Escribe nombres de clases en formato **UpperCamelCase**. Los archivos que contienen código de clase siempre se nombrarán según el nombre de la clase. Por ejemplo:
ClassName.hpp/ClassName.h, ClassName.cpp o ClassName.tpp. Luego, si tiene un archivo de encabezado que contiene la definición de una clase "BrickWall" que representa una pared de ladrillos, su nombre será BrickWall.hpp.

- A menos que se especifique lo contrario, todos los mensajes de salida deben finalizar con un carácter de nueva línea y mostrarse en la salida estándar.

- ¡Adiós Norminette! No se aplica ningún estilo de codificación en los módulos de C++. Puedes seguir tu favorito. Pero tenga en cuenta que un código que sus pares evaluadores no pueden entender es un código que no pueden calificar. Haga todo lo posible para escribir un código limpio y legible.

<br /><br />

**Permitido/Prohibido**

Ya no estás codificando en C. ¡Es hora de C++! Por lo tanto:

- Puedes utilizar casi todo lo que hay en la biblioteca estándar. Por lo tanto, en lugar de ceñirse a lo que ya sabe, sería inteligente utilizar tanto como sea posible las versiones tipo C++ de las funciones de C a las que está acostumbrado.

- Sin embargo, no puedes utilizar ninguna otra biblioteca externa. Significa que C++ 11 (y sus formas derivadas) y las bibliotecas Boost están prohibidas. Las siguientes funciones también están prohibidas: *printf(), *alloc() y free(). Si los usas tu nota será 0 y listo.

- Tenga en cuenta que, a menos que se indique explícitamente lo contrario, está prohibido utilizar el espacio de nombres <ns_name> y las palabras clave amigas. En caso contrario, tu nota será -42.

- **Puedes usar el STL solo en los Módulos 08 y 09**. Eso significa: no hay **Contenedores** (vector/lista/mapa/etc.) ni **Algoritmos** (cualquier cosa que requiera incluir el encabezado <algoritmo>) hasta entonces. En caso contrario, tu nota será -42.

<br /><br />

**Algunos requisitos de diseño**

- La pérdida de memoria también ocurre en C++. Cuando asigna memoria (usando la nueva palabra clave), debe evitar **pérdidas de memoria**.

- Desde el Módulo 02 al Módulo 09, tus clases deben estar diseñadas en la **Forma Canónica Ortodoxa, excepto cuando se indique explícitamente lo contrario**.

- Cualquier implementación de función colocada en un archivo de encabezado (excepto las plantillas de función) significa 0 para el ejercicio.

- Deberías poder utilizar cada uno de tus encabezados independientemente de los demás. Por tanto, deben incluir todas las dependencias que necesiten. Sin embargo, debes evitar el problema de la doble inclusión agregando **include guards**. En caso contrario su calificación será 0.

<br /><br />

**Léeme**

- Puede agregar algunos archivos adicionales si es necesario (es decir, dividir su código). Como estas asignaciones no están verificadas por un programa, no dude en hacerlo siempre que entregue los archivos obligatorios.

- A veces, las pautas de un ejercicio parecen breves pero los ejemplos pueden mostrar requisitos que no están escritos explícitamente en las instrucciones.

- ¡Lea cada módulo por completo antes de comenzar! De verdad, hazlo.

- ¡Por Odín, por Thor! ¡¡¡Usa tu cerebro!!!

```
Tendrás que implementar muchas clases.
Esto puede parecer tedioso, a menos que puedas programar tu editor de texto favorito.
```

```
Se le da cierta libertad para completar los ejercicios.
Sin embargo, sigue las reglas obligatorias y no seas holgazán.
¡Te perderías mucha información útil! No dudes en leer sobre conceptos teóricos.
```

<br /><br />
[:arrow_up::arrow_up::arrow_up::arrow_up::arrow_up: **subir** :arrow_up::arrow_up::arrow_up::arrow_up::arrow_up:](#cpp00)
<br /><br />

### Exercise 00 Megaphone

Turn-in directory : ex00/<br />
Files to turn in : Makefile, megaphone.cpp<br />
Forbidden functions : None<br />

Sólo para asegurarse de que todos estén despiertos, escriba un programa que se comporte de la siguiente manera:

```
$>./megaphone "shhhhh... I think the students are asleep..."
SHHHHH... I THINK THE STUDENTS ARE ASLEEP...
$>./megaphone Damnit " ! " "Sorry students, I thought this thing was off."
DAMNIT ! SORRY STUDENTS, I THOUGHT THIS THING WAS OFF.
$>./megaphone
* LOUD AND UNBEARABLE FEEDBACK NOISE *
$>
```

```
Resuelve los ejercicios en forma C++.
```

<br /><br />
[:arrow_up::arrow_up::arrow_up::arrow_up::arrow_up: **subir** :arrow_up::arrow_up::arrow_up::arrow_up::arrow_up:](#cpp00)
<br /><br />

### Exercise 01 My Awesome PhoneBook

Turn-in directory : ex01/<br />
Files to turn in : Makefile, *.cpp, *.{h, hpp}<br />
Forbidden functions : None<br />

¡Bienvenidos a los años 80 y su increíble tecnología! Escribe un programa que se comporte como un increíble software de agenda telefónica.

Tienes que implementar dos clases:

**PhoneBook**

- Tiene una variedad de contactos.

- Puede almacenar un máximo de **8 contactos**. Si el usuario intenta agregar un noveno contacto, reemplace el más antiguo por el nuevo.

- Tenga en cuenta que la asignación dinámica está prohibida.

**Contact**

- Representa un contacto de la agenda telefónica.

En su código, se debe crear una instancia de la guía telefónica como una instancia de la clase **PhoneBook**. Lo mismo para los contactos. Cada uno de ellos debe ser instanciado como una instancia de la clase **Contact**. Eres libre de diseñar las clases como quieras, pero ten en cuenta que todo lo que siempre se usará dentro de una clase es privado y todo lo que se puede usar fuera de una clase es público.

```
No olvides ver los vídeos de la intranet.
```

Al iniciar el programa, la agenda está vacía y se le solicita al usuario que ingrese uno de tres comandos. El programa sólo acepta ADD, SEARCH and EXIT.

**ADD: save a new contact**

- Si el usuario ingresa este comando, se le solicita que ingrese la información
del nuevo contacto un campo a la vez. Una vez que se hayan completado todos los campos, agregue el contacto a la agenda.

- Los campos de contacto son: nombre, apellido, apodo, número de teléfono y
secreto más oscuro. Un contacto guardado no puede tener campos vacíos.

**SEARCH: display a specific contact**

- Muestra los contactos guardados como una lista de **4 columnas**: índice, nombre, apellido y apodo.

- Cada columna debe tener **10 caracteres** de ancho. Un carácter de barra vertical ('|') los separa. El texto debe estar alineado a la derecha. Si el texto es más largo que la columna, se debe truncar y el último carácter visible se debe reemplazar por un punto ('.').

- Luego, solicite nuevamente al usuario que muestre el índice de la entrada. Si el índice está fuera de rango o es incorrecto, defina un comportamiento relevante. De lo contrario, muestre la información de contacto, un campo por línea.

**EXIT**

- ¡El programa se cierra y los contactos se pierden para siempre!

**Cualquier otra entrada se descarta.**

Una vez que un comando se ha ejecutado correctamente, el programa espera otro. Se detiene cuando el usuario ingresa SALIR.

Dale un nombre relevante a tu ejecutable.

```
http://www.cplusplus.com/reference/string/string/ and of course
http://www.cplusplus.com/reference/iomanip/
```

<br /><br />
[:arrow_up::arrow_up::arrow_up::arrow_up::arrow_up: **subir** :arrow_up::arrow_up::arrow_up::arrow_up::arrow_up:](#cpp00)
<br /><br />

### Exercise 02 The Job Of Your Dreams

Turn-in directory : ex02/<br />
Files to turn in : Makefile, Account.cpp, Account.hpp, tests.cpp<br />
Forbidden functions : None<br />

```
Account.hpp, tests.cpp y el archivo de registro están disponibles para descargar en
la página de intranet del módulo.
```

Hoy es su primer día en GlobalBanksters United. Después de pasar con éxito las pruebas de reclutamiento (gracias a algunos trucos de Microsoft Office que le mostró un amigo), se unió al equipo de desarrollo. También sabe que el reclutador quedó sorprendido por la rapidez con la que instaló Adobe Reader. Ese pequeño extra marcó la diferencia y te ayudó a derrotar a todos tus oponentes (también conocidos como los otros solicitantes): ¡lo lograste!

De todos modos, tu jefe te acaba de dar trabajo que hacer. Tu primera tarea es recrear un archivo perdido. Algo salió mal y se eliminó un archivo fuente por error. Desafortunadamente, tus colegas no saben qué es Git y usan llaves USB para compartir código. En este punto, tendría sentido abandonar este lugar ahora mismo. Sin embargo, decides quedarte. ¡Desafío aceptado!

Tus compañeros desarrolladores te dan un montón de archivos. La compilación de tests.cpp revela que el archivo que falta es Account.cpp. Por suerte, se guardó el archivo de encabezado Account.hpp. También hay un archivo de registro. Quizás puedas usarlo para comprender cómo se implementó la clase Cuenta.

Comienza a recrear el archivo Account.cpp. En sólo unos minutos, codificarás unas pocas líneas de C++ puro e increíble. Después de un par de compilaciones fallidas, su programa pasa las pruebas. Su resultado coincide perfectamente con el guardado en el archivo de registro (**excepto por las marcas de tiempo** que obviamente diferirán ya que las pruebas guardadas en el archivo de registro se ejecutaron antes de que lo contrataran).

¡Maldita sea, eres impresionante!

```
El orden en el que se llaman los destructores puede diferir dependiendo de
su compilador/sistema operativo. Entonces tus destructores pueden ser llamados
un orden inverso.
```

```
Puedes aprobar este módulo sin realizar el ejercicio 02.
```

**Presentación y evaluación por pares**

Entregue su tarea en su repositorio de Git como de costumbre. Durante la defensa sólo se evaluará el trabajo dentro de su repositorio. No dude en volver a verificar los nombres de sus archivos para asegurarse de que sean correctos.

<br /><br />
[:arrow_up::arrow_up::arrow_up::arrow_up::arrow_up: **subir** :arrow_up::arrow_up::arrow_up::arrow_up::arrow_up:](#cpp00)
<br /><br /><br /><br />

## <h2>Evaluation</h2>

<h3>Pautas</h3>

Debes compilar con clang++, con -Wall -Wextra -Werror
Como recordatorio, este proyecto está en C++98.
NO se esperan funciones de miembros o contenedores de C++ 11 (y posteriores).

Cualquiera de estos significa que no debes calificar el ejercicio en cuestión:

- Una función se implementa en un encabezado (excepto en una plantilla)

- Un Makefile se compila sin banderas y/o con algo distinto a clang++

Cualquiera de estos significa que debes marcar el proyecto como Función Prohibida:

- Uso de una función "C" (*alloc, *printf, gratis)

- Uso de una función no permitida en el tema.

- Uso de "usar espacio de nombres" o "amigo"

- Uso de una biblioteca externa o funciones de C++20

<br /><br />
[:arrow_up::arrow_up::arrow_up::arrow_up::arrow_up: **subir** :arrow_up::arrow_up::arrow_up::arrow_up::arrow_up:](#cpp00)
<br /><br />

### Ex00 Megaphone

Este ejercicio es un calentamiento destinado a descubrir flujos de E/S básicos de C++.
¿Está funcionando?

Este ejercicio es un programa to_upper con un comportamiento específico cuando se ejecuta sin ningún parámetro.

Acepte el enfoque C++ (strings/upper).

<br /><br />

### Ex01 My Awesome Phonebook

Este ejercicio es una primera aproximación a la redacción de una clase sencilla y un pequeño programa interactivo que la utilice. Si el ejercicio es no es completamente funcional, califique lo que se pueda calificar.

<br /><br />

**Manejo de errores**

Este ejercicio requiere cierto manejo de errores, pero los comportamientos no se especifican en el tema: abandonar o reemplazar versiones anteriores.
El contacto está bien. Segfault no es :D!

<br /><br />

**The EXIT command**

Califique el comando EXIT como se describe en el subject.

<br /><br />

**Visibility**

Los atributos de la clase Contact deben ser privados y la clase debería exponer los descriptores de acceso correspondientes.
También verifique que todo lo que siempre debe usarse dentro de una clase (no solo en la clase Contacto) es privado y que todo lo que pueda usarse fuera de una clase es público. Los principiantes tienden poner todo en público, ¡eso no es lo que queréis aquí!

<br /><br />

**The Contact and Phonebook class**

El código debe incluir una clase de contact, o cualquier nombre que tenga el estudiante.
usado.
Esta clase debe contener atributos para los diferentes campos.
El código debe contener una clase Phonebook con una serie de contactos en su interior.

<br /><br />

**Read/Eval loop**

El programa debe presentar un bucle de lectura/evaluación en algún momento: lectura
la entrada, evaluándola, luego realice un bucle hasta que aparezca un comando EXIT en la entrada.
¡Esta lectura debe estar en estilo C++! (std::cin)

<br /><br />

**The ADD command**

Califique el comando ADD como se describe en el subject.

<br /><br />

**The SEARCH command**

Califique el comando SEARCH como se describe en el subject. Una pequeña divergencia en el formato esperado no es relevante.
Esta parte tiene como objetivo utilizar iomanips de C++ y eso es en lo que debes concentrarte.

<br /><br />
[:arrow_up::arrow_up::arrow_up::arrow_up::arrow_up: **top** :arrow_up::arrow_up::arrow_up::arrow_up::arrow_up:](#cpp00)
<br /><br />

### Ex02 The Job Of Your Dreams

Este ejercicio pretende extraer información e instrucciones de ruido inútil e insertar un nuevo código en un contexto existente.

**¿Salvaste el día?**

Este ejercicio es bastante sencillo. O Account.cpp funciona o no. Compare la salida del programa y el registro proporcionado. Cualquier diferencia aparte de la marca de tiempo significa que algo no está bien para este ejercicio.

<br /><br />
[:arrow_up::arrow_up::arrow_up::arrow_up::arrow_up: **subir** :arrow_up::arrow_up::arrow_up::arrow_up::arrow_up:](#cpp00)
<br /><br /><br /><br />
