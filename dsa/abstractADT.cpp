#include <iostream>

using namespace std;

class Animal
{
    protected: string m_name;

    public:
        // Constructor
        Animal(string name) : m_name(name)
        {
            cout << "Animal created: " << m_name << endl;
        }
        // virtual method
        // has to be implemented in the Dog class
        virtual string MakeSound() 
        {
            return "Unknown sound!";
        };

        string GetName()
        {
            return m_name;
        }
};

class Dog : public Animal
{
    public:
        Dog(string name) : Animal(name) {
            cout << "Dog created: " << name << endl;
        }
        // copy assignment operator overloading
        void operator = (const Dog &D)
        {
            m_name = D.m_name;
            cout << "Copy assignment operator called for " << m_name << endl;
        };
        
        string MakeSound() override 
        {
            return "Woof!";
        }
};

int main() {
    Dog dog = Dog("Taker");
    cout << "The dog's name is: " << dog.GetName() << endl;
    cout << ", and it makes a sound: " << dog.MakeSound() << endl;
    return 0;
 
}