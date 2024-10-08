#ifndef CARD_H
#define CARD_H
#include <iostream>
#include<SFML/Graphics.hpp>
#include<SFML/Window.hpp>
#include<SFML/System.hpp>
#include <SFML/Audio.hpp>
#include<Vector>
#include<cstdlib>
#include<ctime>
#include<cmath>
class card
{
public:
	sf::Sprite shape;
	std::string name;
	int c;
	sf::Vector2f pos;
	card(sf::Sprite shape, std::string name, int c,sf::Vector2f pos) {
		this->c = c;
		this-> name = name;
		this->shape = shape;
		this->pos = pos;
	}
	sf::Sprite getshape() {return shape;}
	std::string getname() {return name;}
	int getv() { return c; }
	sf::Vector2f getpos() { return pos; }
	void setpos() {
		this->shape.setPosition(this->pos);
	}
};
#endif
