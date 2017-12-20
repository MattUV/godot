/* destructible.cpp */

#include "destructible.h"

void Destructible::add(int value) {

    count+=value;
}

void Destructible::reset() {

    count=0;
}

int Destructible::get_total() const {

    return count;
}

void Destructible::_bind_methods() {

    ClassDB::bind_method(D_METHOD("add", "value"), &Destructible::add);
    ClassDB::bind_method(D_METHOD("reset"), &Destructible::reset);
    ClassDB::bind_method(D_METHOD("get_total"), &Destructible::get_total);
}

Destructible::Destructible() {
    count=0;
}