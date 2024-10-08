//#include "pieces.h"
//#include <math.h>
//int main()
//{
//	srand(time(nullptr));
//	const int w = 800;
//	Clock dt;
//	RenderWindow window(VideoMode(w, w), "simulation pt32", Style::Default);
//	window.setFramerateLimit(800);
//	CircleShape cir0,cir1,cir2; cir0.setRadius(15.f); cir0.setFillColor(Color::Black);
//	cir2.setRadius(15.f); cir2.setFillColor(Color::Red);
//	cir1.setRadius(15.f); cir1.setFillColor(Color::Green);
//	Vertex lin0[2],lin1[2], lin2[2];
//	lin0->color = Color::Black;	lin1->color = Color::Black;	lin2->color = Color::Black;
//	lin0[0].position = Vector2f(400, 400);
//	float x;
//	float y = 0;
//	vector<CircleShape> c;
//	View v; v.setSize(Vector2f(4000, 10000));
//	while (window.isOpen())
//	{
//		Event event;
//		while (window.pollEvent(event))
//		{
//			if (event.type == Event::Closed)
//				window.close();
//			if (event.type == Event::KeyPressed && event.key.code == Keyboard::Escape)
//				window.close();
//		}
//		std::cout << dt.getElapsedTime().asSeconds() <<endl;
//		x= dt.getElapsedTime().asMicroseconds()* 2 * 31.457 ;
//		lin1[0].position = lin0[1].position;
//		lin2[0].position = lin1[1].position;
//		lin0[1].position = Vector2f((cos(x))*( lin0[0].position.x), (sin(x) ) * (y+lin0[0].position.x ));
//		lin1[1].position = Vector2f((cos(x) ) * lin1[0].position.x, (sin(6*x)) *(y+lin1[0].position.y));
//		lin2[1].position = Vector2f((cos(3*x) ) * lin2[0].position.x, (sin(x)) * (y+ lin2[0].position.y));
//		cir0.setPosition(lin2[1].position);
//		cir1.setPosition(lin1[1].position);
//		cir2.setPosition(lin0[1].position);
//		c.push_back(cir0);
//		c.push_back(cir1);
//		c.push_back(cir2);
//
//		window.clear(Color::White);
//		window.setView(v);
//		window.draw(lin0, 2, Lines);
//		window.draw(lin1, 2, Lines);
//		window.draw(lin2, 2, Lines);
//		y+=0.15;
//		for (auto& i : c) {
//			window.draw(i);
//		}
//		window.display();
//	}
//	return 0;
//}