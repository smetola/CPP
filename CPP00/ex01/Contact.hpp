#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>

class Contact {
private:
    std::string f_name;
    std::string l_name;
    std::string n_name;
    std::string phone;
    std::string secret;
    
public:
    Contact();
    Contact(std::string fst_param,
        std::string snd_param,
        std::string trd_param,
        std::string fth_param,
        std::string ffth_param);
	std::string	get_f_name();
    std::string	get_l_name();
    std::string	get_n_name();
    std::string	get_phone();
    std::string	get_secret();
};

#endif