#include "Contact.hpp"
#include <iostream>
#include <string>

Contact::Contact() {
    return ;
}

Contact::~Contact() {
    return ;
}

void	Contact::updateContact() {
    std::cout << "Enter first name: ";
    std::cin >> first_name_;
    std::cout << "Enter last name: ";
    std::cin >> last_name_;
    std::cout << "Enter nickname: ";
    std::cin >> nickname_;
    std::cout << "Enter phone number: ";
    std::cin >> phone_number_;
    std::cout << "Enter darkest secret: ";
	std::getline(std::cin >> std::ws, darkest_secret_);
}

void	Contact::display() {
    std::cout << "First name: " << first_name_ << std::endl;
    std::cout << "Last name: " << last_name_ << std::endl;
    std::cout << "Nickname: " << nickname_ << std::endl;
    std::cout << "Phone number: " << phone_number_ << std::endl;
    std::cout << "Darkest secret: " << darkest_secret_ << std::endl;
}

std::string	Contact::getFirstName() {
    return (first_name_);
}

std::string	Contact::getLastName() {
    return (last_name_);
}

std::string	Contact::getNickname() {
    return (nickname_);
}
