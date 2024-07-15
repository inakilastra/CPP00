# CPP00

<h1>C++ - Module 00</h1>

<br /><br />

> Subject
>
> - :white_check_mark: [English](#subject-english)
>
> - :white_check_mark: [Castellano](#subject-castellano)

<br /><br />

> Evaluation     
>
> - :white_check_mark: [English](#evaluation) 
>
> - :white_check_mark: [Castellano](#evaluación)

<br /><br />

> Ficheros ex00  
>
> - :white_check_mark: [Makefile](#ex00-makefile) 
>
> - :white_check_mark: [megaphone](#ex00-megaphone)

<br /><br />

> Ficheros ex01  
>
> - :white_check_mark: [Makefile](#ex01-makefile) 
>
> - :white_check_mark: [main](#ex01-main)
>
> - :white_check_mark: [Contact.h](#ex01-contact-h)
>
> - :white_check_mark: [Contact.cpp](#ex01-contact-cpp)
>
> - :white_check_mark: [Phonebook.h](#ex01-Contatc-h)
>
> - :white_check_mark: [Phonebook.cpp](#ex01-Contatc-cpp)

<br /><br />

> Ficheros ex02 (optional)  
>
> - :rotating_light: Undone - Sin realizar

<br /><br /><br /><br />

## <h2>Subject English</h2>

<h3>General rules</h3>

**Compiling**

- Compile your code with c++ and the flags -Wall -Wextra -Werror

- Your code should still compile if you add the flag -std=c++98

<br /><br />

**Formatting and naming conventions**

- The exercise directories will be named this way: ex00, ex01, ... , exn

- Name your files, classes, functions, member functions and attributes as required in the guidelines.

- Write class names in **UpperCamelCase** format. Files containing class code will always be named according to the class name. For instance:
ClassName.hpp/ClassName.h, ClassName.cpp, or ClassName.tpp. Then, if you have a header file containing the definition of a class "BrickWall" standing for a brick wall, its name will be BrickWall.hpp.

- Unless specified otherwise, every output messages must be ended by a new-line character and displayed to the standard output.

- Goodbye Norminette! No coding style is enforced in the C++ modules. You can follow your favorite one. But keep in mind that a code your peer-evaluators can’t understand is a code they can’t grade. Do your best to write a clean and readable code.

<br /><br />

**Allowed/Forbidden**

You are not coding in C anymore. Time to C++! Therefore:

- You are allowed to use almost everything from the standard library. Thus, instead of sticking to what you already know, it would be smart to use as much as possible the C++-ish versions of the C functions you are used to.

- However, you can’t use any other external library. It means C++11 (and derived forms) and Boost libraries are forbidden. The following functions are forbidden too: *printf(), *alloc() and free(). If you use them, your grade will be 0 and that’s it.

- Note that unless explicitly stated otherwise, the using namespace <ns_name> and friend keywords are forbidden. Otherwise, your grade will be -42.

- **You are allowed to use the STL in the Module 08 and 09 only**. That means: no **Containers** (vector/list/map/and so forth) and no **Algorithms** (anything that requires to include the <algorithm> header) until then. Otherwise, your grade will be -42.

<br /><br />

**A few design requirements**

- Memory leakage occurs in C++ too. When you allocate memory (by using the new keyword), you must avoid **memory leaks**.

- From Module 02 to Module 09, your classes must be designed in the **Orthodox Canonical Form, except when explicitely stated otherwise**.

- Any function implementation put in a header file (except for function templates) means 0 to the exercise.

- You should be able to use each of your headers independently from others. Thus, they must include all the dependencies they need. However, you must avoid the problem of double inclusion by adding **include guards**. Otherwise, your grade will be 0.

<br /><br />

**Read me**

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

<br /><br />
[:arrow_up::arrow_up::arrow_up::arrow_up::arrow_up: **top** :arrow_up::arrow_up::arrow_up::arrow_up::arrow_up:](#cpp00)
<br /><br />

<h3>Exercise 00: Megaphone</h3>

Turn-in directory : ex00/<br />
Files to turn in : Makefile, megaphone.cpp<br />
Forbidden functions : None<br />

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

<br /><br />
[:arrow_up::arrow_up::arrow_up::arrow_up::arrow_up: **top** :arrow_up::arrow_up::arrow_up::arrow_up::arrow_up:](#cpp00)
<br /><br />

<h3>Exercise 01: My Awesome PhoneBook</h3>

Turn-in directory : ex01/<br />
Files to turn in : Makefile, *.cpp, *.{h, hpp}<br />
Forbidden functions : None<br />

Welcome to the 80s and their unbelievable technology! Write a program that behaves like a crappy awesome phonebook software.

You have to implement two classes:

**PhoneBook**

- It has an array of contacts.

- It can store a maximum of **8 contacts**. If the user tries to add a 9th contact, replace the oldest one by the new one.

- Please note that dynamic allocation is forbidden.

**Contact**

- Stands for a phonebook contact.

In your code, the phonebook must be instantiated as an instance of the **PhoneBook** class. Same thing for the contacts. Each one of them must be instantiated as an instance of the **Contact** class. You’re free to design the classes as you like but keep in mind that anything that will always be used inside a class is private, and that anything that can be used outside a class is public.

```
Don’t forget to watch the intranet videos.
```

On program start-up, the phonebook is empty and the user is prompted to enter one of three commands. The program only accepts ADD, SEARCH and EXIT.

**ADD: save a new contact**

- If the user enters this command, they are prompted to input the information
of the new contact one field at a time. Once all the fields have been completed, add the contact to the phonebook.

- The contact fields are: first name, last name, nickname, phone number, and
darkest secret. A saved contact can’t have empty fields.

**SEARCH: display a specific contact**

- Display the saved contacts as a list of **4 columns**: index, first name, last name and nickname.

- Each column must be **10 characters** wide. A pipe character (’|’) separates them. The text must be right-aligned. If the text is longer than the column, it must be truncated and the last displayable character must be replaced by a dot (’.’).

- Then, prompt the user again for the index of the entry to display. If the index is out of range or wrong, define a relevant behavior. Otherwise, display the contact information, one field per line.

**EXIT**

- The program quits and the contacts are lost forever!

**Any other input is discarded.**

Once a command has been correctly executed, the program waits for another one. It stops when the user inputs EXIT.

Give a relevant name to your executable.

```
http://www.cplusplus.com/reference/string/string/ and of course
http://www.cplusplus.com/reference/iomanip/
```


<br /><br />
[:arrow_up::arrow_up::arrow_up::arrow_up::arrow_up: **top** :arrow_up::arrow_up::arrow_up::arrow_up::arrow_up:](#cpp00)
<br /><br />

<h3>Exercise 02: The Job Of Your Dreams</h3>

Turn-in directory : ex02/<br />
Files to turn in : Makefile, Account.cpp, Account.hpp, tests.cpp<br />
Forbidden functions : None<br />

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

**Submission and peer-evaluation**

Turn in your assignment in your Git repository as usual. Only the work inside your repository will be evaluated during the defense. Don’t hesitate to double check the names of your files to ensure they are correct.

<br /><br />
[:arrow_up::arrow_up::arrow_up::arrow_up::arrow_up: **top** :arrow_up::arrow_up::arrow_up::arrow_up::arrow_up:](#cpp00)
<br /><br /><br /><br />

## <h2>Subject Castellano</h2>

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

<h3>Exercise 00: Megaphone</h3>

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

<h3>Exercise 01: My Awesome PhoneBook</h3>

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

<h3>Exercise 02: The Job Of Your Dreams</h3>

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

<h3>Guidelines</h3>

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

<h3>Ex00: Megaphone</h3>

This exercise is a warm-up intended to discover basic C++ i/o streams.

**Is it working?**

This exercise is a to_upper program with a specific behavior when run without any parameter.
Accept C++ approach (strings/upper).

<br /><br />

<h3>Ex01: My Awesome Phonebook</h3>

This exercise is a first approach to writing a simple class and a small interactive program that uses it. If the exercise is not fully functional, grade what can be graded.

<br /><br />

**Error handling**

This exercise requires some error

<br /><br />

**The EXIT command**

Rate the EXIT command as described in the subject.

<br /><br />

**Visibility**

The attributes of the class Contact should be private and the class should expose the corresponding accessors.\r\nAlso check that anything that should always be used inside a class (not only in the Contact class) is private and that anything that can be used outside a class is public. Beginners tend to put everything in public, that's not what you want here!

<br /><br />

**The Contact and Phonebook class**

The code must include a Contact class, or whatever name the student used.
This class must contain attributes for the different fields.
The code must contain a Phonebook class with an array of contact inside.

<br /><br />

**Read/Eval loop**

The program must present a read/eval loop at some point: reading the input, evaluating it, then loop until an EXIT command appears in input.
This reading should be in C++ style! (std::cin)

<br /><br />

**The ADD command**

Rate the ADD command as described in the subject.

<br /><br />

**The SEARCH command**

Rate the SEARCH command as described in the subject. A minor divergence in the expected formating is not relevant.
This part aims to use C++ iomanips and that's what you should focus on.

<br /><br />
[:arrow_up::arrow_up::arrow_up::arrow_up::arrow_up: **top** :arrow_up::arrow_up::arrow_up::arrow_up::arrow_up:](#cpp00)
<br /><br />

<h3>Ex02: The Job Of Your Dreams</h3>

This exercise intends to extract information and directions from useless noise, and to insert new code into an existing context.

**Did you save the day?**

This exercise is pretty straight forward. Either Account.cpp works, either it does not. Compare the program's output and the provided log. Any difference apart from the timestamp means something is not ok for this exercise.

<br /><br />
[:arrow_up::arrow_up::arrow_up::arrow_up::arrow_up: **top** :arrow_up::arrow_up::arrow_up::arrow_up::arrow_up:](#cpp00)
<br /><br /><br /><br />

## <h2>Evaluación</h2>

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

<h3>Ex00: Megaphone</h3>

Este ejercicio es un calentamiento destinado a descubrir flujos de E/S básicos de C++.
¿Está funcionando?

Este ejercicio es un programa to_upper con un comportamiento específico cuando se ejecuta sin ningún parámetro.

Acepte el enfoque C++ (strings/upper).

<br /><br />

<h3>Ex01: My Awesome Phonebook</h3>

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

<h3>Ex02: The Job Of Your Dreams</h3>

Este ejercicio pretende extraer información e instrucciones de ruido inútil e insertar un nuevo código en un contexto existente.

**¿Salvaste el día?**

Este ejercicio es bastante sencillo. O Account.cpp funciona o no. Compare la salida del programa y el registro proporcionado. Cualquier diferencia aparte de la marca de tiempo significa que algo no está bien para este ejercicio.

<br /><br />
[:arrow_up::arrow_up::arrow_up::arrow_up::arrow_up: **subir** :arrow_up::arrow_up::arrow_up::arrow_up::arrow_up:](#cpp00)
<br /><br /><br /><br />

## <h2>Ficheros ex00</h2>

<h3>ex00 Makefile</h3>

```c++
# **************************************************************************** #
# VARIABLES                                                                    #
# NAME: Define el nombre de la biblioteca que se creará.                       #
NAME = megaphone
# CC: Especifica el compilador a usar.                                     #
CC = c++
# CCFLAGS: Define las opciones del compilador                                  #
CCFLAGS = -Wall -Wextra -Werror -std=c++98 #-MMD
# RM: Comando para eliminar archivos.                                          #
RM = rm -rf
# SRCS: Lista los archivos fuente que forman parte de la biblioteca.           #
SRCS = megaphone.cpp
# OBJS: Lista de objetos (archivos ".o") generados a partir de la compilación  #
#       de los archivos fuente C++ listados en SRCS.                           #
OBJS = ${SRCS:.cpp=.o}
# DEPS: Lista de archivos de dependencia que son necesarios para compilar      #
#       correctamente los archivos fuente C++ listados en SRCS.                #
DEPS = ${SRCS:.cpp=.d}
# ESTILO FUENTE: Definen secuencias de escape ANSI fuente Italica y Negrita    #
ITALIC = \033[3m
BOLD =	 \033[1m
# COLORS: Definen secuencias de escape ANSI para colores en la terminal        #
DEF_COLOR =     \033[0;39m
GREEN =         \033[0;92m
YELLOW =        \033[0;93m
ORANGE =		\033[38;5;209m
# **************************************************************************** #

# **************************************************************************** #
# REGLAS                                                                       #
# .DEFAULT_GOAL := all
# %.o : %.c: Esta regla indica cómo compilar cada archivo fuente (.c)          #
#            en un archivo objeto (.o).                                        #
#            La acción @$(CC) $(CCFLAGS) -c -o $@ $< utiliza el compilador gcc #
#            con las opciones -Wall -Wextra -Werror para compilar el archivo   #
#            fuente ($<) y generar el archivo objeto ($@).                     #
%.o: %.cpp
	@echo "\n${ORANGE} ◎ Compiling → $(ORANGE)$< $(DEF_COLOR)"
	@$(CC) $(CFLAGS) -c $^ -o $@	
# $(NAME) : $(OBJS): Esta regla indica que para crear la biblioteca            #
#           se necesitan los archivos objeto ($(OBJS) y $(OBJSB).              #
$(NAME): $(OBJS)
		@${CC} ${CFLAGS} ${SRCS} -o ${NAME}
		@echo "\n${YELLOW} ✅ ${GREEN}$(NAME) $(DEF_COLOR)\n"
		@echo "\nTests -- Pruebas\n"
		@echo "\n${GREEN} ./megaphone \"shhhhh... I think the students are asleep...\" | cat -e"
		@echo "${YELLOW} SHHHHH... I THINK THE STUDENTS ARE ASLEEP...\n"
		@echo "${GREEN}$> ./megaphone Damnit \" ! \" \"Sorry students, I thought this thing was off.\" | cat -e"
		@echo "${YELLOW} DAMNIT ! SORRY STUDENTS, I THOUGHT THIS THING WAS OFF.\n"
		@echo "${GREEN}$> ./megaphone | cat -e"
		@echo "${YELLOW} * LOUD AND UNBEARABLE FEEDBACK NOISE *$(DEF_COLOR)\n"
# all: Esta regla es un alias para la regla $(NAME).                           #
#      Cuando se ejecuta make all, se crea la biblioteca.                      #
all: $(NAME)
# archivos de dependencia necesarios                                           #
-include ${DEPS}
# clean: Esta regla elimina los archivos objeto (.o)                           #
#        generados durante la compilación.                                     #
clean:
	@${RM} ${OBJS} ${DEPS}
	@echo "\n${ORANGE} ❌ Todos los objetos eliminados$(DEF_COLOR)\n"

# fclean: Esta regla elimina la biblioteca (libft.a)                           #
#         y los archivos objeto (.o).                                          #
fclean:
	@${RM} ${OBJS} ${DEPS} ${NAME}
	@echo "\n${ORANGE} ❌ Todos los objetos y ejecutables eliminados$(DEF_COLOR)\n"
# re: Esta regla es un alias para la secuencia fclean all.                     #
#     Cuando se ejecuta make re, se limpia la compilación anterior             #
#     y se crea la biblioteca nuevamente.                                      #
re: fclean all
# **************************************************************************** #

# **************************************************************************** #
# PSEUDO-OBJETIVOS                                                             #
# PHONY: Indica que all, clean, fclean y re son pseudo-objetivos,              #
#        no archivos reales.                                                   #
.PHONY: all clean fclean re
# **************************************************************************** #
```
<br /><br />
[:arrow_up::arrow_up::arrow_up::arrow_up::arrow_up: **subir** :arrow_up::arrow_up::arrow_up::arrow_up::arrow_up:](#cpp00)
<br /><br />

<h3>ex00 Megaphone</h3>

```c++
// Biblioteca que proporciona funciones para realizar operaciones de entrada y salida de datos.
#include <iostream> 

int main(int argc, char **argv) 
{
  // variables enteras, i y j, que se utilizarán como contadores en los bucles.
  int   i;
  int   j;

  i = 1;
  // Si no hay argumentos
  // Imprime un mensaje en la salida con (std::cout)
  // y el programa termina con un código de retorno de 1.
  if (argc == 1) 
  {
    std::cout << "* LOUD AND UNBEARABLE FEDDBACK NOISE *" << std::endl;
    return 1;
  }
  // Itero sobre los argumentos pasados al programa, excepto el primero (el nombre del programa). 
  // Para cada argumento:
  // Se inicializa la variable j a 0 para recorrer los caracteres del argumento actual.
  // Itero sobre los caracteres del argumento actual hasta encontrar el carácter nulo ('\0').
  // Convierto cada carácter en mayúscula utilizando toupper y se imprime en la salida estándar.
  while (i < argc)
  {
    j = 0;
    while (argv[i][j] != '\0')
    {
        std::cout << (char)toupper(argv[i][j]);
        j++;
    }
    i++;
  }
  // Se imprime una nueva línea en la salida estándar
  std::cout << std::endl;
  return 0;
}
```

<br /><br />
[:arrow_up::arrow_up::arrow_up::arrow_up::arrow_up: **subir** :arrow_up::arrow_up::arrow_up::arrow_up::arrow_up:](#cpp00)
<br /><br />

<h3>ex00 Makefile</h3>

```c++
# **************************************************************************** #
# VARIABLES                                                                    #
# NAME: Define el nombre de la biblioteca que se creará.                       #
NAME = main
# CC: Especifica el compilador a usar.                                     #
CC = c++
# CCFLAGS: Define las opciones del compilador                                  #
CCFLAGS = -Wall -Wextra -Werror -std=c++98 #-MMD
# RM: Comando para eliminar archivos.                                          #
RM = rm -rf
# SRCS: Lista los archivos fuente que forman parte de la biblioteca.           #
SRCS = main.cpp Contact.cpp PhoneBook.cpp
# OBJS: Lista de objetos (archivos ".o") generados a partir de la compilación  #
#       de los archivos fuente C++ listados en SRCS.                           #
OBJS = ${SRCS:.cpp=.o}
# DEPS: Lista de archivos de dependencia que son necesarios para compilar      #
#       correctamente los archivos fuente C++ listados en SRCS.                #
DEPS = ${SRCS:.cpp=.d}
# ESTILO FUENTE: Definen secuencias de escape ANSI fuente Italica y Negrita    #
ITALIC = \033[3m
BOLD =	 \033[1m
# COLORS: Definen secuencias de escape ANSI para colores en la terminal        #
DEF_COLOR =     \033[0;39m
GREEN =         \033[0;92m
YELLOW =        \033[0;93m
ORANGE =		\033[38;5;209m
# **************************************************************************** #

# **************************************************************************** #
# REGLAS                                                                       #
# .DEFAULT_GOAL := all
# %.o : %.c: Esta regla indica cómo compilar cada archivo fuente (.c)          #
#            en un archivo objeto (.o).                                        #
#            La acción @$(CC) $(CCFLAGS) -c -o $@ $< utiliza el compilador gcc #
#            con las opciones -Wall -Wextra -Werror para compilar el archivo   #
#            fuente ($<) y generar el archivo objeto ($@).                     #
%.o: %.cpp
	@echo "\n${ORANGE} ◎ Compiling → $(ORANGE)$< $(DEF_COLOR)"
	@$(CC) $(CFLAGS) -c $^ -o $@	
# $(NAME) : $(OBJS): Esta regla indica que para crear la biblioteca            #
#           se necesitan los archivos objeto ($(OBJS) y $(OBJSB).              #
$(NAME): $(OBJS)
		@${CC} ${CFLAGS} ${SRCS} -o ${NAME}
		@echo "\n${GREEN} ✅ $(NAME) $(DEF_COLOR)\n"
# all: Esta regla es un alias para la regla $(NAME).                           #
#      Cuando se ejecuta make all, se crea la biblioteca.                      #
all: $(NAME)
# archivos de dependencia necesarios                                           #
-include ${DEPS}
# clean: Esta regla elimina los archivos objeto (.o)                           #
#        generados durante la compilación.                                     #
clean:
	@${RM} ${OBJS} ${DEPS}
	@echo "\n${ORANGE} ❌ Todos los objetos eliminados$(DEF_COLOR)\n"

# fclean: Esta regla elimina la biblioteca (libft.a)                           #
#         y los archivos objeto (.o).                                          #
fclean:
	@${RM} ${OBJS} ${DEPS} ${NAME}
	@echo "\n${ORANGE} ❌ Todos los objetos y ejecutables eliminados$(DEF_COLOR)\n"
# re: Esta regla es un alias para la secuencia fclean all.                     #
#     Cuando se ejecuta make re, se limpia la compilación anterior             #
#     y se crea la biblioteca nuevamente.                                      #
re: fclean all
# **************************************************************************** #

# **************************************************************************** #
# PSEUDO-OBJETIVOS                                                             #
# PHONY: Indica que all, clean, fclean y re son pseudo-objetivos,              #
#        no archivos reales.                                                   #
.PHONY: all clean fclean re
# **************************************************************************** #
```
<br /><br />
[:arrow_up::arrow_up::arrow_up::arrow_up::arrow_up: **subir** :arrow_up::arrow_up::arrow_up::arrow_up::arrow_up:](#cpp00)
<br /><br />

<h3>ex01 main</h3>

```c++
#include <iostream>    // Libreria para entrada/salida de datos (cout, cin)
#include <string>      // Libreria para manipulación de cadenas (string, getline)
#include <limits>      // Libreria para numeric_limits (se usa para limpiar el búfer de entrada)
#include "Contact.h"   // Incluir archivo de cabecera para la clase Contact
#include "PhoneBook.h" // Incluir archivo de cabecera para la clase PhoneBook

int main()
{
    // Crear una instancia de la clase PhoneBook
    PhoneBook phoneBook; // Declaro phoneBook

    std::string     str;           // Variable para almacenar la entrada del usuario       
    std::string     firstName;     // Variable para almacenar el nombre
    std::string     lastName;      // Variable para almacenar el apellido
    std::string     nickName;      // Variable para almacenar el apodo
    std::string     phoneNumber;   // Variable para almacenar el número de teléfono
    std::string     darkestSecret; // Variable para almacenar el secreto oscuro
    int             index;         // Variable para almacenar el index del contacto a buscar
    const Contact*  contact;       // Variable para almacenar los datos del contacto a buscar
    bool            running = true; // Variable para controlar el bucle principal
    while(running) // Bucle infinito para interacción continua
	{
		// Muestro las instrucciones del programa y solicit0 la acción del usuario
        std::cout << "\nThe program only accepts ADD, SEARCH and EXIT.\n";
        std::cout << "\nPlease, type your action and press return.\n" << std::endl;
        // leo la línea introducida por el usuario y la almaceno en la variable str
		getline (std::cin,str);
        // Manejo la entrada del usuario según el comando ingresado
        if (str == "ADD")
        {
            // Funcionalidad para agregar un nuevo contacto
            Contact newContact;  // Declaración de un nuevo contacto
            index = 0;
            // Obtener el nombre
            std::cout << "Enter first name: ";
            getline(std::cin, firstName);
            if (firstName != "")
            {
                newContact.setFirstName(firstName);
                index = 1;
            }
            else
                std::cout << "\nError: first name empty\n" << std::endl;         
            if (index == 1)
            {
                // Obtener el apellido
                std::cout << "Enter last name: ";
                getline(std::cin, lastName);
                if (lastName != "")
                {
                    newContact.setLastName(lastName);
                    index = 2;
                }
                else
                    std::cout << "\nError: last name empty\n" << std::endl; 
            }
            if (index == 2)
            {            
                // Obtener el apodo
                std::cout << "Enter nickname: ";
                getline(std::cin, nickName);            
                if (nickName != "")
                {
                    newContact.setNickname(nickName);
                    index = 3;
                }
                else
                    std::cout << "\nError: nickname empty\n" << std::endl;  
            }            
            if (index == 3)
            {
                // Obtener el número de teléfono
                std::cout << "Enter phone number: ";
                getline(std::cin, phoneNumber);
                if (phoneNumber != "")
                {
                    newContact.setPhoneNumber(phoneNumber);
                    index = 4;
                }
                else
                    std::cout << "\nError: phone Number empty\n" << std::endl; 
            }            
            if (index == 4)
            {
                // Obtener ael secreto más oscuro
                std::cout << "Enter darkest secret: ";
                getline(std::cin, darkestSecret);
                if (darkestSecret != "")
                {
                    newContact.setDarkestSecret(darkestSecret);
                    index = 5;
                }
                else
                    std::cout << "\nError: darkest Secret empty\n" << std::endl; 
            }
            if (index == 5)
            {
                // Agregar el nuevo contacto a phonebook
                if (phoneBook.addContact(newContact))
                {
                    std::cout << "\nContact added successfully!\n" << std::endl;
                }
                else
                    std::cout << "\nError: Phonebook is full.\n" << std::endl;
            }                
        }
        else if (str == "SEARCH")
        {
            phoneBook.displayContacts(); // Mostrar todos los contactos

            std::cout << "\nEnter the index of the contact to search: ";
            std::cin >> index; // Obtener el índice para buscar

             // Limpia el estado de cin y limpia el búfer de entrada
            std::cin.clear(); // Clear any error flags
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Clear remaining input buffer

            contact = phoneBook.searchContact(index); // Buscar el contacto por índice
            if (contact)
            {
                // Mostrar información de contacto si se encuentra
                std::cout << "\nContact found:\n";
                std::cout << "First name: " << contact->getFirstName() << std::endl;
                std::cout << "Last name: " << contact->getLastName() << std::endl;
                std::cout << "Nickname: " << contact->getNickName() << std::endl;
                std::cout << "Phone number: " << contact->getPhoneNumber() << std::endl;
                std::cout << "Darkest secret: " << contact->getDarkestSecret() << std::endl;
            }
            else
            {
                std::cout << "\nContact not found.\n";
            }
        }
        else if (str == "EXIT")
        {
            // Salir del programa con un mensaje
            std::cout << "\n¡El programa se cierra y los contactos se pierden para siempre!\n" << std::endl;
            running = false; // Cambiar la variable para salir del bucle
            return (0);
        }
        else
        {
            std::cout << "\nInvalid command. Please try again.\n"; // Manejar comandos inválidos
        }

    }
    return (0);
}
```

<br /><br />
[:arrow_up::arrow_up::arrow_up::arrow_up::arrow_up: **subir** :arrow_up::arrow_up::arrow_up::arrow_up::arrow_up:](#cpp00)
<br /><br /><br /><br />

<h3>ex01 Contact h</h3>

```c++
#include <iostream> 
#include <string>

#ifndef CONTACT_H
#define CONTACT_H

class Contact {
public:
    // Constructor (opcional): Inicializar un contacto vacío (constructor por defecto)
    Contact();

    // Métodos getter para acceder a la información de contacto (const asegura que los datos no se modifiquen)
    const std::string& getFirstName() const;     // Devolver una referencia al nombre (const evita la modificación)
    const std::string& getLastName() const;      // Devolver una referencia al apellido
    const std::string& getNickName() const;      // Devolver una referencia al apodo
    const std::string& getPhoneNumber() const;   // Devolver una referencia al teléfono
    const std::string& getDarkestSecret() const; // Devolver una referencia al secreto oscuro

    // Métodos setter para modificar la información de contacto
    void setFirstName(const std::string& firstName);         // Establecer el nombre
    void setLastName(const std::string& lastName);           // Establecer el apellido
    void setNickname(const std::string& nickName);           // Establecer el apodo
    void setPhoneNumber(const std::string& phoneNumber);     // Establecer el teléfono
    void setDarkestSecret(const std::string& darkestSecret); // Establecer el secreto oscuro

private:
    std::string firstName_;     // Cadena para almacenar el nombre del contacto
    std::string lastName_;      // Cadena para almacenar el apellido del contacto
    std::string nickName_;      // Cadena para almacenar el apodo del contacto
    std::string phoneNumber_;   // Cadena para almacenar el teléfono del contacto 
    std::string darkestSecret_; // Cadena para almacenar el secreto oscuro del contacto
};

#endif
```

<br /><br />
[:arrow_up::arrow_up::arrow_up::arrow_up::arrow_up: **subir** :arrow_up::arrow_up::arrow_up::arrow_up::arrow_up:](#cpp00)
<br /><br /><br /><br />

<h3>ex01 Contact cpp</h3>

```c++
#include "Contact.h"   // Incluir el archivo de cabecera Contact.h

Contact::Contact() {}  // Constructor opcional para un contacto vacío (inicializa variables con cadenas vacías)
// Método getter para obtener el nombre (devuelve una referencia constante a firstName_)
const std::string& Contact::getFirstName() const
{
    return firstName_;
}
const std::string& Contact::getLastName() const 
{
    return lastName_;
}
const std::string& Contact::getNickName() const 
{
    return nickName_;
}
const std::string& Contact::getPhoneNumber() const 
{
    return phoneNumber_;
}
const std::string& Contact::getDarkestSecret() const 
{
    return darkestSecret_;
}
// Método setter para establecer el nombre (recibe una referencia constante a una cadena para evitar modificaciones)
void Contact::setFirstName(const std::string& firstName) 
{
    firstName_ = firstName;
}
void Contact::setLastName(const std::string& lastName) 
{
    lastName_ = lastName;
}
void Contact::setNickname(const std::string& nickName) 
{
    nickName_ = nickName;
}
void Contact::setPhoneNumber(const std::string& phoneNumber) 
{
    phoneNumber_ = phoneNumber;
}
void Contact::setDarkestSecret(const std::string& darkestSecret) 
{
    darkestSecret_ = darkestSecret;
}
```

<br /><br />
[:arrow_up::arrow_up::arrow_up::arrow_up::arrow_up: **subir** :arrow_up::arrow_up::arrow_up::arrow_up::arrow_up:](#cpp00)
<br /><br /><br /><br />

<h3>ex01 Phonebook h</h3>

```c++
#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include "Contact.h" // Incluir el archivo de cabecera Contact.h

class PhoneBook 
{
    public:
        // Constructor (inicializa el número de contactos a 0)
        PhoneBook();

        // Agregar un contacto a la agenda (considera la capacidad máxima)
        bool addContact(const Contact& contact);

        // Buscar un contacto por índice (devuelve un puntero constante)
        const Contact* searchContact(int index) const;

        // Mostrar todos los contactos
        void displayContacts() const;

    private:
        static const int MAX_CONTACTS = 8; // Máximo número de contactos permitidos
        Contact contacts_[MAX_CONTACTS];   // Arreglo para almacenar los contactos
        int numContacts_;                  // Número actual de contactos 
};

#endif
```

<br /><br />
[:arrow_up::arrow_up::arrow_up::arrow_up::arrow_up: **subir** :arrow_up::arrow_up::arrow_up::arrow_up::arrow_up:](#cpp00)
<br /><br /><br /><br />

<h3>ex01 Phonebook cpp</h3>

```c++
#include "PhoneBook.h"  // Incluir el archivo de cabecera PhoneBook.h
#include <thread>

// Constructor de PhoneBook (inicializa el número de contactos a 0)
PhoneBook::PhoneBook() : numContacts_(0) {}

// Agregar un contacto a la agenda telefónica (considera la capacidad máxima)
bool PhoneBook::addContact(const Contact& contact) 
{
    if (numContacts_ == MAX_CONTACTS) 
    {
        // Agenda llena: reemplazar el contacto más antiguo (índice 0)
        contacts_[0] = contact;
        std::cout << "\nContact added successfully! (Replacing oldest contact)\n" << std::endl;
        return true;
    }
    else
    {
        // Espacio disponible: agregar el contacto al final
        contacts_[numContacts_] = contact;
        numContacts_++;
        std::cout << "\nContact added successfully!\n" << std::endl;
        return true;
    }
    return false; // En caso de error (ej.: falla al copiar el contacto)
}

// Buscar un contacto por índice (devuelve un puntero constante)
const Contact* PhoneBook::searchContact(int index) const 
{
    if (index >= 0 && index < numContacts_) 
    {
        return &contacts_[index]; // Índice válido: devolver puntero constante al contacto
    }
    return nullptr; // Índice fuera de rango: devolver nullptr
}

// Mostrar todos los contactos de la agenda en un formato básico
void PhoneBook::displayContacts() const 
{
    int i = 0;
    int strLen;
    std::cout << "   Index  |First Name| Last Name| Nickname |" << std::endl;
    std::cout << "----------|----------|----------|----------|" << std::endl;
    while (i < numContacts_) 
    {
        std::cout << i << "         |";
         // Mostrar solo los primeros 10 caracteres de cada campo (usar substr o lógica personalizada)
        strLen = contacts_[i].getFirstName().size();
        if (strLen > 10) 
            std::cout << contacts_[i].getFirstName().substr(0, 10) << "|";
        else
        {
            std::cout << contacts_[i].getFirstName();
            while (strLen < 10)
            {
                std::cout << " ";
                strLen++;
            }           
            std::cout << "|";
        }
        strLen = contacts_[i].getLastName().size();
        if (strLen > 10) 
            std::cout << contacts_[i].getLastName().substr(0, 10) << "|";
        else
        {
            std::cout << contacts_[i].getLastName();
            while (strLen < 10)
            {
                std::cout << " ";
                strLen++;
            }           
            std::cout << "|";
        }        
        strLen = contacts_[i].getNickName().size();
        if (strLen > 10) 
            std::cout << contacts_[i].getNickName().substr(0, 10) << "|";
        else
        {
            std::cout << contacts_[i].getNickName();
            while (strLen < 10)
            {
                std::cout << " ";
                strLen++;
            }           
            std::cout << "|";
        }        
        std::cout << std::endl;
        i++;
    }
}
```

<br /><br />
[:arrow_up::arrow_up::arrow_up::arrow_up::arrow_up: **subir** :arrow_up::arrow_up::arrow_up::arrow_up::arrow_up:](#cpp00)
<br /><br /><br /><br />