//
// Created by Martin Studňař on 16.01.2022.
//

#ifndef OPCV10_ITEM_H
#define OPCV10_ITEM_H


#include <string>

class Item {
std::string m_description;
std::string m_name;
public:
    Item(std::string description, std::string name);
    void printDescription();
};


#endif //OPCV10_ITEM_H
