// main.cpp
#include <iostream>
#include <fstream>
#include "utils/parser/itemsParser.h"

int main() {
	JsonItemParser parser;
	std::vector<Item> items = parser.parse("data/items.json");
	for (auto& item : items) {
		std::cout << "Item: " << item.name << std::endl;
		std::cout << "Type: " << item.type << std::endl;
		std::cout << "Damage: " << item.damage << std::endl;
		std::cout << "Effect: " << item.effect << std::endl;
		std::cout << "Defense: " << item.defense << std::endl;
		std::cout << std::endl;
	}
    return 0;
}
