#ifndef MyString_H
#define MyString_H
class MyString {
	std::string m_name;
public:
	MyString(const std::string &str = "") : m_name(str)
	{
	}

	std::string operator()(int start_pos, int len);
};
#endif
