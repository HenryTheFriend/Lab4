//
// Created by danie on 2019-10-11.
//

#ifndef LAB4_BIRD_HPP
#define LAB4_BIRD_HPP

#include <iostream>
#include <tuple>
#include "Animal.hpp"

using namespace std;

class Bird : public Animal {

public:
    friend ostream &operator<<(ostream &out, const Bird &a);

    Bird(Bird &p2);

    Bird(int age, double x, double y, double z);

    Bird();

    void location();

    void move(double x, double y, double z)override;

    ~Bird()override;

    void eat() override;

    void sleep() override;

};


#endif //LAB4_BIRD_HPP
