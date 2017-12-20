/* register_types.cpp */

#include "register_types.h"
#include "class_db.h"
#include "destructible.h"

void register_destructible_types() {

        ClassDB::register_class<Destructible>();
}

void unregister_destructible_types() {
   //nothing to do here
}