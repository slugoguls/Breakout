#pragma once

#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include <openglDebug.h>

enum GameState {
	GAME_ACTIVE,
	GAME_MENU,
	GAME_WIN
};

class Game {

	public:
		//GameStates
		GameState		State;
		bool			Keys[1024];
		unsigned int	Width, Height;

		//Constructor/Destructor
		Game(unsigned int width, unsigned int height);
		~Game();

		//Initializers
		void Init();

		//Game Loop
		void ProcessInput(float dt);
		void Update(float dt);
		void Render();

};
