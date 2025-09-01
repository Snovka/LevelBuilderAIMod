#pragma once
#include <string>
#include <Geode/Geode.hpp>

using namespace geode::prelude;

class AIBuilder {
public:
    void generateLevel(const std::string& prompt) {
        // Тут буде інтеграція зі штучним інтелектом
        // Поки що просто виводимо prompt
        log::info("AI Prompt: {}", prompt);

        // TODO:
        // - Аналізувати difficulty
        // - Додавати блоки в редактор
        // - Додавати декорації
        // - Ставити музику
    }
};
