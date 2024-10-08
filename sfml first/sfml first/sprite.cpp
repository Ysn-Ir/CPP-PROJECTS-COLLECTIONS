//#include <iostream>
//#include<SFML/Graphics.hpp>
//#include<SFML/Window.hpp>
//#include<SFML/System.hpp>
//#include<Vector>
//#include<cstdlib>
//using namespace sf;
//using namespace std;
//int main()
//{
//	//colors settings
//	Sprite colors;
//	Texture clr; clr.loadFromFile("textures/color1.png");
//	colors.setTexture(clr);
//	/*CircleShape button;
//	button.setRadius(30.f);
//	button.setPosition(700.f, 20.f);
//	button.setFillColor(Color::Green);*/
//	/*button.setOrigin(Vector2f(730.f, 50.f));*/
//	font for pos x and for radius
//	Font font;
//	font.loadFromFile("textures/font1.otf");
//	Text text; text.setFont(font);
//	String posx;
//	CircleShape cr;cr.setFillColor(Color::Black);
//	cr.setRadius(10.f);
//	CircleShape wall;
//	
//	wall.setFillColor(Color::Black);
//	float rd = 10.f;
//	
//	vector<CircleShape> walls;
//	const int w = 1024; const int l = 780;
//	srand(time(NULL));
//	RenderWindow window(VideoMode(800, 600), "Paint", Style::Default);
//	window.setFramerateLimit(300);
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
//			if (event.type == Event::MouseButtonReleased)
//			{
//			
//					window.clear(Color::White);
//			}
//		}
//		position
//		Vector2f msg;
//		msg.x = Mouse::getPosition(window).x;		msg.y = Mouse::getPosition(window).y;
//		color menu pos
//	/*	colors.setPosition(Vector2f(545.f,0.f));
//		colors.setScale(Vector2f(0.25f, 0.25f));*/
//size of brush
//		RectangleShape lin;
//		
//		lin.setSize(Vector2f(300.f, 2.f));
//		lin.setFillColor(Color::Blue);
//		lin.setPosition(0.f, 10.f);
//		if (Mouse::isButtonPressed(Mouse::Left) &&
//			msg.x <= 300.f && msg.x >= 0.f && msg.y >0.f && msg.y<40.f )
//		{
//			rd = (msg.x / (int)10.f) ;
//			posx = to_string(rd);
//			text.setString(posx);
//			text.setPosition(100.f, 50.f);
//			text.setFillColor(Color::Magenta);
//			text.setCharacterSize(20.f);
//			cr.setPosition(msg.x, 2.f);
//		}
//
//		wall.setRadius(rd);
//		creat walls
//		if (Mouse::isButtonPressed(Mouse::Left)&& msg.y>60.f+rd)
//		{
//			wall.setPosition(msg.x, msg.y);
//			walls.push_back(wall);
//		}
//		change colors
//		CircleShape cr1 ,cr2,cr3,cr4,cr5;
//		cr1.setRadius(20.f); cr1.setFillColor(Color::Red); cr1.setPosition(340.f, 0.f);
//		cr2.setRadius(20.f); cr2.setFillColor(Color::Blue); cr2.setPosition(380.f, 0.f);
//		cr3.setRadius(20.f); cr3.setFillColor(Color::Yellow); cr3.setPosition(420.f, 0.f);
//		cr4.setRadius(20.f); cr4.setFillColor(Color::White); cr4.setPosition(460.f, 0.f);
//		cr5.setRadius(20.f); cr5.setFillColor(Color::Black); cr5.setPosition(500.f, 0.f);
//
//    if (Mouse::isButtonPressed(Mouse::Left)&&msg.y>=0.f&&msg.y<=40.f)
//	{
//		if (msg.x <= 380.f && msg.x >= 340.f)
//		{
//			
//			wall.setFillColor(Color::Red);
//			cr1.setOutlineThickness(2.f);
//			cr1.setOutlineColor(Color::Magenta);
//		}
//		if (msg.x <= 410.f && msg.x >= 370.f)
//		{
//			wall.setFillColor(Color::Blue);
//			cr2.setOutlineThickness(2.f);
//			cr2.setOutlineColor(Color::Magenta);
//		}
//		if (msg.x <= 460.f && msg.x >= 420.f)
//		{
//			wall.setFillColor(Color::Yellow);
//			cr3.setOutlineThickness(2.f);
//			cr3.setOutlineColor(Color::Magenta);
//		}
//
//		if (msg.x <= 510.f && msg.x >= 470.f)
//		{
//			wall.setFillColor(Color::White);
//			cr4.setOutlineThickness(2.f);
//			cr4.setOutlineColor(Color::Magenta);
//		}
//		if (msg.x <= 560.f && msg.x >= 520.f)
//		{
//			wall.setFillColor(Color::Black);
//			cr5.setOutlineThickness(2.f);
//			cr5.setOutlineColor(Color::Magenta);
//		}
//	}
//
//
//		render
//		window.clear(Color::White);
//		for (auto& i : walls)
//		{
//			window.draw(i);
//		}
//		window.draw(lin);
//		window.draw(cr);
//		window.draw(text);
//		window.draw(cr1); window.draw(cr2); window.draw(cr3); window.draw(cr4); window.draw(cr5);
//		render menu
//		
//		
//		window.display();
//	}
//}
