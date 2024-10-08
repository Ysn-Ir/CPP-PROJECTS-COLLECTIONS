//#include <iostream>
//#include<SFML/Graphics.hpp>
//#include<SFML/Window.hpp>
//#include<SFML/System.hpp>
//using namespace sf;
//using namespace std;
//int main()
//{
	/*RenderWindow window(VideoMode(800,600), "firstwin", Style::Default);*/
//	window.setFramerateLimit(120);
//	Vector2f velocity;
//	float speed=100.f;
//	RectangleShape player;
//	RectangleShape player1;
//	float dt; Clock dt_cl;
//	View view;
//	view.setCenter(400, 300);
//	view.setSize(800,600);
//	player.setSize(Vector2f(50.f,50.f));
//	player1.setSize(Vector2f(50.f, 50.f));
//	player1.setPosition(Vector2f(350.f, 450.f));
//	player1.setFillColor(Color::Blue);
//	player.setFillColor(Color::Red);
//	while (window.isOpen())
//	{
//		dt = dt_cl.restart().asSeconds();
//		Event event;
//		while (window.pollEvent(event))
//		{
//			if (event.type == Event::Closed)
//				window.close();
//			if (event.type == Event::KeyPressed && event.key.code == Keyboard::Escape)
//				window.close();
//		}
//			//mouvement
//		if (Keyboard::isKeyPressed(Keyboard::A))
//		{
//			velocity.x = -speed*dt;
//		}
//		else if (Keyboard::isKeyPressed(Keyboard::D))
//		{
//			velocity.x = speed*dt;
//		}
//		if (Keyboard::isKeyPressed(Keyboard::W))
//		{
//			velocity.y = speed*dt;
//		}
//		if (Keyboard::isKeyPressed(Keyboard::S))
//		{
//			velocity.y = -speed*dt;
//		}
//		view.move(velocity);
//		player.move(velocity);
//		//render
//		window.clear();
//		window.setView(view);
//		window.draw(player);
//		window.display();
//	}
//	return 0;
//}
//
//
