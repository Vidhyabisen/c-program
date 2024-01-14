#include <iostream>
using namespace std;


class Animal {
   public:
    void eat() {
        cout << "I can eat!" << endl;
    }

    void sleep() {
        cout << "I can sleep!" << endl;
    }
};


class Cat : public Animal {
   public:
    void meow() {
        cout << "I can meow! Meoww meoww!!" << endl;
    }
};

int main() {
    
    Cat cat1;

    
    cat1.eat();
    cat1.sleep();

    
    cat1.meow();

    return 0;
}