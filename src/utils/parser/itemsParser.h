#pragma once
#ifndef PARSER 
#define PARSER

#include "../../core/config/CoreConfig.h"
#include "../../core/entities/Item/Item.h"

class JsonItemParser {
public:
    std::vector<Item> parse(const std::string& filePath);
};


#endif // !PARSER
