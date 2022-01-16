//
// Created by Martin Studňař on 16.01.2022.
//

#include <iostream>
#include "Item.h"

Item::Item(std::string description, std::string name) {
    m_description=description;
    m_name=name;
}

void Item::printDescription() {
    std::cout<< "Item " << m_name << ": " << m_description << std::endl;
}
