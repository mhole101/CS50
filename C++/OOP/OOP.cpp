//
// Example taken from "Object Oriented Programming (OOP) in C++ Course"
// https://www.youtube.com/watch?v=wN0x9eZLix4
//
#include <iostream>
using std::string;

//abstraction
//any class that inherits this abstract
//class with pure virtual function must
//provide implementation for
//AskForPromotion() method
class AbstractEmployee {
    virtual void AskForPromotion()=0;
};
// Employee:AbstractEmployee
// Employee is inheriting AbstractEmployee
class Employee:AbstractEmployee {
    private:

    string Company;
    int Age;
    // protected allows access in
    protected: //inherited classes
    string Name;

    public:

    // setter/getter = encapsulation
    // Name setter
    void setName(string name) {
        Name = name;
    }
    // Name getter
    string getName(){
        return Name;
    }
    // Company setter
    void setCompany(string company){
        Company = company;
    }
    // Company getter
    string getCompany(){
        return Company;
    }
    // Age setter
    void setAge(int age){
        if(age>18)
        Age = age;
    }
    // Age getter
    int getAge(){
        return Age;
    }
    void IntroduceYourself(){
        std::cout << "Name - " << Name << std::endl;
        std::cout << "Company - " << Company << std::endl;
        std::cout << "Age - " << Age << std::endl;

    }
    //constructor
    Employee(string name, string company, int age){
        Name = name;
        Company = company;
        Age = age;
    }
    void AskForPromotion() {
        if (Age > 30)
            std::cout << Name << " got promoted!" << std::endl;
        else
            std::cout << Name << " sorry NO promotion for you!" << std::endl;
    }

    virtual void Work(){
        std::cout<<Name<<" is checking email, task backlog, performing tasks..."<<std::endl;
    }

};
//Inheritance
//Developer is child/sub/derived class
//Employee is parent/base/super class
//Employee is private
//public Employee is public
//public allows access to parent class
//methods
class Developer:public Employee {
    public:
    string FavProgrammingLanguage;
    Developer(string name, string company, int age, string favProgrammingLanguage)
    :Employee(name, company, age)
    {
        FavProgrammingLanguage = favProgrammingLanguage;
    }
    void FixBug(){
        std::cout<<Name<<" fixed bug using " << FavProgrammingLanguage << std::endl;
    }
    //polymorphism from employee
    void Work(){
        std::cout<<Name<<" is writing "<< FavProgrammingLanguage << " code." << std::endl;
    }

};

class Teacher:public Employee {
    public:
    string Subject;
    void PrepareLesson() {
        std::cout<< getName() << " is preparing " << Subject << " lesson" << std::endl;
    }
    Teacher(string name, string company, int age, string subject)
        :Employee(name, company, age)
    {
        Subject = subject;
    }
    //polymorphism
     void Work(){
        std::cout<<Name<<" is teaching "<< Subject << std::endl;
    }
};


int main()
{   //create Employee object employee1
    Employee employee1 = Employee("Matt", "Grupo", 33);
    employee1.IntroduceYourself();

    //create Employee object employee2
    Employee employee2 = Employee("Chuck", "Stelantis", 48);
    employee2.IntroduceYourself();

    //testing setAge method/function
    employee1.setAge(24);
    std::cout << employee1.getName() << " is " << employee1.getAge() << " years old." << std::endl;

    employee1.AskForPromotion();
    employee2.AskForPromotion();

    //Inherited class object
    Developer d = Developer("Matt", "Google", 23, "C++");
    d.FixBug();
    d.AskForPromotion();

    Teacher t = Teacher("Kelly", "MIT", 45, "CSS");
    t.PrepareLesson();

    d.Work();
    t.Work();

    // The most common use of polymorphism is when a parent class
    // reference is used to used to refer to a child class object
    // A pointer of base class "e" can hold reference of derived
    // class object "&d"
    // MUST make work a virtual method in parent class
    // When virtual is invoked it says hey can you please check
    // if there is implimentation of this function in my derived
    // classes and if yes, execute that instead, if not,
    // use parent class function
    // It will use the most derived function
    Employee* e1 =&d;
    Employee* e2 =&t;

    e1->Work();
    e2->Work();



};