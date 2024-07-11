# CPP00
## Proyect CPP - Module 00 ════ Proyecto CPP - Módulo 00
English   Castellano
[Proyecto CPP - Módulo 00 Castellano](#proyecto-cpp-módulo-00)
## Proyect CPP Module 00

Guidelines
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
• Use of an external library, or C++20 features

Ex00: Megaphone
This exercise is a warm-up intended to discover basic C++ i/o streams.
Is it working?
This exercise is a to_upper program with a specific behavior when run without any parameter.
Accept C++ approach (strings/upper).

Ex01: My Awesome Phonebook
This exercise is a first approach to writing a simple class and a small interactive program that uses it. If the exercise is
not fully functional, grade what can be graded.
Error handling
This exercise requires some error handling but behaviors are not specified in the subject quitting or replacing older
contact is ok. Segfault is not :D !

The EXIT command
Rate the EXIT command as described in the subject.

Visibility
The attributes of the class Contact should be private and the class
should expose the corresponding accessors.\r\nAlso check that anything that
should always be used inside a class (not only in the Contact class) is private
and that anything that can be used outside a class is public. Beginners tend
to put everything in public, that's not what you want here!

The Contact and Phonebook class
The code must include a Contact class, or whatever name the student
used.
This class must contain attributes for the different fields.
The code must contain a Phonebook class with an array of contact inside.

Read/Eval loop
The program must present a read/eval loop at some point: reading
the input, evaluating it, then loop until an EXIT command appears in input.
This reading should be in C++ style! (std::cin)

The ADD command
Rate the ADD command as described in the subject.

The SEARCH command
Rate the SEARCH command as described in the subject. A minor divergence in the expected formating is not relevant.
This part aims to use C++ iomanips and that's what you should focus on.

Ex02: The Job Of Your Dreams
This exercise intends to extract information and directions from useless noise, and to insert new code into an existing
context.

Did you save the day?
This exercise is pretty straight forward. Either Account.cpp works, either it does not. Compare the program's output and
the provided log. Any difference apart from the timestamp means something is not ok for this exercise.



## Proyecto CPP Módulo 00

Guía

Debe compilarse con clang++, con las banderas -Wall -Wextra -Werror.
Como recordatorio, este proyecto está en C++98.
NO se esperan funciones miembro o contenedores de C++11 (y posteriores).
Cualquiera de estos casos significa que no debe calificar el ejercicio en cuestión:
Una función está implementada en un encabezado (excepto en una plantilla).
Un Makefile compila sin banderas y/o con algo distinto a clang++.
Cualquiera de estos casos significa que debe marcar el proyecto como "Función Prohibida":
Uso de una función "C" (*alloc, *printf, free).
Uso de una función no permitida en la materia.
Uso de "using namespace" o "friend".
Uso de una biblioteca externa o funciones de C++20.
Ejemplos

Ex00: Megáfono
Este ejercicio es un calentamiento para familiarizarse con las entradas y salidas básicas de C++.
El objetivo es crear un programa que convierta texto a mayúsculas y tenga un comportamiento específico cuando se ejecute sin parámetros.
Se espera que la solución use el enfoque de C++ con cadenas de texto y funciones para conversiones a mayúsculas.
Ex01: Mi Increíble Agenda Telefónica
Este ejercicio es una introducción a la creación de una clase simple y un programa interactivo pequeño que la use.
Si el ejercicio no es completamente funcional, califique lo que se pueda calificar.
Se espera que el programa maneje errores básicos, pero los comportamientos específicos no se detallan en la materia (salir o reemplazar contactos antiguos está permitido). Sin embargo, el programa no debe bloquearse (segfault).
El programa debe tener un comando "SALIR" para finalizar la ejecución.
El programa debe permitir agregar nuevos contactos a la agenda.
El programa debe permitir buscar contactos en la agenda. Se debe poner énfasis en la funcionalidad principal de búsqueda y consultar los detalles de la materia para criterios de calificación específicos. Se aceptan pequeñas discrepancias en el formato, pero se debe prestar atención al uso de iomanips de C++ para la salida formateada.
Ex02: El Trabajo De Tus Sueños
Este ejercicio tiene como objetivo extraer información e instrucciones de un texto con ruido e insertar código nuevo en un contexto existente.
El programa debe generar una salida que coincida con el registro proporcionado, excepto por la marca de tiempo. Cualquier otra diferencia indica que algo está mal en el ejercicio.
