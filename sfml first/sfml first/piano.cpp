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
//
//int main()
//{
//
//	const int w = 800; const int l = 600;
//	RenderWindow window(VideoMode(w, l), "PIANO", Style::Default);window.setFramerateLimit(60);
//	//piano shape
//	RectangleShape note;
//	note.setSize(Vector2f(80.f, 200.f));
//	note.setFillColor(Color::White); note.setOutlineColor(Color::Black);
//	note.setOutlineThickness(3.f);
//	RectangleShape bnote;
//	bnote.setSize(Vector2f(40.f, 100.f));
//	bnote.setFillColor(Color::Black);bnote.setOutlineColor(Color::Black);
//	bnote.setOutlineThickness(3.f);
//	vector<RectangleShape> piano;
//	//sounds
//	//white keys
//	SoundBuffer sound0; sound0.loadFromFile("sounds/A4.wav");
//	SoundBuffer sound1; sound1.loadFromFile("sounds/B4.wav");
//	SoundBuffer sound2; sound2.loadFromFile("sounds/C4.wav");
//	SoundBuffer sound3; sound3.loadFromFile("sounds/D4.wav");
//	SoundBuffer sound4; sound4.loadFromFile("sounds/E4.wav");
//	SoundBuffer sound5; sound5.loadFromFile("sounds/F4.wav");
//	SoundBuffer sound6; sound6.loadFromFile("sounds/G4.wav");
//	SoundBuffer sound7; sound7.loadFromFile("sounds/C5.wav");
//	Sound sounds0; sounds0.setBuffer(sound0);
//	Sound sounds1; sounds1.setBuffer(sound1);
//	Sound sounds2; sounds2.setBuffer(sound2);
//	Sound sounds3; sounds3.setBuffer(sound3);
//	Sound sounds4; sounds4.setBuffer(sound4);
//	Sound sounds5; sounds5.setBuffer(sound5);
//	Sound sounds6; sounds6.setBuffer(sound6);
//	Sound sounds7; sounds7.setBuffer(sound7);
//	//black keys
//	vector<RectangleShape> bpiano;
//	for (int i = 0; i < 8; i++)
//	{
//		piano.push_back(note);
//		piano[i].setPosition(Vector2f(50 + i * (80.f), 200.f));
//		if (i <= 6)
//		{
//			bpiano.push_back(bnote);
//			bpiano[i].setPosition(Vector2f(110 + i * (80.f), 200.f));
//	    }
//	}
//	while (window.isOpen())
//	{
//		bool u = 1;
//		Event event;
//		while (window.pollEvent(event))
//		{
//
//			if (event.type == Event::Closed)
//				window.close();
//			if (event.type == Event::KeyPressed && event.key.code == Keyboard::Escape)
//				window.close();
//			if (Event::KeyReleased)
//			{
//				u = 0;
//			}
//			if (Event::KeyPressed && event.key.code == Keyboard::Q)
//			{
//				
//				sounds0.play();
//				Clock dk;
//				if (dk.getElapsedTime().asSeconds() > 0.25f)
//				{
//					sounds0.stop();
//					dk.restart();
//				}
//			}
//			if (Event::KeyPressed && event.key.code == Keyboard::W)
//			{
//				sounds1.play();
//				Clock dk;
//				if (dk.getElapsedTime().asSeconds() > 0.25f)
//				{
//					sounds1.stop();
//					dk.restart();
//				}
//			}
//			if (Event::KeyPressed && event.key.code == Keyboard::E)
//			{
//				sounds2.play();
//				Clock dk;
//				if (dk.getElapsedTime().asSeconds() > 0.25f)
//				{
//					sounds2.stop();
//					dk.restart();
//				}
//			}
//			if (Event::KeyPressed && event.key.code == Keyboard::R)
//			{
//				sounds3.play();
//				Clock dk;
//				if (dk.getElapsedTime().asSeconds() > 0.25f)
//				{
//					sounds3.stop();
//					dk.restart();
//				}
//			}
//			if (Event::KeyPressed && event.key.code == Keyboard::T)
//			{
//				sounds4.play();
//				Clock dk;
//				if (dk.getElapsedTime().asSeconds() > 0.25f)
//				{
//					sounds4.stop();
//					dk.restart();
//				}
//			}
//			if (Event::KeyPressed && event.key.code == Keyboard::Y)
//			{
//				sounds5.play();
//				Clock dk;
//				if (dk.getElapsedTime().asSeconds() > 0.25f)
//				{
//					sounds5.stop();
//					dk.restart();
//				}
//			}
//			if (Event::KeyPressed && event.key.code == Keyboard::U)
//			{
//				sounds6.play();
//				Clock dk;
//				if (dk.getElapsedTime().asSeconds() > 0.25f)
//				{
//					sounds6.stop();
//					dk.restart();
//				}
//			}
//			if (Event::KeyPressed && event.key.code == Keyboard::I)
//			{
//				sounds7.play();
//				Clock dk;
//				if (dk.getElapsedTime().asSeconds() > 0.25f)
//				{
//					sounds7.stop();
//					dk.restart();
//				}
//			}
//			if (Event::KeyPressed && event.key.code == Keyboard::Num1)
//			{
//				sounds1.play();
//				sounds0.play();
//				Clock dk;
//				if (dk.getElapsedTime().asSeconds() > 0.25f)
//				{
//					sounds0.stop(); sounds1.stop();
//					dk.restart();
//				}
//			}
//			if (Event::KeyPressed && event.key.code == Keyboard::Num2)
//			{
//				sounds1.play();
//				sounds2.play();
//				Clock dk;
//				if (dk.getElapsedTime().asSeconds() > 0.25f)
//				{
//					sounds1.stop(); sounds2.stop();
//					dk.restart();
//				}
//			}
//			if (Event::KeyPressed && event.key.code == Keyboard::Num3)
//			{
//				sounds2.play();
//				sounds3.play();
//				Clock dk;
//				if (dk.getElapsedTime().asSeconds() > 0.25f)
//				{
//					sounds3.stop(); sounds2.stop();
//					dk.restart();
//				}
//			}
//			if (Event::KeyPressed && event.key.code == Keyboard::Num4)
//			{
//				sounds4.play();
//				sounds3.play();
//				Clock dk;
//				if (dk.getElapsedTime().asSeconds() > 0.25f)
//				{
//					sounds3.stop(); sounds4.stop();
//					dk.restart();
//				}
//			}
//			if (Event::KeyPressed && event.key.code == Keyboard::Num5)
//			{
//				sounds5.play();
//				sounds4.play();
//				Clock dk;
//				if (dk.getElapsedTime().asSeconds() > 0.25f)
//				{
//					sounds5.stop(); sounds4.stop();
//					dk.restart();
//				}
//			}
//			if (Event::KeyPressed && event.key.code == Keyboard::Num6)
//			{
//				sounds6.play();
//				sounds5.play();
//				Clock dk;
//				if (dk.getElapsedTime().asSeconds() > 0.25f)
//				{
//					sounds6.stop(); sounds5.stop();
//					dk.restart();
//				}
//			}
//			if (Event::KeyPressed && event.key.code == Keyboard::Num7)
//			{
//				sounds7.play();
//				sounds6.play();
//				Clock dk;
//				if (dk.getElapsedTime().asSeconds() > 0.25f)
//				{
//					sounds7.stop(); sounds6.stop();
//					dk.restart();
//				}
//			}
//		}
//		if (Keyboard::isKeyPressed(Keyboard::Q) && u)
//		{
//			piano[0].setFillColor(Color::Transparent);
//			/*sounds0.play();
//			Clock dk;
//			if (dk.getElapsedTime().asSeconds() > 0.25f)
//			{
//				sounds0.stop();
//				dk.restart();
//			}*/
//		}
//		else if (Keyboard::isKeyPressed(Keyboard::W) && u)
//		{
//			piano[1].setFillColor(Color::Transparent); 
//			/*sounds1.play();
//			Clock dk;
//			if (dk.getElapsedTime().asSeconds() > 0.25f)
//			{
//				sounds1.stop();
//				dk.restart();
//			}*/
//		}
//		else if (Keyboard::isKeyPressed(Keyboard::E) && u)
//		{
//			piano[2].setFillColor(Color::Transparent); 
//			/*sounds2.play();*/
//			
//		}
//		else if (Keyboard::isKeyPressed(Keyboard::R) && u)
//		{
//			piano[3].setFillColor(Color::Transparent);
//			/*sounds3.play();*/
//			
//		}
//		else if (Keyboard::isKeyPressed(Keyboard::T) && u)
//		{
//			piano[4].setFillColor(Color::Transparent);
//			/*sounds4.play();
//			*/
//		}
//		else if (Keyboard::isKeyPressed(Keyboard::Y) && u)
//		{
//			piano[5].setFillColor(Color::Transparent); 
//			/*sounds5.play();*/
//		
//		}
//		else if (Keyboard::isKeyPressed(Keyboard::U) && u)
//		{
//			piano[6].setFillColor(Color::Transparent);
//			/*sounds6.play();	*/
//		}
//		else if (Keyboard::isKeyPressed(Keyboard::I) && u)
//		{
//			piano[7].setFillColor(Color::Transparent);
//			/*sounds7.play();*/
//		}
//		else if (Keyboard::isKeyPressed(Keyboard::Num1) && u)
//		{
//			bpiano[0].setFillColor(Color::Transparent);
//		
//		}
//		else if (Keyboard::isKeyPressed(Keyboard::Num2) && u)
//		{
//			bpiano[1].setFillColor(Color::Transparent);
//			
//		}
//		else if (Keyboard::isKeyPressed(Keyboard::Num3) && u)
//		{
//			
//			bpiano[2].setFillColor(Color::Transparent);
//			/*sounds7.play();*/
//		}
//		else if (Keyboard::isKeyPressed(Keyboard::Num4) && u)
//		{
//		
//			bpiano[3].setFillColor(Color::Transparent);
//			/*sounds7.play();*/
//		}
//		else if (Keyboard::isKeyPressed(Keyboard::Num5) && u)
//		{
//		
//			bpiano[4].setFillColor(Color::Transparent);
//			/*sounds7.play();*/
//		}
//		else if (Keyboard::isKeyPressed(Keyboard::Num6) && u)
//		{
//			bpiano[5].setFillColor(Color::Transparent);
//			
//			/*sounds7.play();*/
//		}
//		else if (Keyboard::isKeyPressed(Keyboard::Num7) && u)
//		{
//			bpiano[6].setFillColor(Color::Transparent);
//			/*sounds7.play();*/
//		}
//		//black keys
//
//		else
//		{
//			for (auto& i : piano)
//			{
//				i.setFillColor(Color::White);
//			}
//			for (auto& i : bpiano)
//			{
//				i.setFillColor(Color::Black);
//			}
//		}
//		//render
//		window.clear();
//		for (auto& i : piano)
//		{
//			window.draw(i);
//		}
//		for (auto& i : bpiano)
//		{
//			window.draw(i);
//		}
//		
//		window.display();
//	}
//}