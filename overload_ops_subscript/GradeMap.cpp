#include <iostream>
#include <string>
#include <vector>
#include "GradeMap.h"

char& GradeMap::operator[](const std::string &name) {
	std::vector<StudentGrade>::iterator it;
	for (it = m_map.begin(); it != m_map.end(); it++) {
    if (it -> name == name) break;
	}
	if (it != m_map.end()) return it -> grade;
	StudentGrade temp;
	temp.name = name;
	m_map.push_back(temp);
	return m_map.back().grade;
}
