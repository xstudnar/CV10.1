//
// Created by Martin Studňař on 16.01.2022.
//

#ifndef OPCV10_FORESTSTATE_H
#define OPCV10_FORESTSTATE_H


#include <string>
#include "Item.h"
#include "Npc.h"

class ForestState {
public:
    virtual std::string getDescription()=0;
    virtual std::vector<Item*> getItems()=0;
    virtual std::vector<Npc*> getNpcs()=0;
    virtual std::vector<std::string> getPossibilities()=0;
};


#endif //OPCV10_FORESTSTATE_H
