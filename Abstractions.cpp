#include <iostream>
#include <string>

// abtraction --> Concept where you make something easy by hiding the complicated stuff
//              encapsukation --> granting access to private data only through controlled public interface
//              Inheritance --> we can create or derive classes that inherit properties from their parent classes
//              polymorphism --> we can treat multible different objects as their base object type

class Person{
    //Anything written outside of public is private, To be same write private
    private:
        std::string first;
        std::string last;

    public:
    /*
    public: //To access private data we need to create a Setter/Mutator.
        void setFirstName(std::string firstName){
            first = firstName; // What it does it assign first name to first, but there is a simple was,but you have
                                // to have the parameter as the same name as the data member
        }
    */

        //This is the simple way to create our Mutator

        void setFirstName(std::string first){
            this-> first = first;  // "this->" is a prefix
        }
        void setLastName(std::string last){
            this-> last = last;
        }

        void FirstLast(){
            std::cout << first << " " << last ;
        };

};


int main(){

    Person p;

    p.setFirstName("Sandile");
    p.setLastName("Mashaba");
    p.FirstLast();
    std::cout << '\n';

    Person p2;

    p2.setFirstName("Allie");
    p2.setLastName("Mpofu");
    p2.FirstLast();



    return 0;
}
