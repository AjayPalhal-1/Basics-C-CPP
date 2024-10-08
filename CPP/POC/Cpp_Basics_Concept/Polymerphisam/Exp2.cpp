#include <stdio.h>
// #include <Windows.h>  // For PlaySound and multimedia functions

struct Animal
{

    // virtual void makeSound() = 0;  // Pure virtual function
  virtual   void makeSound() 
    {
      printf("\nGeneral Sound Playing ...");

    }

};

struct Cat : public Animal
{

    Cat() {}

    void makeSound() 
    {
      printf("\nCat Meowing...");

    }
};

struct Dog : public Animal
{

    Dog() {}

    void makeSound() 
    {
        printf("\nDog Barking...");

    }
};

struct Cow : public Animal
{

    Cow() {}

    void makeSound() 
    {
                    printf("\nCow Mooooo...");

    }
};

struct Lion : public Animal
{

    Lion() {}

    void makeSound() 
    {           
     printf("\nLion Roaring...");
    }

    };

int main()
{
    // Array of Animal pointers
    Animal *animals[4];

    animals[0] = new Cat();
    animals[1] = new Dog();
    animals[2] = new Cow();
    animals[3] = new Lion();

    /// Play sounds of each animal
    for (int i = 0; i < 4; i++)
    {
        animals[i]->makeSound();
        // Sleep(5000); // Sleep for 5 seconds to let each sound play
    }

    // // Clean up
    // for (int i = 0; i < 4; i++)
    // {
    //     delete animals[i];
    // }

    return 0;
}