
#include "piece.h"


void piece::setname(std::string name)
{
	this->name = name;
}

void piece::setpt(int pt)
{
	this->pt = pt;
}

void piece::setmove(std::vector<sf::Vector2f>move)
{
	this->move = move;
}
void piece::setshape(sf::Sprite shape)
{
	this->shape = shape;
}
std::string piece::getname()
{
	return name;
}

int piece::getpt()
{
	return pt;
}

std::vector<sf::Vector2f> piece::getmove()
{
	return std::vector<sf::Vector2f>();
}

sf::Sprite piece::getshape()
{
	return sf::Sprite();
}