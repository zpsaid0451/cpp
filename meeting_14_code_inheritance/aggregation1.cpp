#include <iostream>
#include <string>
#include <vector>
 
class Teacher {
public:
	Teacher(std::string name)
		: m_name(name){}
	std::string GetName() { return m_name; }
private:
	std::string m_name;
};
 
class Department {
public:
	Department() {}
 
	void Add(Teacher *teacher) {
		m_teacher.push_back(teacher);
	}
 
	friend std::ostream& operator <<(std::ostream &out, const Department &dept)
	{
		out << "Department: ";
		for (const auto &element : dept.m_teacher)
			out << element->GetName() << ' ';
		out << '\n';
 
		return out;
	}
private:
	std::vector<Teacher*> m_teacher;
};
 
 
int main()
{
	// Create a teacher outside the scope of the Department
	Teacher *t1 = new Teacher("Bob"); // create a teacher
	Teacher *t2 = new Teacher("Frank");
	Teacher *t3 = new Teacher("Beth");
 
	{
		// Create a department and add some Teachers to it
		Department dept; // create an empty Department
		dept.Add(t1);
		dept.Add(t2);
		dept.Add(t3);
 
		std::cout << dept;
 
	} // dept goes out of scope here and is destroyed
 
	std::cout << t1->GetName() << " still exists!\n";
	std::cout << t2->GetName() << " still exists!\n";
	std::cout << t3->GetName() << " still exists!\n";
 
	delete t1;
	delete t2;
	delete t3;
 
	return 0;
}