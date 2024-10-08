#include <stdio.h>
#include<stdlib.h>

struct PlaceOfWorship {
virtual void makeSound()
 {
        printf("\nGeneral Place of Worship Sound Playing\n\n");
    }
};

struct Mandir :public PlaceOfWorship{
    // struct PlaceOfWorship base;

    void makeSound() {
        printf("\nMandir Sound Playing\n\n");
    }
};

struct Masjid :public PlaceOfWorship{
    // struct PlaceOfWorship base;

    void makeSound() {
        printf("\nMasjid Sound Playing\n\n");
    }
};

// struct GhostRajavada :public PlaceOfWorship{
//     // struct PlaceOfWorship base;

//     void makeSound() {
//         printf("\nGhost Rajavada Song Playing\n\n");
//     }
// };

struct Church :public PlaceOfWorship{
    // struct PlaceOfWorship base;

    void makeSound() {
        printf("\nChurch Sound Playing\n\n");
    }
};

struct Gurudwara :public PlaceOfWorship{
    // struct PlaceOfWorship base;

    void makeSound() {
        printf("\nGurudwara Song Playing\n\n");
    }
};

struct ChineseTemple:public PlaceOfWorship {
 

    void makeSound() {
        printf("\nChinese Temple Sound Playing\n\n");
    }
};

int main() {
     PlaceOfWorship* placesOfWorship[6];
    // Mandir M1;
    // GhostRajavada GR1;
    // Masjid MS1;
    // Church C1;
    // Gurudwara G;
    // ChineseTemple CT1;

    placesOfWorship[0] = new Mandir();
    placesOfWorship[1] = new Masjid();
 //   placesOfWorship[2] = new GhostRajavada();
    placesOfWorship[2] = new Church();
    placesOfWorship[3] = new Gurudwara();
    placesOfWorship[4] = new ChineseTemple();

    placesOfWorship[0]->makeSound();
    placesOfWorship[1]->makeSound();
    placesOfWorship[2]->makeSound();
    placesOfWorship[3]->makeSound();
    placesOfWorship[4]->makeSound();
    // placesOfWorship[5]->makeSound();

    
    return 0;
}
