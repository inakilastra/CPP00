#include "Contact.h"   // Incluir el archivo de cabecera Contact.h

Contact::Contact() {}  // Constructor opcional para un contacto vacío (inicializa variables con cadenas vacías)
// Método getter para obtener el nombre (devuelve una referencia constante a firstName_)
const string& Contact::getFirstName() const
{
    return firstName_;
}
const string& Contact::getLastName() const 
{
    return lastName_;
}
const string& Contact::getNickName() const 
{
    return nickName_;
}
const string& Contact::getPhoneNumber() const 
{
    return phoneNumber_;
}
const string& Contact::getDarkestSecret() const 
{
    return darkestSecret_;
}
// Método setter para establecer el nombre (recibe una referencia constante a una cadena para evitar modificaciones)
void Contact::setFirstName(const string& firstName) 
{
    firstName_ = firstName;
}
void Contact::setLastName(const string& lastName) 
{
    lastName_ = lastName;
}
void Contact::setNickname(const string& nickName) 
{
    nickName_ = nickName;
}
void Contact::setPhoneNumber(const string& phoneNumber) 
{
    phoneNumber_ = phoneNumber;
}
void Contact::setDarkestSecret(const string& darkestSecret) 
{
    darkestSecret_ = darkestSecret;
}
