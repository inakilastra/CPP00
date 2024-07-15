#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include "Contact.h"

class PhoneBook 
{
    public:
        PhoneBook();
        bool addContact(const Contact& contact);
        const Contact* searchContact(int index) const;
        void displayContacts() const;

    private:
        static const int MAX_CONTACTS = 8;
        Contact contacts_[MAX_CONTACTS];
        int numContacts_;
};

#endif