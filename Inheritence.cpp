#include <iostream>
#include <string>

class Person{
    private:
        std::string first;
        std::string last;

    public:
        Person(std::string firstN, std::string lastN): first(firstN), last(lastN) {}
        Person() = default;

        /*void setFirstName(std::string first){
            this-> first = first;
        }
        void setLastName(std::string last){
            this-> last = last;
        } */

        void FirstLast(){
            std::cout << first << " " << last ;
        };

};

//Inheritance is when you create a new class and take most information from another class;

class Employee : public Person{
    //You can add new staff here on the new class extending its functionality

    std::string department;

    public:
        Employee(std::string firstN, std::string lastN, std::string departmentD): Person(firstN, lastN), department(departmentD) {}
        std::string getDepartment(){
            return department;
        }
        void setDepartment(std::string department){
            this-> department = department;
        }

};

int main(){

    Employee e("Sandile", "Mashaba", " Computer Science ");
    e.FirstLast();
    std::cout << e.getDepartment();
    return 0;
}
