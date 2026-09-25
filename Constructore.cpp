#include <iostream>
#include <string>

class Person{
    private:
        std::string first;
        std::string last;

    public:

        //Constructore --> Its purpose is to instantiate objects from your class, and allow us to pass data straight on our objects.
        //                 to instantiate means to create a specific, usable object from a general template or class
        //Your constructore need o have the same identifier as your class

        /*Person(std::string firstN, std::string lastN){
            this->first = firstN;
            this->last = lastN;
        } */
        // Another syntax for a constructore
            Person(std::string firstN, std::string lastN): first(firstN), last(lastN) {}



        void setFirstName(std::string first){
            this-> first = first;
        }
        void setLastName(std::string last){
            this-> last = last;
        }

        void FirstLast(){
            std::cout << first << " " << last ;
        };

};


int main(){

    Person p("Sandile", "Mashabaa");
    p.FirstLast();
    std::cout << '\n';

    Person p2("Allie", "Mpofu");
    p2.FirstLast();



    return 0;
}
