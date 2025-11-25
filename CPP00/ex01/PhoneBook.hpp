#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"
#include <string>
#include <iomanip>
#include <iostream>

class PhoneBook {
private:
    Contact contacts[8];
    int     n_contacts;
    int     index;
    
public:
    PhoneBook();
    void add();
    void search();
};

#endif