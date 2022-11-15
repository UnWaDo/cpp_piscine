#ifndef PHONE_BOOK_H
# define PHONE_BOOK_H

# include "Contact.hpp"

# define MAX_CONTACTS	8

class PhoneBook {

private:
    Contact contacts_[MAX_CONTACTS];
    int     first_added_;
    int     contacts_number_;

public:
    PhoneBook();
    ~PhoneBook();

    void    addContact();
    void    displayContacts();
    void    getContact(int i);
    int     getContactsNumber();

};

#endif