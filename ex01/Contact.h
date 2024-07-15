#include <iostream> 
#include <string>

#ifndef CONTACT_H
#define CONTACT_H

class Contact {
public:
    Contact();

    const std::string& getFirstName() const;
    const std::string& getLastName() const;
    const std::string& getNickName() const;
    const std::string& getPhoneNumber() const;
    const std::string& getDarkestSecret() const;

    void setFirstName(const std::string& firstName);
    void setLastName(const std::string& lastName);
    void setNickname(const std::string& nickName);
    void setPhoneNumber(const std::string& phoneNumber);
    void setDarkestSecret(const std::string& darkestSecret);

private:
    std::string firstName_;
    std::string lastName_;
    std::string nickName_;
    std::string phoneNumber_;
    std::string darkestSecret_;
};

#endif