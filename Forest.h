//
// Created by Martin Studňař on 16.01.2022.
//

#ifndef OPCV10_FOREST_H
#define OPCV10_FOREST_H


#include <string>
#include <vector>
#include "EnumTime.h"
#include "ForestState.h"
#include "Item.h"
#include "Npc.h"

class Forest {
    EnumTime m_time;
    ForestState* m_forestState;
    std::string m_description;
    std::vector<std::string> m_possibilities;
    std::vector<Item*> m_items;
    std::vector<Npc*> m_npcs;
public:
    Forest();
    void setTime(EnumTime time);
    void printDescription();
    void printPossibilities();
    void printItems();
    void printNpcs();
    void setDescription(std::string description);
    void setPossibilities(std::vector<std::string> possibilities);
    void setItems(std::vector<Item*> items);
    void setNpcs(std::vector<Npc*> npcs);
    void makeChanges();
};


#endif //OPCV10_FOREST_H
