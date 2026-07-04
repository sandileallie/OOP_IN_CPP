#include <iostream>
#include <string>

/*  Syntax of a class  //A class - describe the structure

    class <ClassName>{
            //Body of the class

        //Data Member are variables defined within rhe class.
        //Methods - Functions defined within the class.

        Block of code1; //This could be our data members
        Block of code2;
        .
        .
        .
        Block of codeN;
    }
*/



class Person{
    public:
        std::string first;
        std::string last;

        void FirstLast();

};

int main(){
              //Object - a Specific example of that structure (instance)
    Person p; //Object of the class(Creating the object is called instantiating)

    p.first = "Sandile"; // To access the class we use p.<identifier>
    p.last = "Mashaba";

    Person p2;

    p2.first = "Allie";
    p2.last = "Mpofu";

    std::cout << p.first << " " << p.last ;
    std::cout << '\n';
    std::cout << p2.first << " " << p2.last;

    return 0;
}
