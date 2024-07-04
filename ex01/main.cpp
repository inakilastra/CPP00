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
                    //cout << "\nContact added successfully!\n" << endl;
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


/*
Ex01: Mi Increíble Agenda Telefónica
Este ejercicio es una introducción a la creación de una clase simple y un programa interactivo que la utiliza. 
A continuación, se desglosan los criterios de evaluación:

Funcionalidad (incluso si está parcialmente completada):

Clase Contacto:
Presencia: El código debe incluir una clase Contacto (o un nombre similar elegido por el estudiante).
Atributos: La clase debe tener variables miembro privadas para almacenar información de contacto (por ejemplo, nombre, número de teléfono).
Accesores: La clase debe proporcionar funciones miembro públicas (getters y setters) para acceder y modificar los atributos privados.
Clase Agenda Telefónica:
Presencia: El código debe incluir una clase AgendaTelefónica (o un nombre similar).
Matriz de contactos: La clase debe tener una variable miembro privada para almacenar una matriz de objetos Contacto.
Bucle de lectura/evaluación:
Entrada/Salida: El programa debe usar std::cin y std::cout para la interacción con el usuario.
Bucleo: El programa debe tener un bucle que lea continuamente los comandos del usuario hasta que se introduzca un comando "SALIR".
Procesamiento de comandos:
Comando SALIR: El programa debe manejar correctamente el comando "SALIR", finalizando el programa con gracia.
Comando AGREGAR (Evaluar según lo descrito en la materia): El programa debe poder agregar nuevos contactos a la agenda telefónica. Céntrese en la funcionalidad principal de agregar contactos, pero consulte los detalles de la materia para los criterios de calificación específicos.
Comando BUSCAR (Evaluar según lo descrito en la materia): El programa debe poder buscar contactos en la agenda telefónica. Céntrese en la funcionalidad principal de búsqueda, pero consulte los detalles de la materia para los criterios de calificación específicos, ya que se aceptan pequeñas discrepancias de formato. Aquí, preste atención al uso de iostreams de C++ para la salida formateada.
Consideraciones adicionales:

Manejo de errores: Si bien no se definen comportamientos específicos, se agradece el manejo básico de errores. Esto podría implicar manejar situaciones como una agenda telefónica llena o una entrada de usuario no válida. Sin embargo, el programa no debería bloquearse (segfault).
Calidad del código:
La sangría y el formato deben ser consistentes para mejorar la legibilidad.
Los comentarios pueden ser útiles para explicar la funcionalidad del código.
Miembros privados vs. públicos:
Las variables miembro para almacenar datos deben ser privadas dentro de la clase.
Se deben usar funciones miembro públicas (accesores) para acceder y modificar datos privados. Evita hacer todo público.

*/