#include <string>

#define CURRENT_YEAR 2016

using std::string;

class Person {

	private:
		string second_name;
		string first_name;
		string patronymic;
		string address;
		char sex;
		string education;
		int year_of_birth;

	public:
		void set_second_name(const string& s_name);
		void set_first_name(const string& f_name);
		void set_patronymic(const string& patron);
		void set_address(const string& town);
		void set_sex(const char& m_or_f);
		void set_education(const string& edu);
		void set_birth_year(const int& birth_year);

		string get_second_name() const;
		string get_first_name() const;
		string get_patronymic() const;
		string get_address() const;
		char get_sex() const;
		string get_education() const;
		int get_birth_year() const;

		void show() const;

		/*Person(string& s_name = "", string& f_name = "", string& patron = "", string& town = "", char& m_or_f = static_cast<char>(0), string& edu = "", int& birth_year =  0) : second_name(s_name), first_name(f_name), patronymic(patron), address(town), sex(m_or_f), education(edu), year_of_birth(birth_year)
	{

	}*/


		Person& operator=(const Person& aPerson);
};
