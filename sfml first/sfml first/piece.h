#ifndef PIECE_H
#define PIECE_H
#include<iostream>
#include<string>
#include<vector>
#include<SFML/Graphics.hpp>
class shap {
public:
	sf::Texture tex;
	sf::Sprite shapee;
	
};

class piece
{
	private:
		std::string name;
		int pt;
		std::vector<sf::Vector2f>move;
		sf::Sprite shape;
public:
	void setname(std::string name);
	void setpt(int pt);
	void setmove(std::vector<sf::Vector2f> move);
	void setshape(sf::Sprite shape);
	std::string getname();
	int getpt();
	std::vector<sf::Vector2f>getmove();
	sf::Sprite getshape();
	
};

#endif