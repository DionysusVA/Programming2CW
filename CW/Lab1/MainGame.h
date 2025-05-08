#pragma once
#include <SDL\SDL.h>
#include <GL/glew.h>
#include "Display.h" 
#include "Shader.h"
#include "Mesh.h"
#include "Texture.h"
#include "transform.h"

enum class GameState { PLAY, EXIT };

class MainGame
{
public:
	MainGame();
	~MainGame();

	void run();

private:

	void initSystems();
	void processInput();
	void gameLoop();
	void drawGame();
	void linkBumpMapping();
	void linkFogShader();
	void linkToon();
	void linkRimShader();
	void linkWhat();
	bool collision(glm::vec3 m1Pos, float m1Rad, glm::vec3 m2Pos, float m2Rad);
	//void playAudio(unsigned int Source, glm::vec3 pos);

	Display _gameDisplay;
	GameState _gameState;
	Mesh mesh1;
	Mesh mesh2;
	Mesh mesh3;
	Mesh mesh4;
	Mesh mesh5;
	Camera myCamera;
	Shader rimShader;
	Shader bump;
	Shader noBump;


	Texture texture1;
	Texture texture2;
	Texture texture3;
	Texture bumpMapping;

	//user inputs
	bool Apressed;
	bool Spressed;
	bool Dpressed; 
	bool Wpressed;
	bool leftView;
	bool rightView;



	//Audio audioDevice;

	float counter;
	unsigned int whistle;
	unsigned int backGroundMusic;
};

