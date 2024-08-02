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