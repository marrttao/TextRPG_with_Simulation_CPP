
#pragma once
#ifndef ITEM_H
#define ITEM_H

#include "../../config/CoreConfig.h"

class Item
{
public:
    int id;
    std::string name;
    std::string type;
    int damage = 0;
    std::string effect;
	int defense = 0;
};

#endif // !ITEM_H
