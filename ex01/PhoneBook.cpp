#include "PhoneBook.hpp"
#include <iostream>
#include <iomanip>

PhoneBook::PhoneBook() {
    first_added_ = 0;
    contacts_number_ = 0;
}

PhoneBook::~PhoneBook() {
    return ;
}

void    PhoneBook::addContact() {
    int add_id = (first_added_ + contacts_number_) % MAX_CONTACTS;
    if (contacts_number_ == MAX_CONTACTS)
    {
        contacts_[add_id].updateContact();
        first_added_++;
        return ;
    }
    contacts_[add_id].updateContact();
    contacts_number_++;
}

void    printContactData(std::string data) {
    if (data.length() > 10)
        data = data.substr(0, 9) + ".";
    std::cout << std::setw(10) << data << "|";
}

void    PhoneBook::displayContacts() {
    std::cout << "|" << std::setw(10) << "index" << "|"
        << std::setw(10) << "first name" << "|" << std::setw(10) << "last name" << "|"
        << std::setw(10) << "nickname" << "|" << std::endl;
    for (int i = 0; i < contacts_number_; i++)
    {
        Contact &c = contacts_[(first_added_ + i) % MAX_CONTACTS];
        std::cout << "|" << std::setw(10) << i << "|";
        printContactData(c.getFirstName());
        printContactData(c.getLastName());
        printContactData(c.getNickname());
        std::cout << std::endl;
    }
}

void    PhoneBook::getContact(int id) {
    int get_id = (first_added_ + id) % MAX_CONTACTS;
    if (get_id >= contacts_number_ || get_id < 0)
    {
        std::cout << "Invalid index given" << std::endl;
        return ;
    }
    contacts_[get_id].display();
}

int     PhoneBook::getContactsNumber() {
    return contacts_number_;
}
