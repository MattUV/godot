/* destructible.h */
#ifndef DESTRUCTIBLE_H
#define DESTRUCTIBLE_H

#include "scene/2d/node_2d.h"

class Destructible : public Node2D {
    GDCLASS(Destructible,Node2D);

    int count;

protected:
    static void _bind_methods();

public:
    void add(int value);
    void reset();
    int get_total() const;

    Destructible();
};

#endif