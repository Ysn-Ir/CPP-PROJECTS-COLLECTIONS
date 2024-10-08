//#include <iostream>
//#include<SFML/Graphics.hpp>
//#include<SFML/Window.hpp>
//#include<SFML/System.hpp>
//#include <SFML/Audio.hpp>
//#include<Vector>
//#include<cstdlib>
//#include<ctime>
//#include<cmath>
//using namespace sf;
//using namespace std;
//const int w = 1000; const int l = 600; float ve = 5.f; Vector2f v = Vector2f(ve, ve);
//void restart(Vector2f& v, Vector2i& points, CircleShape& cir, Sound& wsound);
//int main()
//{
//	
//	SoundBuffer buff,wbuff; buff.loadFromFile("sounds/pong.wav"); wbuff.loadFromFile("sounds/yes.wav");
//	Sound sound, wsound; sound.setBuffer(buff); wsound.setBuffer(wbuff);
//
//	Vector2i points = Vector2i(0, 0);
//	fonts and result handlement
//	Font font; font.loadFromFile("fonts/font1.otf");
//	Text text1,text2; text1.setFont(font); text2.setFont(font);
//	ball
//	float rd = 30;
//	CircleShape cir; cir.setRadius(rd); cir.setPosition(w / 2, l / 2 - 20);
//	RenderWindow window(VideoMode(w, l), "ping pong", Style::Default); window.setFramerateLimit(60);
//	 handlers
//	RectangleShape r1; r1.setSize(Vector2f(5.f, 100.f)); r1.setPosition(Vector2f(10.f, l / 2 + 100));
//	RectangleShape r2; r2.setSize(Vector2f(5.f, 100.f)); r2.setPosition(Vector2f(w-10, l / 2 + 100));
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
//		 cre/ating movement
//
//		if (cir.getPosition().y <= 2 * rd)
//			v.y = -v.y;
//		if (cir.getPosition().y >= l - 2 * rd)
//			v.y = -v.y;
//		cir.move(v);
//		collision detection
//		if (r1.getGlobalBounds().intersects(cir.getGlobalBounds()) || (r2.getGlobalBounds().intersects(cir.getGlobalBounds())))
//		{
//			v.x = -v.x;
//			sound.play();
//		}
//		moving bunders
//		r1
//		if (Keyboard::isKeyPressed(Keyboard::W))
//		{
//			r1.move(0, -ve);
//		}
//		if (Keyboard::isKeyPressed(Keyboard::S))
//		{
//			r1.move(0, ve);
//		}
//		r2
//		if (Keyboard::isKeyPressed(Keyboard::Up))
//		{
//			r2.move(0, -ve);
//		}
//		if (Keyboard::isKeyPressed(Keyboard::Down))
//		{
//			r2.move(0, ve);
//		}
//		game goal
//		restart(v, points, cir,wsound);
//		results
//		string res1 = "player one : " + to_string(points.x); string res2 = "player two : " + to_string(points.y);
//		text1.setString(res1); text2.setString(res2);
//		text1.setPosition(10.f, 10.f); text2.setPosition(w-180,10.f);
//		render
//		window.clear();
//		window.draw(text1); window.draw(text2);
//		window.draw(cir);
//		window.draw(r1);
//		window.draw(r2);
//		window.display();
//	}
//	return 0;
//}
//
//void restart(Vector2f& v,Vector2i &points,CircleShape& cir,Sound &wsound)
//{
//	if (cir.getPosition().x < 0)
//	{
//		points.y += 1;
//		cir.setPosition(w / 2, l / 2 - 20);
//		v.x = -v.x;
//		
//	}
//	if (cir.getPosition().x > w)
//	{
//		points.x+= 1;
//		cir.setPosition(w / 2, l / 2 - 20);
//		v.x = -v.x;
//	}
//	wsound.play();
//}
