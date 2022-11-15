#ifndef M00_EX01_CONTACT_H_
# define M00_EX01_CONTACT_H_

# include <string>

class Contact {

private:
    std::string	first_name_;
    std::string	last_name_;
    std::string	nickname_;
    std::string	phone_number_;
    std::string	darkest_secret_;

public:
    Contact();
    ~Contact();

    void        updateContact();
    std::string getFirstName();
    std::string getLastName();
    std::string getNickname();
    void        display();
};

#endif