# CPP00

[Evaluation](#evaluation) [Evaluación](#evaluación)



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


[**⬆⬆ top ⬆⬆**](#cpp00)


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


[**⬆⬆ subir ⬆⬆**](#cpp00)