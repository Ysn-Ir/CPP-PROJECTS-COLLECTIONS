#include <iostream>
#include<SFML/Graphics.hpp>
#include<SFML/Window.hpp>
#include<SFML/System.hpp>
#include <SFML/Audio.hpp>
#include<Vector>
#include<cstdlib>
#include<ctime>
#include<cmath>
using namespace sf;
using namespace std;
float rd = 20;
int const w = 800; int const l = 600;

class gravity {
	CircleShape orb;
	Vector2f pos;
	float f;
public:
	gravity(float pos_x, float pos_y, float strength)
	{
		pos.x = pos_x;
		pos.y = pos_y;
		this->f = strength;
		orb.setOrigin(orb.getPosition() + Vector2f(orb.getRadius(), orb.getRadius()));
		orb.setPosition(pos);
		orb.setFillColor(sf::Color::White);
		orb.setRadius(10);
	}
	 Vector2f getpos() {
		 return orb.getPosition();
	 }
	 float getforce() {
		 return f;
	 }
	 void render(RenderWindow& window) {
		 window.draw(orb);
	 }

};
class planet {
	


	public:	Vector2f x, acc, vel,pos;
	float f;
		CircleShape c;
		planet(Vector2f& x, Vector2f& vel) {
			this->vel = vel;
			this->x = x;
			c.setPosition(x);
			c.setRadius(0.5f);
		}
		void physics(gravity& g,float dt) {
		this->x = x;
		this->c.setPosition(x);
		this->vel = vel;
		x = c.getPosition();
		float norm = (float)sqrt(pow(g.getpos().x - x.x, 2) + pow(g.getpos().y - x.y, 2));
		Vector2f dir = (g.getpos() - x) / norm;
		acc = dir * g.getforce() / norm * norm;
		vel += acc*dt;
		x += vel*dt ;
		c.setPosition(x);
		}
		void render(RenderWindow& window) {
			c.setPosition(x);
			window.draw(c);
		}
};
class lines {
	
public:
	Vertex lin[2];
	void update1(Vector2f &pos) {
		lin[0].position = pos;
	}
	void update2(Vector2f& pos) {
		lin[1].position = pos;
	}
};
int main() {
	Clock clock;
	RenderWindow window(VideoMode(w, l), "planets gravity", Style::Default);
	gravity g(400.f, 300.f, 2000.f);
	Vector2f x = Vector2f(200, 200); Vector2f vel = Vector2f(0.f, 500.f);
	planet p(x, vel);
	vector<lines> lin; lines line;
	vector<planet> ps;
	while (window.isOpen()) {
		Event event;
		while (window.pollEvent(event))
			            {
			                if (event.type == Event::Closed || event.type == Event::KeyPressed && event.key.code == Keyboard::Escape)
			                    window.close();
			            }
		line.lin[0].position = p.c.getPosition();
		float dt = clock.restart().asSeconds();
		if (Mouse::isButtonPressed(Mouse::Left))
		{
			
			p.x = (Vector2f)Mouse::getPosition(window);
			ps.push_back(p);
		
		}
		cout << ps.size()<<endl;
		for (auto& i : ps) {
			i.physics(g,dt);
		}
		line.lin[1].position = p.c.getPosition();
		lin.push_back(line);
		window.clear();
		g.render(window);
		
		for (auto& i : ps) {
			i.render(window);
		}
		for (auto& i : lin) {
			window.draw(i.lin, 2, Lines);
		}
		window.display();
	}
	return 0;
}