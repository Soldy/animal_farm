#include "animal.hpp"
#include <iostream>
#include <array>
#include <chrono>
#include <thread>

void sleep(int ms){
    std::this_thread::sleep_for(
        std::chrono::milliseconds(ms)
    );
}

void animalManager(){
    using namespace std;
    int round = 0;
    array<Animal,6> animals;
    animals[0].init(10,20,3,5);
    animals[1].init(40,50,50,10);
    animals[2].init(40,50,8,43);
    animals[3].init(40,50,9,34);
    animals[4].init(40,50,43,33);
    animals[5].init(40,50,12,34);
    while (true){
        for (int i = 0; i < 6; i++ ) {
            cout << i << ' ' << animals[i].getX() << ' ' << animals[i].getY() << endl;
            animals[i].move();
        }
        cout << round << '\n';
        sleep(40);
        round++;
    }

}
