# CPP00

> [!NOTE] 
> Subjects
> :white_check_mark: [English](#subjects-english)
> :white_check_mark: [Castellano](#subjects-castellano)

> [!NOTE] 
> Evaluation     
> :white_check_mark: [English](#evaluation) 
> :white_check_mark: [Castellano](#evaluación)

## Subjects English

### General rules

#### Compiling

- Compile your code with c++ and the flags -Wall -Wextra -Werror

- Your code should still compile if you add the flag -std=c++98

##### Formatting and naming conventions

- The exercise directories will be named this way: ex00, ex01, ... , exn

- Name your files, classes, functions, member functions and attributes as required in the guidelines.

- Write class names in **UpperCamelCase** format. Files containing class code will always be named according to the class name. For instance:
ClassName.hpp/ClassName.h, ClassName.cpp, or ClassName.tpp. Then, if you have a header file containing the definition of a class "BrickWall" standing for a brick wall, its name will be BrickWall.hpp.

- Unless specified otherwise, every output messages must be ended by a new-line character and displayed to the standard output.

- Goodbye Norminette! No coding style is enforced in the C++ modules. You can follow your favorite one. But keep in mind that a code your peer-evaluators can’t understand is a code they can’t grade. Do your best to write a clean and readable code.

##### Allowed/Forbidden

You are not coding in C anymore. Time to C++! Therefore:

- You are allowed to use almost everything from the standard library. Thus, instead of sticking to what you already know, it would be smart to use as much as possible the C++-ish versions of the C functions you are used to.

- However, you can’t use any other external library. It means C++11 (and derived forms) and Boost libraries are forbidden. The following functions are forbidden too: *printf(), *alloc() and free(). If you use them, your grade will be 0 and that’s it.

- Note that unless explicitly stated otherwise, the using namespace <ns_name> and friend keywords are forbidden. Otherwise, your grade will be -42.

- **You are allowed to use the STL in the Module 08 and 09 only**. That means: no **Containers** (vector/list/map/and so forth) and no **Algorithms** (anything that requires to include the <algorithm> header) until then. Otherwise, your grade will be -42.

##### A few design requirements

- Memory leakage occurs in C++ too. When you allocate memory (by using the new keyword), you must avoid **memory leaks**.

- From Module 02 to Module 09, your classes must be designed in the **Orthodox Canonical Form, except when explicitely stated otherwise**.

- Any function implementation put in a header file (except for function templates) means 0 to the exercise.

- You should be able to use each of your headers independently from others. Thus, they must include all the dependencies they need. However, you must avoid the problem of double inclusion by adding **include guards**. Otherwise, your grade will be 0.

##### Read me

- You can add some additional files if you need to (i.e., to split your code). As these assignments are not verified by a program, feel free to do so as long as you turn in the mandatory files.

- Sometimes, the guidelines of an exercise look short but the examples can show requirements that are not explicitly written in the instructions.

- Read each module completely before starting! Really, do it.

- By Odin, by Thor! Use your brain!!!

```
You will have to implement a lot of classes. 
This can seem tedious, unless you’re able to script your favorite text editor.
```

```
You are given a certain amount of freedom to complete the exercises.
However, follow the mandatory rules and don’t be lazy. 
You would miss a lot of useful information! Do not hesitate to read about
theoretical concepts.
```

### Exercise 00: Megaphone

Turn-in directory : ex00/
Files to turn in : Makefile, megaphone.cpp
Forbidden functions : None

Just to make sure that everybody is awake, write a program that behaves as follows:

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
Solve the exercises in a C++ manner.
```

### Exercise 01: My Awesome PhoneBook

Turn-in directory : ex01/
Files to turn in : Makefile, *.cpp, *.{h, hpp}
Forbidden functions : None

Welcome to the 80s and their unbelievable technology! Write a program that behaves like a crappy awesome phonebook software.

You have to implement two classes:

#### PhoneBook

- It has an array of contacts.

- It can store a maximum of **8 contacts**. If the user tries to add a 9th contact, replace the oldest one by the new one.

- Please note that dynamic allocation is forbidden.

#### Contact

- Stands for a phonebook contact.

In your code, the phonebook must be instantiated as an instance of the **PhoneBook** class. Same thing for the contacts. Each one of them must be instantiated as an instance of the **Contact** class. You’re free to design the classes as you like but keep in mind that anything that will always be used inside a class is private, and that anything that can be used outside a class is public.

```
Don’t forget to watch the intranet videos.
```

On program start-up, the phonebook is empty and the user is prompted to enter one of three commands. The program only accepts ADD, SEARCH and EXIT.

#### ADD: save a new contact

- If the user enters this command, they are prompted to input the information
of the new contact one field at a time. Once all the fields have been completed, add the contact to the phonebook.

- The contact fields are: first name, last name, nickname, phone number, and
darkest secret. A saved contact can’t have empty fields.

#### SEARCH: display a specific contact

- Display the saved contacts as a list of **4 columns**: index, first name, last name and nickname.

- Each column must be **10 characters** wide. A pipe character (’|’) separates them. The text must be right-aligned. If the text is longer than the column, it must be truncated and the last displayable character must be replaced by a dot (’.’).

- Then, prompt the user again for the index of the entry to display. If the index is out of range or wrong, define a relevant behavior. Otherwise, display the contact information, one field per line.

#### EXIT

- The program quits and the contacts are lost forever!

#### Any other input is discarded.

Once a command has been correctly executed, the program waits for another one. It stops when the user inputs EXIT.

Give a relevant name to your executable.

```
http://www.cplusplus.com/reference/string/string/ and of course
http://www.cplusplus.com/reference/iomanip/
```

### Exercise 02: The Job Of Your Dreams

Turn-in directory : ex02/
Files to turn in : Makefile, Account.cpp, Account.hpp, tests.cpp
Forbidden functions : None

```
Account.hpp, tests.cpp and the log file are available for download on
the intranet page of the module.
```

Today is your first day at GlobalBanksters United. After successfully passing the recruitment tests (thanks to a few Microsoft Office tricks a friend showed you), you joined the dev team. You also know the recruiter was amazed by how quickly you installed Adobe Reader. That little extra made all the difference and helped you defeat all your opponents (aka the other applicants): you made it!

Anyway, your manager just gave you some work to do. Your first task is to recreate a lost file. Something went wrong and a source file was deleted by mistake. Unfortunately, your colleagues don’t know what Git is and use USB keys to share code. At this point, it would make sense to leave this place right now. However, you decide to stay. Challenge accepted!

Your fellow developers give you a bunch of files. Compiling tests.cpp reveals that the missing file is Account.cpp. Lucky you, the header file Account.hpp was saved. There is also a log file. Maybe you could use it in order to understand how the Account class was implemented.

You start to recreate the Account.cpp file. In only a few minutes, you code a few lines of pure awesome C++. After a couple of failed compilations, your program passes the tests. Its output matches perfectly the one saved in the log file (**except for the timestamps** which will obviously differ since the tests saved in the log file were run before you were hired).

Damn, you’re impressive!

```
The order in which the destructors are called may differ depending on
your compiler/operating system. So your destructors may be called in
a reverse order.
```

```
You can pass this module without doing exercise 02.
```

### Submission and peer-evaluation

Turn in your assignment in your Git repository as usual. Only the work inside your repository will be evaluated during the defense. Don’t hesitate to double check the names of your files to ensure they are correct.


[**⬆⬆⬆⬆⬆⬆ top ⬆⬆⬆⬆⬆⬆**](#cpp00)


## Subjects Castellano

### Reglas generales

#### Compilando

- Compila tu código con c++ y los flags -Wall -Wextra -Werror

- Su código aún debería compilarse si agrega el flag -std=c++98

##### Convenciones de formato y nomenclatura

- Los directorios de ejercicios se denominarán de esta forma: ex00, ex01, ... , exn

- Nombra tus archivos, clases, funciones, funciones miembro y atributos según lo requerido en las pautas.

- Escribe nombres de clases en formato **UpperCamelCase**. Los archivos que contienen código de clase siempre se nombrarán según el nombre de la clase. Por ejemplo:
ClassName.hpp/ClassName.h, ClassName.cpp o ClassName.tpp. Luego, si tiene un archivo de encabezado que contiene la definición de una clase "BrickWall" que representa una pared de ladrillos, su nombre será BrickWall.hpp.

- A menos que se especifique lo contrario, todos los mensajes de salida deben finalizar con un carácter de nueva línea y mostrarse en la salida estándar.

- ¡Adiós Norminette! No se aplica ningún estilo de codificación en los módulos de C++. Puedes seguir tu favorito. Pero tenga en cuenta que un código que sus pares evaluadores no pueden entender es un código que no pueden calificar. Haga todo lo posible para escribir un código limpio y legible.

##### Permitido/Prohibido

Ya no estás codificando en C. ¡Es hora de C++! Por lo tanto:

- Puedes utilizar casi todo lo que hay en la biblioteca estándar. Por lo tanto, en lugar de ceñirse a lo que ya sabe, sería inteligente utilizar tanto como sea posible las versiones tipo C++ de las funciones de C a las que está acostumbrado.

- Sin embargo, no puedes utilizar ninguna otra biblioteca externa. Significa que C++ 11 (y sus formas derivadas) y las bibliotecas Boost están prohibidas. Las siguientes funciones también están prohibidas: *printf(), *alloc() y free(). Si los usas tu nota será 0 y listo.

- Tenga en cuenta que, a menos que se indique explícitamente lo contrario, está prohibido utilizar el espacio de nombres <ns_name> y las palabras clave amigas. En caso contrario, tu nota será -42.

- **Puedes usar el STL solo en los Módulos 08 y 09**. Eso significa: no hay **Contenedores** (vector/lista/mapa/etc.) ni **Algoritmos** (cualquier cosa que requiera incluir el encabezado <algoritmo>) hasta entonces. En caso contrario, tu nota será -42.

##### Algunos requisitos de diseño

- La pérdida de memoria también ocurre en C++. Cuando asigna memoria (usando la nueva palabra clave), debe evitar **pérdidas de memoria**.

- Desde el Módulo 02 al Módulo 09, tus clases deben estar diseñadas en la **Forma Canónica Ortodoxa, excepto cuando se indique explícitamente lo contrario**.

- Cualquier implementación de función colocada en un archivo de encabezado (excepto las plantillas de función) significa 0 para el ejercicio.

- Deberías poder utilizar cada uno de tus encabezados independientemente de los demás. Por tanto, deben incluir todas las dependencias que necesiten. Sin embargo, debes evitar el problema de la doble inclusión agregando **include guards**. En caso contrario su calificación será 0.

##### Léeme

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

### Exercise 00: Megaphone

Turn-in directory : ex00/
Files to turn in : Makefile, megaphone.cpp
Forbidden functions : None

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

### Exercise 01: My Awesome PhoneBook

Turn-in directory : ex01/
Files to turn in : Makefile, *.cpp, *.{h, hpp}
Forbidden functions : None

¡Bienvenidos a los años 80 y su increíble tecnología! Escribe un programa que se comporte como un increíble software de agenda telefónica.

Tienes que implementar dos clases:

#### PhoneBook

- Tiene una variedad de contactos.

- Puede almacenar un máximo de **8 contactos**. Si el usuario intenta agregar un noveno contacto, sustituir el más antiguo por el nuevo.

- Tenga en cuenta que la asignación dinámica está prohibida.

#### Contact

- Representa un contacto de la agenda telefónica.

En su código, se debe crear una instancia de la guía telefónica como una instancia de la clase **PhoneBook**. Lo mismo para los contactos. Cada uno de ellos debe ser instanciado como una instancia de la clase **Contact**. Eres libre de diseñar las clases como quieras, pero ten en cuenta que todo lo que siempre se usará dentro de una clase es privado y todo lo que se puede usar fuera de una clase es público.

```
No olvides ver los vídeos de la intranet.
```

Al iniciar el programa, la agenda está vacía y se le solicita al usuario que ingrese uno de tres comandos. El programa sólo acepta ADD, SEARCH y EXIT.

#### ADD: guardar un nuevo contacto

- Si el usuario ingresa este comando, se le solicita que ingrese la información del nuevo contacto un campo a la vez. Una vez que se hayan completado todos los campos, agregue el contacto a la agenda.

- Los campos de contacto son: nombre, apellido, apodo, número de teléfono y
secreto más oscuro. Un contacto guardado no puede tener campos vacíos.

#### SEARCH: muestra un contacto específico

- Muestra los contactos guardados como una lista de **4 columnas**: índice, nombre, apellido nombre y apodo.

- Cada columna debe tener **10 caracteres** de ancho. Un carácter de barra vertical ('|') separa a ellos. El texto debe estar alineado a la derecha. Si el texto es más largo que la columna, debe truncarse y el último carácter visualizable debe reemplazarse por un punto ('.').

- Luego, solicite nuevamente al usuario que muestre el índice de la entrada. Si el índice está fuera de rango o es incorrecto, defina un comportamiento relevante. De lo contrario, muestre la información de contacto, un campo por línea.

#### EXIT

- ¡El programa se cierra y los contactos se pierden para siempre!

#### Cualquier otra entrada se descarta.

Una vez que un comando se ha ejecutado correctamente, el programa espera otro. Se detiene cuando el usuario ingresa EXIT.

Dale un nombre relevante a tu ejecutable.

```
http://www.cplusplus.com/reference/string/string/ and of course
http://www.cplusplus.com/reference/iomanip/
```

### Exercise 02: El trabajo de tus sueños

Turn-in directory : ex02/
Files to turn in : Makefile, Account.cpp, Account.hpp, tests.cpp
Forbidden functions : None

```
Account.hpp, tests.cpp y el archivo de registro están disponibles para descargar en la página de intranet del módulo.
```

Hoy es su primer día en GlobalBanksters United. Después de pasar con éxito las pruebas de reclutamiento (gracias a algunos trucos de Microsoft Office que le mostró un amigo), se unió al equipo de desarrollo. También sabe que el reclutador quedó sorprendido por la rapidez con la que instaló Adobe Reader. Ese pequeño extra marcó la diferencia y te ayudó a derrotar a todos tus oponentes (también conocidos como los otros solicitantes): ¡lo lograste!

De todos modos, tu jefe te acaba de dar trabajo que hacer. Tu primera tarea es recrear un archivo perdido. Algo salió mal y un archivo fuente se eliminó por error. Desafortunadamente, tus colegas no saben qué es Git y usan llaves USB para compartir código. En este punto, tendría sentido abandonar este lugar ahora mismo. Sin embargo, decides quedarte. ¡Desafío aceptado!

Tus compañeros desarrolladores te dan un montón de archivos. La compilación de tests.cpp revela que el archivo que falta es Account.cpp. Por suerte, se guardó el archivo de encabezado Account.hpp. También hay un archivo de registro. Quizás puedas usarlo para comprender cómo se implementó la clase Cuenta.

Comienza a recrear el archivo Account.cpp. En sólo unos minutos, codificarás unas pocas líneas de C++ puro e increíble. Después de un par de compilaciones fallidas, su programa pasa las pruebas. Su resultado coincide perfectamente con el guardado en el archivo de registro (**excepto por las marcas de tiempo** que obviamente diferirán ya que las pruebas guardadas en el archivo de registro se ejecutaron antes de que lo contrataran).

¡Maldita sea, eres impresionante!

```
El orden en el que se llaman los destructores puede diferir dependiendo de
su compilador/sistema operativo. Entonces tus destructores pueden ser llamados un orden inverso.
```

```
Puedes aprobar este módulo sin realizar el ejercicio 02.
```


[**⬆⬆⬆⬆⬆⬆ top ⬆⬆⬆⬆⬆⬆**](#cpp00)


## Evaluation

### Guidelines

You must compile with clang++, with -Wall -Wextra -Werror 
As a reminder, this project is in C++98.
C++11 (and later) members functions or containers are NOT expected.

Any of these means you must not grade the exercise in question:

- A function is implemented in a header (except in a template)

- A Makefile compiles without flags and/or with something other than clang++

Any of these means that you must flag the project as Forbidden Function:

- Use of a "C" function (*alloc, *printf, free)

- Use of a function not allowed in the subject

- Use of "using namespace" or "friend"

- Use of an external library, or C++20 features

### Ex00: Megaphone

This exercise is a warm-up intended to discover basic C++ i/o streams.
Is it working?

This exercise is a to_upper program with a specific behavior when run without any parameter.

### Ex01: My Awesome Phonebook

This exercise is a first approach to writing a simple class and a small interactive program that uses it. If the exercise is not fully functional, grade what can be graded.
Error handling

This exercise requires some error handling but behaviors are not specified in the subject quitting or replacing older contact is ok. Segfault is not :D !

#### The EXIT command

Rate the EXIT command as described in the subject.

#### Visibility

The attributes of the class Contact should be private and the class should expose the corresponding accessors.
Also check that anything that should always be used inside a class (not only  in the Contact class) is private and that anything that can be used outside a class is public. Beginners tend to put everything in public, that's not what you want here!

#### The Contact and Phonebook class

The code must include a Contact class, or whatever name the student used.
This class must contain attributes for the different fields.
The code must contain a Phonebook class with an array of contact inside.

#### Read/Eval loop

The program must present a read/eval loop at some point: reading the input, evaluating it, then loop until an EXIT command appears in input.
This reading should be in C++ style! (std::cin)

#### The ADD command

Rate the ADD command as described in the subject.

#### The SEARCH command

Rate the SEARCH command as described in the subject. A minor divergence in the expected formating is not relevant.
This part aims to use C++ iomanips and that's what you should focus on.

### Ex02: The Job Of Your Dreams

This exercise intends to extract information and directions from useless noise, and to insert new code into an existing context.

#### Did you save the day?

This exercise is pretty straight forward. Either Account.cpp works, either it does not. Compare the program's output and the provided log. Any difference apart from the timestamp means something is not ok for this exercise.


[**⬆⬆⬆⬆⬆⬆ top ⬆⬆⬆⬆⬆⬆**](#cpp00)


## Evaluación

### Pautas

Debes compilar con clang++, con -Wall -Wextra -Werror
Como recordatorio, este proyecto está en C++98.
NO se esperan funciones de miembros o contenedores de C++ 11 (y posteriores).

Cualquiera de estos significa que no debes calificar el ejercicio en cuestión:

- Una función se implementa en un encabezado (excepto en una plantilla)

- Un Makefile se compila sin banderas y/o con algo distinto a clang++

Cualquiera de estos significa que debes marcar el proyecto como Función Prohibida:

- Uso de una función "C" (*alloc, *printf, free)

- Uso de una función no permitida en el tema.

- Uso de "usar namespace" o "friend"

- Uso de una biblioteca externa o funciones de C++20

### Ex00: Megáfono

Este ejercicio es un calentamiento destinado a descubrir flujos de E/S básicos de C++.
¿Está funcionando?

Este ejercicio es un programa to_upper con un comportamiento específico cuando se ejecuta sin ningún parámetro.

### Ex01: Mi impresionante agenda telefónica

Este ejercicio es una primera aproximación a la redacción de una clase sencilla y un pequeño programa interactivo que la utilice. Si el ejercicio no es completamente funcional, califique lo que se pueda calificar.

#### Manejo de errores

Este ejercicio requiere cierto manejo de errores, pero los comportamientos no se especifican en el tema. Salir o reemplazar un contacto anterior está bien. Segfault no es :D!

#### El comando EXIT

Califica el comando EXIT como se describe en el subject.

#### Visibilidad

Los atributos de la clase Contact deben ser privados y la clase debe exponer los accesores correspondientes.
También verifique que todo lo que siempre deba usarse dentro de una clase (no solo en la clase Contact) sea privado y que todo lo que pueda ser utilizado fuera de una clase es público. Los principiantes tienden a poner todo en público, ¡eso no es lo que quieres aquí!

#### La clase Contact y la clase Phonebook

El código debe incluir una clase Contact o cualquier nombre que haya utilizado el estudiante.
Esta clase debe contener atributos para los diferentes campos.
El código debe contener una clase Phonebook con una serie de contactos en su interior.

#### Bucle de lectura/evaluación

El programa debe presentar un bucle de lectura/evaluación en algún momento: leer la entrada, evaluarla y luego realizar un bucle hasta que aparezca un comando EXIT en la entrada.
¡Esta lectura debe estar en estilo C++! (std::cin)

#### El comando ADD

Califique el comando ADD como se describe en el subject.

#### El comando SEARCH

Califique el comando SEARCH como se describe en el subject. Una pequeña divergencia en el formato esperado no es relevante.
Esta parte tiene como objetivo utilizar iomanips de C++ y eso es en lo que debes concentrarte.

### Ex02: El trabajo de tus sueños

Este ejercicio pretende extraer información e instrucciones de ruido inútil e insertar código nuevo en un contexto existente.

#### ¿Salvaste el día?

Este ejercicio es bastante sencillo. 
O Account.cpp funciona o no. 
Compare la salida del programa y el registro proporcionado. 
Cualquier diferencia aparte de la marca de tiempo significa que algo no está bien para este ejercicio.


[**⬆⬆⬆⬆⬆⬆ subir ⬆⬆⬆⬆⬆⬆**](#cpp00)