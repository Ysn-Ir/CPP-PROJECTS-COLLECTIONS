//#include <iostream>
//#include<SFML/Graphics.hpp>
//#include<SFML/Window.hpp>
//#include<SFML/System.hpp>
//#include<Vector>
//#include<cstdlib>
//#include<ctime>
//#include<cmath>
//using namespace sf;
//using namespace std;
//
//int main()
//{
//	const int w = 1024; const int l = 700;
//	RenderWindow window(VideoMode((w/2)+30.f, w/2), "Unit cercle", Style::Default);
//	CircleShape base;
//	base.setRadius(w / 4);
//	base.setFillColor(Color::Transparent);
//	base.setOutlineThickness(2.f);
//	base.setOutlineColor(Color::White);
//	Font font;
//	font.loadFromFile("textures/font1.otf");
//	Text text;
//	const double PI = 3.1415926535;
//	text.setFont(font);
//	text.setString("O");
//	text.setFillColor(Color::Red);
//	text.setPosition(w/4,w/4);
//	CircleShape point; point.setRadius(20.f);
//	point.setPosition(0.f, 0.f);
//	point.setFillColor(Color::Green);
//	Vertex line[2];
//	long double x,y;
//	Text alpha;
//	line[0].position=Vector2f((w / 4), w / 4);
//	line[0].color=(Color::Red); line[1].color = (Color::Red);
//	RectangleShape meter;
//	meter.setSize(Vector2f(w, 2.f));
//	meter.setPosition(0.f, 20.f);
//	meter.setFillColor(Color::Green);
//	float cos, sin, tan, ligne;
//	Vertex lincos[2], linsin[2],lintan[2];
//	lincos[0].position = line[0].position;
//    linsin[0].position = line[0].position;
//	lintan[0].position = Vector2f(w / 2, w /4);
//	float co, yo;
//	Text cosin, sinus, tang;
//	while (window.isOpen())
//	{
//		Event event;
//		while (window.pollEvent(event))
//		{
//			if (event.type == Event::Closed)
//				window.close();
//			if (event.type == Event::KeyPressed && event.key.code == Keyboard::Escape)
//				window.close();
//        }
//		
//		if (Mouse::getPosition(window).y < 40.f && Mouse::getPosition(window).y>=0.f)
//		{
//			if (Mouse::isButtonPressed(Mouse::Left))
//			{
//				y = 0;
//				point.setPosition(Mouse::getPosition(window).x, point.getPosition().y);
//				x = 2*PI*(point.getPosition().x/612.0f);
//				cout << (point.getPosition().x / 612) <<": point"<< endl;
//				cout << point.getPosition().x << "  :pos" << endl;
//				float xo = (float)cos(x) * (w / 2);
//				float yo = (float)sin(x) * (w / 2);
//				cout <<x<<"pi angle " << endl;
//				Vector2f teta = Vector2f(co, -yo + (w / 4));
//				line[1].position = Vector2f(co, -yo + (w / 4));
//				lincos[1].position = Vector2f((cos(x)+1)*(w/4), w / 4);
//				linsin[1].position = Vector2f(w / 4,(w/4)*(-sin(x)+1));
//				lincos[0].color = Color::Blue; lincos[1].color = Color::Blue;
//				linsin[0].color = Color::Yellow; linsin[1].color = Color::Yellow;
//				lintan[1].position = Vector2f(w/2,(-tan(x)+1)*(w/4));
//				lintan[0].color = Color::Magenta; lintan[1].color = Color::Magenta;
//				alpha.setPosition(text.getPosit ion() + Vector2f(20.f, 20.f));
//				alpha.setFont(font);
//				alpha.setScale(0.8f, 0.8f);
//				alpha.setString(to_string(x)+" radian");
//				cosin.setFont(font); sinus.setFont(font); tang.setFont(font);
//				cosin.setPosition(lincos[1].position); sinus.setPosition(linsin[1].position); tang.setPosition(lintan[1].position-Vector2f(100.f,0.f));
//				cosin.setString(to_string(cos(x))); sinus.setString(to_string(sin(x))); tang.setString(to_string(tan(x)));
//			}
//		}
//
//		render
//		window.clear();
//		window.draw(base);
//		window.draw(line,2,Lines);
//		window.draw(meter);
//		window.draw(text);window.draw(point);
//		window.draw(lincos, 2, Lines);
//		window.draw(linsin, 2, Lines);
//		window.draw(lintan, 2, Lines);
//		window.draw(alpha);
//		window.draw(sinus);
//		window.draw(cosin);
//		window.draw(tang);
//		window.display();
//	}
//}
