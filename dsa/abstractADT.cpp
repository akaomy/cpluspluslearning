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

class Cat : public Animal
{
    public:
        Cat(string name) : Animal(name) {}

        // copy asignment operator overloading
        void operator = (const Cat &D)    
        {
            m_name = D.m_name;
            cout << "Copy assignment operator called for " << m_name << endl;
        }

        // implement interface for cat
        string MakeSound() override
        {
            return "Meow!";
        }

};

template<typename T>
void GetNameAndMakeSound(T& animal)
{
    cout << "The animal's name is: " << animal.GetName() << endl;
    cout << ", and it makes a sound: " << animal.MakeSound() << endl;
}

int main() {
    Dog myDoggo = Dog("Taker");
    GetNameAndMakeSound(myDoggo);

    Cat NadyasCat = Cat("Mr.Wiskers");
    GetNameAndMakeSound(NadyasCat);

    return 0;
}