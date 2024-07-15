#include "Contact.h" 

Contact::Contact() {}  
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
