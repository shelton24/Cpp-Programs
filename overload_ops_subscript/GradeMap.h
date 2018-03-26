#ifndef GradeMap_H
#define GradeMap_H
#include <vector>
struct StudentGrade_ {
	std::string name;
	char grade;
};
typedef struct StudentGrade_ StudentGrade;

class GradeMap {
	std::vector<StudentGrade> m_map;
public:
	GradeMap() {
	}
	char & operator[](const std::string &name);
};
#endif
