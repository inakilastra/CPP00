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

<h3>Exercise 00: BraiiiiiiinnnzzzZ</h3>

Turn-in directory : ex00/<br />
Files to turn in : Makefile, main.cpp, Zombie.{h, hpp}, Zombie.cpp, newZombie.cpp, randomChump.cpp<br />
Forbidden functions : None<br />

Primero, implemente una clase **Zombie**. Tiene un nombre de atributo privado string.
Agregue una función miembro void anunciar (void); a la clase Zombi. Los zombis se anuncian de la siguiente manera:

<name>: BraiiiiiiinnnzzzZ...

No imprima los corchetes angulares (< y >). Para un zombie llamado Foo, el mensaje sería:

Foo: BraiiiiiiinnnzzzZ...

Luego, implemente las dos funciones siguientes:

- Zombie* nuevoZombie( std::string name );

Crea un zombie, le pone un nombre y lo devuelve para que puedas usarlo fuera de la función alcance.

- void randomChump( std::string name );

Crea un zombie, le pones un nombre y el zombie se anuncia.

Ahora bien, ¿cuál es el objetivo real del ejercicio? Tienes que determinar en qué caso es mejor asignar los zombies en la pila o en el montón.

Los zombis deben ser destruidos cuando ya no los necesites. El destructor debe imprimir un mensaje con el nombre del zombie para fines de depuración.

<br /><br />
[:arrow_up::arrow_up::arrow_up::arrow_up::arrow_up: **subir** :arrow_up::arrow_up::arrow_up::arrow_up::arrow_up:](#cpp00)
<br /><br />

<h3>Exercise 01: Moar brainz!</h3>

Turn-in directory : ex01/<br />
Files to turn in : Makefile, main.cpp, Zombie.{h, hpp}, Zombie.cpp, zombieHorde.cpp <br />
Forbidden functions : None<br />

¡Es hora de crear una **horda de zombis**!

Implemente la siguiente función en el archivo apropiado:

> Zombie* zombieHorde( int N, std::string name );

Debe asignar N objetos Zombie en una única asignación. Luego, tiene que inicializar los zombies, dándole a cada uno de ellos el nombre pasado como parámetro. La función devuelve un puntero al primer zombie.

Implemente sus propias pruebas para garantizar que su función zombieHorde() funcione como se esperaba.

Intenta llamar a anunciar() para cada uno de los zombies.

No olvides eliminar todos los zombies y comprobar si hay **pérdidas de memoria**.

<br /><br />
[:arrow_up::arrow_up::arrow_up::arrow_up::arrow_up: **subir** :arrow_up::arrow_up::arrow_up::arrow_up::arrow_up:](#cpp00)
<br /><br />

<h3>Exercise 02: HI THIS IS BRAIN</h3>

Turn-in directory : ex02/ <br />
Files to turn in : Makefile, main.cpp<br />
Forbidden functions : None<br />

Escribe un programa que contenga:

- Una variable string inicializada como "HI THIS IS BRAIN".

- stringPTR: un puntero al string.

- stringREF: una referencia al string.

Su programa tiene que imprimir:

- La dirección de memoria de la variable de string.

- La dirección de memoria mantenida por stringPTR.

- La dirección de memoria mantenida por stringREF.

Y luego:

- El valor de la variable de string.

- El valor señalado por stringPTR.

- El valor señalado por stringREF.

Eso es todo, sin trucos. El objetivo de este ejercicio es desmitificar referencias que pueden parecer completamente nuevas. Aunque existen algunas pequeñas diferencias, esta es otra sintaxis para algo que ya hace: manipulación de direcciones.

<br /><br />
[:arrow_up::arrow_up::arrow_up::arrow_up::arrow_up: **subir** :arrow_up::arrow_up::arrow_up::arrow_up::arrow_up:](#cpp00)
<br /><br />

<h3>Exercise 03: Unnecessary violence</h3>

Turn-in directory : ex03/<br />
Files to turn in : Makefile, main.cpp, Weapon.{h, hpp}, Weapon.cpp, HumanA.{h, hpp}, HumanA.cpp, HumanB.{h, hpp}, HumanB.cpp<br />
Forbidden functions : None<br />

Implemente una clase Weapon que tenga:

- Un tipo de atributo privado, que es un string.

- Una función miembro getType() que devuelve una referencia constante al tipo.

- Una función miembro setType() que establece el tipo usando el nuevo pasado como parámetro.

Ahora, crea dos clases: HumanA y HumanB. Ambos tienen un arma y un nombre. También tienen una función miembro attack() que muestra (por supuesto, sin los corchetes angulares):

<name> ataca con su <weapon type>

HumanA y HumanB son casi iguales excepto por estos dos pequeños detalles:

- Mientras HumanA toma el Arma en su constructor, HumanB no.

- Es posible que HumanB no siempre tenga un arma, mientras que HumanA siempre estará armado.

Si su implementación es correcta, ejecutar el siguiente código imprimirá un ataque con un "garrote con púas crudo" y luego un segundo ataque con "algún otro tipo de garrote" para ambos casos de prueba:

```c++
int main()
{
    {
        Weapon club = Weapon("crude spiked club");
        
        HumanA bob("Bob", club);
        bob.attack();
        club.setType("some other type of club");
        bob.attack();
    }
    {
        Weapon club = Weapon("crude spiked club");

        HumanB jim("Jim");
        jim.setWeapon(club);
        jim.attack();
        club.setType("some other type of club");
        jim.attack();
    }

    return 0;
}
```

No olvides comprobar si hay **pérdidas de memoria**.

```
¿En qué caso crees que sería mejor utilizar un puntero a Weapon? ¿Y una referencia a Weapon? ¿Por qué? Piénselo antes de comenzar este ejercicio.
```

<br /><br />
[:arrow_up::arrow_up::arrow_up::arrow_up::arrow_up: **subir** :arrow_up::arrow_up::arrow_up::arrow_up::arrow_up:](#cpp00)
<br /><br />

<h3>Exercise 04: Sed is for losers</h3>

Turn-in directory : ex04/<br />
Files to turn in : Makefile, main.cpp, *.cpp, *.{h, hpp}<br />
Forbidden functions : std::string::replace<br />

Cree un programa que tome tres parámetros en el siguiente orden: un nombre de archivo y dos strings, s1 y s2.

Abrirá el archivo <filenameo> y copiará su contenido en un nuevo archivo <filename>.replace, reemplazando cada aparición de s1 con s2.

El uso de funciones de manipulación de archivos C está prohibido y se considerará trampa. Todas las funciones miembro de la clase std::string están permitidas, excepto reemplazar. ¡Utilízalos sabiamente!

Por supuesto, maneje entradas y errores inesperados. Debe crear y entregar sus propias pruebas para garantizar que su programa funcione como se espera.

<br /><br />
[:arrow_up::arrow_up::arrow_up::arrow_up::arrow_up: **subir** :arrow_up::arrow_up::arrow_up::arrow_up::arrow_up:](#cpp00)
<br /><br />

<h3>Exercise 05:  Harl 2.0</h3>

Turn-in directory : ex05/<br />
Files to turn in : Makefile, main.cpp, Harl.{h, hpp}, Harl.cpp<br />
Forbidden functions : None<br />

¿Conoces a Harl? Todos lo hacemos, ¿verdad? En caso de que no lo sepas, encuentra a continuación el tipo de comentarios que hace Harl. Se clasifican por niveles:

- Nivel **"DEBUG"**: los mensajes de depuración contienen información contextual. Se utilizan principalmente para el diagnóstico de problemas.
Ejemplo: "Me encanta tener tocino extra para mi hamburguesa 7XL con doble queso, triple pepinillo y ketchup especial. ¡Realmente me encanta!"

- Nivel **"INFO"**: Estos mensajes contienen información extensa. Son útiles para rastrear la ejecución de programas en un entorno de producción.
Ejemplo: "No puedo creer que agregar tocino adicional cueste más dinero. ¡No pusiste suficiente tocino en mi hamburguesa! Si lo hicieras, ¡no estaría pidiendo más!".

- Nivel **"WARNING"**: los mensajes de advertencia indican un problema potencial en el sistema.
Sin embargo, se puede manejar o ignorar.
Ejemplo: "Creo que merezco tener un poco de tocino extra gratis. He estado viniendo durante años mientras que tú empezaste a trabajar aquí desde el mes pasado".

• Nivel **"ERROR"**: estos mensajes indican que se ha producido un error irrecuperable.
Este suele ser un problema crítico que requiere intervención manual.
Ejemplo: "¡Esto es inaceptable! Quiero hablar con el gerente ahora".

Vas a automatizar **Harl**. No será difícil ya que siempre dice las mismas cosas. Tienes que crear una clase Harl con las siguientes funciones de miembros privados:

- void debug( void );

- void info( void );

- void warning( void );

- void error( void );

**Harl** también tiene una función miembro pública que llama a las cuatro funciones miembro anteriores.
dependiendo del nivel pasado como parámetro:

> void complain( std::string level );

El objetivo de este ejercicio es utilizar **punteros a funciones miembro**. Esto no es una sugerencia. Harl tiene que quejarse sin usar un bosque de if/else if/else. ¡No lo piensa dos veces!

Cree y entregue pruebas para demostrar que Harl se queja mucho. Puede utilizar los ejemplos de comentarios enumerados anteriormente en el asunto o optar por utilizar sus propios comentarios.

<br /><br />
[:arrow_up::arrow_up::arrow_up::arrow_up::arrow_up: **subir** :arrow_up::arrow_up::arrow_up::arrow_up::arrow_up:](#cpp00)
<br /><br />

<h3>Exercise 06: Harl filter</h3>

Turn-in directory : ex06/<br />
Files to turn in : Makefile, main.cpp, Harl.{h, hpp}, Harl.cpp<br />
Forbidden functions : None<br />

A veces no quieres prestar atención a todo lo que dice Harl. Implementa un sistema para filtrar lo que dice Harl dependiendo de los niveles de registro que quieras escuchar.

Cree un programa que tome como parámetro uno de los cuatro niveles. Mostrará todos los mensajes de este nivel y superiores. Por ejemplo:

```
$> ./harlFilter "WARNING"
[ WARNING ]
Creo que merezco tener un poco de tocino extra gratis.
Llevo viniendo desde hace años mientras que tú empezaste a trabajar aquí desde el mes pasado.

[ ERROR ]
Esto es inaceptable, quiero hablar con el gerente ahora.

$> ./harlFilter "No estoy seguro de lo cansado que estoy hoy..."
[Probablemente quejándose de problemas insignificantes]
```

Aunque hay varias maneras de lidiar con Harl, una de las más efectivas es APAGARLO.

Asigne el nombre harlFilter a su ejecutable.

Debe utilizar, y tal vez descubrir, la declaración de cambio en este ejercicio.

```
Puedes aprobar este módulo sin realizar el ejercicio 06.
```

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

<h3>Ex00: BraiiiiiiinnnzzzZ</h3>

The goal of this exercise is to understand how to allocate memory in C++.

**Makefile and tests**

There is a Makefile that compiles using the appropriate flags.

There is at least a main to test the exercise.

<br /><br />

**Zombie Class**

There is a Zombie Class.
It has a private name attribute.
It has at least a constructor.
It has a member function announce( void ) that prints: ": BraiiiiiiinnnzzzZ..."
The destructor prints a debug message that includes the name of the zombie.

<br /><br />

**newZombie**

There is a newZombie() function prototyped as: [ Zombie* newZombie( std::string name ); ]
It should allocate a Zombie on the heap and return it.
Ideally, it should call the constructor that takes a string and initializes the name.
The exercise should be marked as correct if the Zombie can announce itself with the name passed to the function.
There are tests to prove everything works.
The zombie is deleted correctly before the end of the program.

<br /><br />

**randomChump**

There is a randomChump() function prototyped as: [ void randomChump( std::string name ); ]
It should create a Zombie on the stack, and make it announce itself.
Ideally the zombie should be allocated on the stack (so implicitly deleted at the end of the function). It can also be allocated on the heap and then explicitly deleted.
The student must justify their choices.
There are tests to prove everything works.

<br /><br />

<h3>Ex01: Moar brainz!</h3>

The goal of this exercise is to allocate a number of objects at the same time using new[], initialize them, and to properly delete them.

<br /><br />

**Makefile and tests**

There is a Makefile that compiles using the appropriate flags.
There is at least a main to test the exercise.

<br /><br />

**zombieHorde**

The Zombie Class has a default constructor.
There is a zombieHorde() function prototyped as: [ Zombie* zombieHorde( int N, std::string name ); ]
It allocates N zombies on the heap explicitly using new[].
After the allocation, there is an initialization of the objects to set their name.
It returns a pointer to the first zombie.
There are enough tests in the main to prove the previous points.
Ex: calling announce() on all the zombies.
Last, all the zombies should be deleted at the same time in the main.

<br /><br />
[:arrow_up::arrow_up::arrow_up::arrow_up::arrow_up: **top** :arrow_up::arrow_up::arrow_up::arrow_up::arrow_up:](#cpp00)
<br /><br />

<h3>Ex02: HI THIS IS BRAIN</h3>

Demystify references! Demystify references! Demystify references! Demystify references! Demystify references! Demystify references! Demystify references! Demystify references! Demystify references! Demystify references! Demystify references! Demystify references!

<br /><br />

**Makefile and tests**

There is a Makefile that compiles using the appropriate flags.
There is at least a main to test the exercise.

<br /><br />

**HI THIS IS BRAIN**

There is a string containing "HI THIS IS BRAIN".
stringPTR is a pointer to the string.
stringREF is a reference to the string.
The address of the string is displayed using the string variable, the stringPTR and the stringREF.
The string is displayed using the stringPTR and the stringREF.

<br /><br />
[:arrow_up::arrow_up::arrow_up::arrow_up::arrow_up: **top** :arrow_up::arrow_up::arrow_up::arrow_up::arrow_up:](#cpp00)
<br /><br />

<h3>Ex03: Unnecessary violence</h3>

The objective of this exercise is to understand that pointers and references present some small differences that make them be more appropriated depending on the use and the lifecycle of the object used.

<br /><br />

**Makefile and tests**

There is a Makefile that compiles using the appropriate flags.
There is at least a main to test the exercise.

<br /><br />

**Weapon**

There is a Weapon class that has a type string, a getType() and a setType().
The getType() function returns a const reference to the type string.

<br /><br />

**HumanA and HumanB**

HumanA can have a reference or a pointer to the Weapon.
Ideally, it should be implemented as a reference, since the Weapon exists from creation until destruction, and never changes.
HumanB must have a pointer to a Weapon since the field is not set at creation time, and the weapon can be NULL.

<br /><br />
[:arrow_up::arrow_up::arrow_up::arrow_up::arrow_up: **top** :arrow_up::arrow_up::arrow_up::arrow_up::arrow_up:](#cpp00)
<br /><br />

<h3>Ex04: Sed is for losers</h3>

Thanks to this exercise, the student should have gotten familiar with ifstream and ofstream.

<br /><br />

**Makefile and tests**

There is a Makefile that compiles using the appropriate flags.
There is at least a main to test the exercise.

<br /><br />

**ex04**

There is a function replace (or other name) that works as specified in the subject.
The error management is efficient: try to pass a file that does not exist, change the permissions, pass it empty, etc.
If you can find an error that isn't handled, and isn't completely esoteric, no points for this exercise.
The program must read from the file using an ifstream or equivalent, and write using an ofstream or equivalent.
The implementation of the function should be done using functions from std::string, no by reading the string character by character.
This is not C anymore!

<br /><br />
[:arrow_up::arrow_up::arrow_up::arrow_up::arrow_up: **top** :arrow_up::arrow_up::arrow_up::arrow_up::arrow_up:](#cpp00)
<br /><br />

<h3>Ex05: Karen 2.0</h3>

The goal of this exercise is to use pointers to class member functions. Also, this is the opportunity to discover to the different log levels.

<br /><br />

**Makefile and tests**

There is a Makefile that compiles using the appropriate flags.
There is at least a main to test the exercise.

<br /><br />

**Our beloved Karen**

There is a class Karen with at least the 5 functions required in the subject.
The function complain() executes the other functions using a pointer to them.
Ideally, the student should have implemented a way of matching the different strings corresponding to the log level to the pointers of the corresponding member function.
If the implementation is different but the exercise works you should mark it as valid. The only thing that is not allowed is to have a if/elseif/else.
The student could have chosen to change the message Karen displays or to display the examples given in the subject, both are valid.

<br /><br />
[:arrow_up::arrow_up::arrow_up::arrow_up::arrow_up: **top** :arrow_up::arrow_up::arrow_up::arrow_up::arrow_up:](#cpp00)
<br /><br />

<h3>Ex06: Karen-filter</h3>

Now that you are experienced coders, you should use new instruction types, statements, loops, etc. The goal of this last exercise is to make you discover the switch statement.

<br /><br />

**Makefile and tests**

There is a Makefile that compiles using the appropriate flags.
There is at least a main to test the exercise.

<br /><br />

**Switching Karen Off**

The program karenFilter takes as argument any of the log levels ("DEBUG", "INFO",  "WARNING" or "ERROR"). It should then display just the messages that are at the same level or above (DEBUG < INFO < WARNING < ERROR). This must be implemented using a switch statement with a default case.
Once again, no if/elseif/else anymore please.

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

<h3>Ex00: BraiiiiiiinnnzzzZ</h3>

El objetivo de este ejercicio es comprender cómo asignar memoria en C++.

<br /><br />

**Makefile y pruebas**

Hay un Makefile que se compila usando los flags apropiados.

Hay al menos un main para probar el ejercicio.

<br /><br />

**Zombie Class**

Hay una clase zombie.
Tiene un atributo de nombre privado.
Tiene al menos un constructor.
Tiene una función miembro anunciar (void) que imprime: ": BraiiiiiiinnnzzzZ..."
El destructor imprime un mensaje de depuración que incluye el nombre del zombie.

<br /><br />

**newZombie**

Hay una función newZombie() cuyo prototipo es: [ Zombie* newZombie( std::string name ); ]
Debería asignar un zombi al montón y devolverlo.
Idealmente, debería llamar al constructor que toma un string e inicializa el nombre.
El ejercicio debe marcarse como correcto si el Zombie puede anunciarse con el nombre pasado a la función.
Hay pruebas para demostrar que todo funciona.
El zombie se elimina correctamente antes de que finalice el programa.

<br /><br />

**randomChump**

Hay una función randomChump() cuyo prototipo es: [ void randomChump( std::string name ); ]
Debería crear un zombi en la pila y hacer que se anuncie.
Lo ideal sería que el zombie se ubicara en la pila (por lo que se eliminaría implícitamente al final de la función). También se puede asignar en el montón y luego eliminarlo explícitamente.
El estudiante debe justificar sus elecciones.
Hay pruebas para demostrar que todo funciona.

<br /><br />
[:arrow_up::arrow_up::arrow_up::arrow_up::arrow_up: **subir** :arrow_up::arrow_up::arrow_up::arrow_up::arrow_up:](#cpp00)
<br /><br />

<h3>Ex01: Moar brainz!</h3>

El objetivo de este ejercicio es asignar varios objetos al mismo tiempo usando new[], inicializarlos y eliminarlos correctamente.

<br /><br />

**Makefile y pruebas**

Hay un Makefile que se compila usando los flags apropiados.
Hay al menos un main para probar el ejercicio.

<br /><br />

**zombieHorde**

La clase Zombie tiene un constructor predeterminado.
Hay una función zombieHorde() cuyo prototipo es: [ Zombie* zombieHorde( int N, std::string name ); ]
Asigna N zombis en el montón explícitamente usando new[].
Después de la asignación, se produce una inicialización de los objetos para establecer su nombre.
Devuelve un puntero al primer zombi.
Hay suficientes pruebas en general para probar los puntos anteriores.
Ej: llamar a announce() en todos los zombies.
Por último, todos los zombies deben eliminarse al mismo tiempo en el archivo main.

<br /><br />

<h3>Ex02: HI THIS IS BRAIN</h3>

¡Desmitifica las referencias! ¡Desmitifica las referencias! ¡Desmitifica las referencias! ¡Desmitifica las referencias! ¡Desmitifica las referencias! ¡Desmitifica las referencias! ¡Desmitifica las referencias! ¡Desmitifica las referencias! ¡Desmitifica las referencias! ¡Desmitifica las referencias! ¡Desmitifica las referencias! ¡Desmitifica las referencias!

<br /><br />

**Makefile y pruebas**

Hay un Makefile que se compila usando los flags apropiados.
Hay al menos un main para probar el ejercicio.

<br /><br />

**HI THIS IS BRAIN**

Hay un string que contiene "HI THIS IS BRAIN".
stringPTR es un puntero al string.
stringREF es una referencia al string.
La dirección del string se muestra utilizando la variable del string, stringPTR y stringREF.
EL string se muestra utilizando stringPTR y stringREF.

<br /><br />
[:arrow_up::arrow_up::arrow_up::arrow_up::arrow_up: **subir** :arrow_up::arrow_up::arrow_up::arrow_up::arrow_up:](#cpp00)
<br /><br />

<h3>Ex03: Unnecessary violence</h3>

El objetivo de este ejercicio es comprender que los punteros y referencias presentan algunas pequeñas diferencias que los hacen más apropiados según el uso y el ciclo de vida del objeto utilizado.

<br /><br />

**Makefile and tests**

Hay un Makefile que se compila usando los flags apropiados.
Hay al menos un main para probar el ejercicio.

<br /><br />

**Weapon**

Hay una clase Weapon que tiene un tipo string, un getType() y un setType().
La función getType() devuelve una referencia constante al tipo de string.

<br /><br />

**HumanA and HumanB**

HumanA puede tener una referencia o un puntero al Weapon.
Lo ideal sería implementarlo como referencia, ya que el Weapon existe desde la creación hasta la destrucción y nunca cambia.
HumanB debe tener un puntero a un Weapon ya que el campo no está configurado en el momento de la creación y el Weapon puede ser NULL.

<br /><br />
[:arrow_up::arrow_up::arrow_up::arrow_up::arrow_up: **subir** :arrow_up::arrow_up::arrow_up::arrow_up::arrow_up:](#cpp00)
<br /><br />

<h3>Ex04: Sed is for losers</h3>

Gracias a este ejercicio, el alumno debería haberse familiarizado con ifstream y ofstream.

<br /><br />

**Makefile and tests**

Hay un Makefile que se compila usando los flags apropiados.
Hay al menos un main para probar el ejercicio.

<br /><br />

**ex04**

Hay una función de reemplazo (u otro nombre) que funciona como se especifica en el asunto.
La gestión de errores es eficiente: intentar pasar un archivo que no existe, cambiar los permisos, pasarlo vacío, etc.
Si puede encontrar un error que no se soluciona y que no es completamente esotérico, no hay puntos para este ejercicio.
El programa debe leer el archivo usando ifstream o equivalente, y escribir usando ofstream o equivalente.
La implementación de la función debe realizarse utilizando funciones de std::string, no leyendo el string carácter por carácter.
¡Esto ya no es C!

<br /><br />
[:arrow_up::arrow_up::arrow_up::arrow_up::arrow_up: **subir** :arrow_up::arrow_up::arrow_up::arrow_up::arrow_up:](#cpp00)
<br /><br />

<h3>Ex05: Karen 2.0</h3>

El objetivo de este ejercicio es utilizar punteros a funciones de miembros de clase. Además, esta es la oportunidad de descubrir los diferentes niveles de registro.

<br /><br />

**Makefile and tests**

Hay un Makefile que se compila usando los flags apropiados.
Hay al menos un main para probar el ejercicio.

<br /><br />

**Our beloved Karen**

Se cuenta con una clase Karen con al menos las 5 funciones requeridas en la subject.
La función complain() ejecuta las otras funciones usando un puntero hacia ellas.
Idealmente, el estudiante debería haber implementado una forma de hacer coincidir las diferentes strings correspondientes al nivel de registro con los punteros de la función miembro correspondiente.
Si la implementación es diferente pero el ejercicio funciona, debes marcarlo como válido. Lo único que no está permitido es tener un if/elseif/else.
El estudiante pudo haber elegido cambiar el mensaje que muestra Karen o mostrar los ejemplos dados en el tema, ambos son válidos.

<br /><br />
[:arrow_up::arrow_up::arrow_up::arrow_up::arrow_up: **subir** :arrow_up::arrow_up::arrow_up::arrow_up::arrow_up:](#cpp00)
<br /><br />

<h3>Ex06: Karen-filter</h3>

Ahora que eres codificador experimentado, deberías utilizar nuevos tipos de instrucciones, sentencias, bucles, etc. El objetivo de este último ejercicio es hacerte descubrir la sentencia switch.

<br /><br />

**Makefile and tests**

Hay un Makefile que se compila usando los flags apropiados.
Hay al menos un main para probar el ejercicio.

<br /><br />

**Switching Karen Off**

El programa karenFilter toma como argumento cualquiera de los niveles de registro ("DEBUG", "INFO", "WARNING" o "ERROR"). Luego debería mostrar solo los mensajes que están en el mismo nivel o superior (DEBUG <INFO <WARNING <ERROR). Esto debe implementarse mediante una declaración de cambio con un caso predeterminado.
Una vez más, ya no if/elseif/else, por favor.

<br /><br />
[:arrow_up::arrow_up::arrow_up::arrow_up::arrow_up: **subir** :arrow_up::arrow_up::arrow_up::arrow_up::arrow_up:](#cpp00)
<br /><br /><br /><br />

## <h2>Ficheros ex00</h2>

<h3>ex00 Makefile</h3>

```c++
# **************************************************************************** #
# VARIABLES                                                                    #
# NAME: Define el nombre de la biblioteca que se creará.                       #
NAME = Zombie
# CC: Especifica el compilador a usar.                                     #
CC = c++
# CCFLAGS: Define las opciones del compilador                                  #
CCFLAGS = -Wall -Wextra -Werror -std=c++98 #-MMD
# RM: Comando para eliminar archivos.                                          #
RM = rm -rf
# SRCS: Lista los archivos fuente que forman parte de la biblioteca.           #
SRCS = main.cpp ZombieStack.cpp ZombieQueue.cpp
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
GRAY =          \033[0;90m
RED =           \033[0;91m
GREEN =         \033[0;92m
YELLOW =        \033[0;93m
BLUE =          \033[0;94m
MAGENTA =       \033[0;95m
CYAN =          \033[0;96m
WHITE =         \033[0;97m
BLACK =			\033[0;99m
ORANGE =		\033[38;5;209m
BROWN =			\033[38;2;184;143;29m
DARK_GRAY =		\033[38;5;234m
MID_GRAY =		\033[38;5;245m
DARK_GREEN =	\033[38;2;75;179;82m
DARK_YELLOW =	\033[38;5;143m
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
		@echo "\n$(ORANGE) Created $(NAME) ✓ $(DEF_COLOR)\n"
# all: Esta regla es un alias para la regla $(NAME).                           #
#      Cuando se ejecuta make all, se crea la biblioteca.                      #
all: $(NAME)
# archivos de dependencia necesarios                                           #
-include ${DEPS}
# clean: Esta regla elimina los archivos objeto (.o)                           #
#        generados durante la compilación.                                     #
clean:
	@${RM} ${OBJS} ${DEPS}
	@echo "\n${ORANGE} ◎ All objects cleaned ◎$(DEF_COLOR)\n"

# fclean: Esta regla elimina la biblioteca (libft.a)                           #
#         y los archivos objeto (.o).                                          #
fclean:
	@${RM} ${OBJS} ${DEPS} ${NAME}
	@echo "\n${ORANGE} ◎ All objects and executable cleaned ◎$(DEF_COLOR)\n"
    @echo "\n${GREEN} ./megaphone \"shhhhh... I think the students are asleep...\" | cat -e"
    @echo "${YELLOW} SHHHHH... I THINK THE STUDENTS ARE ASLEEP...\n"
    @echo "${GREEN}$> ./megaphone Damnit \" ! \" \"Sorry students, I thought this thing was off.\" | cat -e"
    @echo "${YELLOW} DAMNIT ! SORRY STUDENTS, I THOUGHT THIS THING WAS OFF.\n"
    @echo "${GREEN}$> ./megaphone | cat -e"
    @echo "${YELLOW} * LOUD AND UNBEARABLE FEEDBACK NOISE *$(DEF_COLOR)\n"
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
<br /><br /><br /><br />