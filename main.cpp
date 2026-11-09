

#include <iostream>
class Student{
    protected:
    int age;
public:
    std::string name;
    Student(std::string a, int m)
    { name= a; age=m;
        std::cout<< "The object is born!" << std::endl;}
    //Destructor
~Student (){
    std::cout<< "The object is dead!" << std::endl;
}
    
};

class Array:public Student{
private:
    int*ptr;
public:
    //Constructor:
    Array(int a, int b, int c, int d, int e):Student("unknown", 0){
        ptr=new int [5];
        std::cout << "Memory located"
        << std::endl;
        ptr[0] = a;
        ptr[1] = b;
        ptr[2] = c;
        ptr[3] = d;
        ptr[4] = e;

    }
    ~Array(){
        delete [] ptr;
        std::cout << "Memory released!"
        << std::endl;
    }
    void showarray()
    {
        std::cout << "Name:"
        << name << std::endl;
        std::cout << "Age:"
        << age << std::endl;
        std::cout << "Student number:";
        for (int i= 0; i < 5; i++)
        { std::cout<< ptr[i];}
        std::cout<<std::endl;
    }
};
int main() {
    std::cout<< "main started" << std::endl;
    Student s1 ("Zahra", 43);
    {
        Student s1 ("Ali", 51);
    }
    std::cout<< "main ended" << std::endl;
    std::cout<< ".................." << std::endl;
    {Array a1 (3, 5, 6, 7, 8);
        a1.showarray();
    }
    Array a2 (13, 15, 16, 17, 18);
    a2.showarray();
    return 0;
}
// Comments: 1) There is only one destructor!
// 2) It can not be a void function or return smt.
//3) It can not accept argumants, parameters....
