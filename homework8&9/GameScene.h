#pragma once
#include "TmxLevel.h"
#include "GameView.h"
#include <vector>

struct GameScene {
	TmxLevel level;
	TmxObject player;
	std::vector<TmxObject> enemies;
	std::vector<TmxObject> coins;
	std::vector<TmxObject> blocks;
	sf::Vector2f startPosition;
};

void DestroyGameScene(GameScene*& pScene);
void DrawGameScene(void* pData, GameView& view);
void UpdateGameScene(void* pData, GameView& view, float deltaSec);
GameScene* NewGameScene();

