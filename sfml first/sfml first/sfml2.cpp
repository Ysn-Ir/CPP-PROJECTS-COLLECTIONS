//#include <iostream>
//#include<SFML/Graphics.hpp>
//#include<SFML/Window.hpp>
//#include<SFML/System.hpp>
//#include<Vector>
//using namespace sf;
//using namespace std;
//void update(RenderWindow& window, CircleShape& cir, CircleShape& bullet);
//void draw(RenderWindow& window, CircleShape& cir, CircleShape &bullet);
//std::vector<CircleShape> bullets;
//CircleShape bullet(10.f);
//
//int main()
//{
//	bullet.setFillColor(Color::Black);
//	std:: vector<CircleShape> bullets;
//	RenderWindow window(VideoMode(800, 600), "exemple", Style::Default);
//	window.setFramerateLimit(60);
//	CircleShape cir(25.f);
//	cir.setFillColor(Color::Red);
//	CircleShape ciro(5.f);
//	ciro.setFillColor(Color::Black);
//	ciro.setPosition(cir.getOrigin().x, cir.getOrigin().y);
//	while (window.isOpen())
//	{
//
//		Event event;
//		while (window.pollEvent(event))
//		{
//			if (event.type == Event::Closed)
//				window.close();
//			if (event.type == Event::KeyPressed && event.key.code == Keyboard::Escape)
//				window.close();
//
//
//		}
//		
//		update(window, cir,bullet);
//		draw( window,  cir,bullet);
//		
//	}
//	return 0;
//}
//void update(RenderWindow& window, CircleShape& cir, CircleShape& bullet)
//{
//	if (Keyboard::isKeyPressed(Keyboard::A) && cir.getPosition().x >=0.f)
//	{
//		cir.move(-6.f, 0.f);
//	}
//	else if (Keyboard::isKeyPressed(Keyboard::D) && cir.getPosition().x <= 800.f - cir.getRadius()*2)
//	{
//		cir.move(6.f, 0.f);
//	}
//	else if (Keyboard::isKeyPressed(Keyboard::S) && cir.getPosition().y <=600.f - cir.getRadius()*2)
//	{
//		cir.move(0.f, 6.f);
//	}
//	else if (Keyboard::isKeyPressed(Keyboard::W) && cir.getPosition().y >= 0.f)
//	{
//		cir.move(0.f, -6.f);
//	}
//	if (Mouse::isButtonPressed(Mouse::Left) && cir.getPosition().x >= 0.f && cir.getPosition().x <= 800.f - cir.getRadius() * 2 && cir.getPosition().y <= 600.f - cir.getRadius() * 2 && cir.getPosition().y >= 0.f)
//	{
//		float mosx = Mouse::getPosition(window).x;
//		float mosy = Mouse::getPosition(window).y;
//		float posx = cir.getPosition().x;
//		float posy = cir.getPosition().y;
//		float a = posx + mosx;
//		float b = posy + mosy;
//		float a1 = posx - mosx;
//		float b1 = posy - mosy;
//		if (a1 == 0 && b1 == 0)
//		{
//			a1 = 1.f; b1 = 1.f;
//		}
//		cir.move((a / (a1)) * 0.5f, (b / (b1)) * 0.5f);
//	}
//	Vector2f pos0;
//	pos0 = { cir.getPosition().x, cir.getPosition().y };
//	int shootime = 0;
//	if (shootime < 60)
//	{
//		shootime++;
//	}
//	if (Mouse::isButtonPressed(Mouse::Left) && shootime<=60)
//	{
//		
//		bullets.push_back(bullet);
//		
//			bullet.move(0.f, -50.f);
//			if (bullet.getPosition().y <=0)
//			{
//				bullet.setPosition(pos0.x, pos0.y);
//			}
//	    }
//		shootime = 0;
//	}
//	
//
//void draw(RenderWindow& window, CircleShape& cir, CircleShape& bullet)
//{
//	window.clear(Color::White);
//	window.draw(cir);
//	if (Mouse::isButtonPressed(Mouse::Left))
//	{
//		window.draw(bullet);
//	}
//	window.display();
//
//}
