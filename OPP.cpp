#include <iostream>
using std::string;

class Employee{
    private:
    string Name;
    string Company;
    int Age;

    public:
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

    }
    Employee(string name, string company, int age){
        Name = name;
        Company = company;
        Age = age;
    }


}

void main(void)
{
    Employee employee1;
    Employee employee2;

}