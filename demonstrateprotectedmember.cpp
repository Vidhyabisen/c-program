#include <iostream>
#include <string>
using namespace std;


class Animal {
   private:
    string color;

   protected:
    string type;

   public:
    void eat() {
        cout << "I can eat!" << endl;
    }

    void sleep() {
        cout << "I can sleep!" << endl;
    }

    void setColor(string clr) {
        color = clr;
    }

    string getColor() {
        return color;
    }
};


class Cat : public Animal {

   public:
    void setType(string t) {
        type = t;
    }

    void displayInfo(string c) {
        cout << "I am a " << type << endl;
        cout << "My color is " << c << endl;
    }

    void meow() {
        cout << "I can meow! meoww meoww!!" << endl;
    }
};

int main() {

    Cat cat1;

    
    cat1.eat();
    cat1.sleep();
    cat1.setColor("white");

    
    cat1.meow();
    cat1.setType("mammal");

    
    cat1.displayInfo(cat1.getColor());

    return 0;
}