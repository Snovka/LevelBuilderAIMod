#include <Geode/Geode.hpp>
#include "ai_builder.hpp"

using namespace geode::prelude;

class $modify(LevelBuilderAI, EditorLayer) {
    bool init(GJGameLevel* level) {
        if (!EditorLayer::init(level)) return false;

        // Демка: виводимо текст у консоль
        log::info("AI Level Builder initialized for level: {}", level->m_levelName);

        // Виклик AI генератора
        AIBuilder builder;
        builder.generateLevel("Difficulty - Hard; Description - Space galaxy background with gray; Song - Nuke Powder");

        return true;
    }
};
