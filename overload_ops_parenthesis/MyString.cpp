#include <iostream>
#include "MyString.h"


std::string MyString::operator()(int start_pos, int len) {
	return m_name.substr(start_pos, len);
}
