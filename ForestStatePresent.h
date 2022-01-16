//
// Created by Martin Studňař on 16.01.2022.
//

#ifndef OPCV10_FORESTSTATEPRESENT_H
#define OPCV10_FORESTSTATEPRESENT_H


#include <string>
#include <vector>
#include "Npc.h"
#include "Item.h"
#include "ForestState.h"

class ForestStatePresent: public ForestState {
public:
    std::string getDescription() override;
    std::vector<Item*> getItems() override;
    std::vector<Npc*> getNpcs() override;
    std::vector<std::string> getPossibilities() override;
};


#endif //OPCV10_FORESTSTATEPRESENT_H
