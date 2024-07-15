#include <iostream> 
#include <string>
#include <limits>
#include "Contact.h"
#include "PhoneBook.h"

int main()
{
    PhoneBook phoneBook;

    std::string     str;    
    std::string     firstName;
    std::string     lastName;
    std::string     nickName;
    std::string     phoneNumber;
    std::string     darkestSecret;
    int             index;
    const Contact*  contact;
    bool            running = true;
    while(running)
	{
        std::cout << "\nThe program only accepts ADD, SEARCH and EXIT.\n";
        std::cout << "\nPlease, type your action and press return.\n" << std::endl;
		getline (std::cin,str);
        if (str == "ADD")
        {
            Contact newContact;
            index = 0;
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
            phoneBook.displayContacts();

            std::cout << "\nEnter the index of the contact to search: ";
            std::cin >> index;
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

            contact = phoneBook.searchContact(index);
            if (contact)
            {
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
            std::cout << "\n¡El programa se cierra y los contactos se pierden para siempre!\n" << std::endl;
            running = false;
            return (0);
        }
        else
        {
            std::cout << "\nInvalid command. Please try again.\n";
        }

    }
    return (0);
}
