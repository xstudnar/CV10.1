//
// Created by Martin Studňař on 16.01.2022.
//

#include <iostream>
#include "Forest.h"
#include "ForestStatePresent.h"
#include "ForestStatePast.h"
#include "ForestStateFuture.h"

Forest::Forest() {
    m_time= EnumTime::Present;
    m_description= "No description";
    m_forestState= nullptr;
    m_items={};
    m_npcs={};
    m_possibilities={};
    setTime(m_time);
}

void Forest::setTime(EnumTime time) {
    m_time=time;

    if (m_forestState != nullptr){
        delete m_forestState;
    }

    switch (m_time) {
        case EnumTime::Present:
            m_forestState = new ForestStatePresent();
            makeChanges();
            break;
        case EnumTime::Past:
            m_forestState = new ForestStatePast();
            makeChanges();
            break;
        case EnumTime::Future:
            m_forestState = new ForestStateFuture();
            makeChanges();
            break;
        default:
            m_forestState = new ForestStatePresent();
            makeChanges();
            break;
    }
}

void Forest::printDescription() {
    std::cout << "Les: " << m_description << std::endl;
}

void Forest::printPossibilities() {
    std::cout<< "Possibilities: " << std::endl;
    for(int i; i < m_possibilities.size(); i++){
        std::cout<< "[" << i << "] - " << m_possibilities.at(i) << std::endl;
    }
}

void Forest::printItems() {
    std::cout<< "Items: " << std::endl;
    for(int i; i<m_items.size(); i++){
        std::cout<<"[" << i << "] - "; m_items.at(i)->printDescription();
    }
}

void Forest::printNpcs() {
    std::cout<< "Npcs: " << std::endl;
    for (int i; i< m_npcs.size(); i++){
        std::cout<< "[" << i << "] - "; m_npcs.at(i)->printGreeting();
    }
}

void Forest::setDescription(std::string description) {
    m_description=description;
}

void Forest::setPossibilities(std::vector<std::string> possibilities) {
    m_possibilities=possibilities;
}

void Forest::setItems(std::vector<Item *> items) {
    m_items=items;
}

void Forest::setNpcs(std::vector<Npc *> npcs) {
    m_npcs=npcs;
}

void Forest::makeChanges() {
    setDescription(m_forestState->getDescription());
    setItems(m_forestState->getItems());
    setNpcs(m_forestState->getNpcs());
    setPossibilities(m_forestState->getPossibilities());
}
