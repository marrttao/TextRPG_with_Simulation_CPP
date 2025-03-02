#include "itemsParser.h"
#include "../../libs/nlohmann/json.hpp"
using json = nlohmann::json;

std::vector<Item> JsonItemParser::parse(const std::string& filePath) {
    std::vector<Item> items;
    std::ifstream file(filePath);
    if (!file.is_open()) {
        std::cerr << "Error opening file: " << filePath << std::endl;
        return items;
    }
    // parse json
    json j;
    file >> j; // Corrected line
    for (auto& item : j["items"]) {
        Item i;
        i.id = item["id"];
        i.name = item["name"];
        i.type = item["type"];
        i.damage = item["damage"];
        i.effect = item["effect"];
        i.defense = item["defense"];
        items.push_back(i);
    }
    return items; // Ensure all control paths return a value
}
