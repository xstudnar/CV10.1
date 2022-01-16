//
// Created by Martin Studňař on 16.01.2022.
//

#include "ForestStatePresent.h"

std::string ForestStatePresent::getDescription() {
    return "Stojíš v lese v přítomnosti";
}

std::vector<Item *> ForestStatePresent::getItems() {
    return std::vector<Item *>{
        new Item("Je ztrouchnivělá", "Větev"),
        new Item("Rozbita pracka", "Pračka"),
        new Item("Ta to má asi za sebou", "Kočka")
    };
}

std::vector<Npc *> ForestStatePresent::getNpcs() {
    return std::vector<Npc *>{
        new Npc("Dobrý den", "Lesník"),
        new Npc("Zastřelil jsem kočku tvl", "Myslivec")
    };
}

std::vector<std::string> ForestStatePresent::getPossibilities() {
    return std::vector<std::string>{
        "Prozkoumej les",
        "Seber větev",
        "Kopni lesníka",
        "Sežer kočku"
    };
}
