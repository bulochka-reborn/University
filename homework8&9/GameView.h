#pragma once
#include <SFML/Graphics.hpp>


struct GameView {
	sf::RenderWindow window;
	sf::View camera;
	sf::Vector2i windowSize;
	sf::Clock clock;
};

typedef void OnUpdate(void*, GameView&, float);
typedef void OnDraw(void*, GameView&);

void SetCameraCenter(GameView& view, const sf::Vector2f& center);
void DestroyGameView(GameView*& pView);
void EnterGameLoop(GameView& view, OnUpdate onUpdate, OnDraw onDraw, void* pData);
GameView* NewGameView(const sf::Vector2i& windowSize);