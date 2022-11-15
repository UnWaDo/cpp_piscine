#include "Contact.hpp"
#include "PhoneBook.hpp"
#include <iostream>

int	main() {
    std::string line;

    PhoneBook pb = PhoneBook();
    do {
        std::cout << "Input command (ADD, SEARCH or EXIT): ";
        std::cin >> line;
        if (line == "ADD")
            pb.addContact();
        else if (line == "SEARCH") {
            pb.displayContacts();
            if (pb.getContactsNumber()) {
                std::cout << "input contact id: ";
                int id = 0;
                if (!(std::cin >> id)) {
                    std::cout << "non-numeric contact id, returning to the main menu" << std::endl;
                    std::cin.clear();
                    std::cin.ignore();
                }
                else
                    pb.getContact(id);
            }
            else
                std::cout << "No contacts added, so returning to the main menu" << std::endl;
        }
        else if (line != "EXIT")
            std::cout << "Invalid command" << std::endl;
    } while (line != "EXIT");
}