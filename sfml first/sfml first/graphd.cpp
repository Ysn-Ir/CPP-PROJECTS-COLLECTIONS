//#include<Sfml/Graphics.hpp>
//#include <vector>
//#include<ctime>
//#include <iostream>
//using namespace std;
//using namespace sf;
//const int w = 800, l = 600;
//class line
//{
//public:
//	Vertex line[2];
//};
//class gravity
//{
//	Vector2f pos;
//	float force,rd;
//public:
//	
//	CircleShape g;
//	gravity(Vector2f pos, float force,float rd) {
//		g.setOrigin(g.getPosition().x + rd, g.getPosition().y + rd);
//		this->pos = pos;
//		this->force = force;
//		this->rd = rd;
//		g.setPosition(pos);
//		g.setRadius(rd);
//	}
//	Vector2f getpos() {return pos;}
//	float getforce() {return force;}
//	float getrd() { return rd; }
//	void render(RenderWindow& window) { window.draw(g);}
//};
//class planet {
//	Vector2f vel, x, acc;
//	float rd;
//public:
//	CircleShape c;
//	planet( Vector2f& x, Vector2f& vel, float & rd) {
//		
//		this->x = x;
//		this->vel = vel;
//		this->rd = rd;
//		this->c = c; c.setFillColor(Color::Red);
//		c.setRadius(rd); c.setPosition(x);
//	}
//	void physics(gravity g,float dt)
//	{
//			float norm = (float)sqrt(pow(g.getpos().x - x.x, 2) + pow(g.getpos().y - x.y, 2));
//			Vector2f dir =( g.getpos() - x)/ norm;
//			x = c.getPosition();
//			acc = dir * g.getforce()/norm*norm;
//			vel += acc * dt;
//			x += vel * dt;
//			c.setPosition(x);
//	}
//	void render(RenderWindow& window) { 
//		c.setPosition(x);
//        window.draw(c); }
//};
//int main() {
//	srand(time(nullptr));
//	Clock clock;
//	RenderWindow window(VideoMode(w, l), "Graphs", Style::Default);
//	window.setFramerateLimit(2000);
//	Vector2f x, vel;
//	float rd=.5f;
//	vel = Vector2f(5,355);
//	gravity g(Vector2f((float)w / 2.f, (float)l / 2.f),200,50); 
//	planet p( x, vel,rd);
//	vector<planet> pv;
//	while (window.isOpen()) {
//		Event event;
//		while (window.pollEvent(event))
//		{
//			if (event.type == Event::Closed || event.type == Event::KeyPressed && event.key.code == Keyboard::Escape)
//				window.close();
//		}
//		if (Mouse::isButtonPressed(Mouse::Left)) {
//			
//			for (int k = 0; k < 3000; k++) {
//				Vector2f mos = (Vector2f)Mouse::getPosition(window);
//			Vector2f velv = vel+mos/(float)(k+1);
//			planet pk(mos, velv, rd);
//				pv.push_back(pk);
//			}
//		}
//		float dt = clock.restart().asSeconds();
//		std::cout << pv.size() << endl;
//		for (auto& i : pv) {
//			i.physics(g, dt);
//		}
//		window.clear();
//		for (auto& i : pv) {
//			i.render(window);
//		}
//		g.render(window);
//		
//		window.display();
//	
//		
//	}
