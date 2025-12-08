#include <SFML/Graphics.hpp>
#include <iostream>
#include "GameView.h"
#include "GameScene.h"

int main()
{
    try {
        GameView* gameView = NewGameView(sf::Vector2i(800, 600));
        GameScene* gameScene = NewGameScene();

        EnterGameLoop(*gameView, &UpdateGameScene, &DrawGameScene, gameScene);
    }
    catch (const std::exception& ex) {
        std::cerr << ex.what() << std::endl;
        return 1;
    }

    return 0;
}