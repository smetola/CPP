#include "Contact.hpp"

Contact::Contact() : f_name(""), l_name(""), n_name(""), phone(""), secret(""){
}

Contact::Contact(std::string fst_param,
				std::string snd_param,
				std::string trd_param,
				std::string fth_param,
				std::string ffth_param) :
	f_name(fst_param),
	l_name(snd_param),
	n_name(trd_param),
	phone(fth_param),
	secret(ffth_param) {
}

std::string	Contact::get_f_name() {
	return	f_name;
}

std::string	Contact::get_l_name() {
	return	l_name;
}

std::string	Contact::get_n_name() {
	return	n_name;
}

std::string	Contact::get_phone() {
	return	phone;
}

std::string	Contact::get_secret() {
	return	secret;
}
