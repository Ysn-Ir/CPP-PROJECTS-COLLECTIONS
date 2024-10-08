//#include<iostream>
//#include <String>
//#include<SFML/Graphics.hpp>
//#include<vector>
//#include<cmath>
//int const w = 600, l = 600; const float gd = 50.f;
//class lines {
//	public: 
//		sf::Vertex lin[2];
//};
//int main() {
//	srand(time(nullptr));
//	sf::Clock clock;
//	sf::RenderWindow window(sf::VideoMode(w, l), "GeoGebra", sf::Style::Default);
//	window.setFramerateLimit(60);
//	//sf::View v; v.setCenter(0, 0);
//	//v.setRotation(180);/*window.setView(v);*/
//	std::vector<sf::CircleShape> c;
//	sf::CircleShape cir(1.f);
//	std::vector<lines> gridx[30];	std::vector<lines> gridy[30];
//	for (int i = 0; i < gridx->size(); i++) {
//		gridx->at(i).lin[0].position = sf::Vector2f(  gd * i, 0);
//		gridx->at(i).lin[1].position = sf::Vector2f( gd * i, l);
//		gridy->at(i).lin[0].position = sf::Vector2f( 0,  gd * i);
//		gridy->at(i).lin[1].position = sf::Vector2f(w,  gd * i);
//	}
//	while (window.isOpen())
//	{
//		sf::Event event;
//		while (window.pollEvent(event)) {
//			if (event.type == sf::Event::Closed || event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::Escape)
//		                    window.close();
//		}
//		
//		window.clear();
//		for (int i = 0; i < gridx->size(); i++) {
//			window.draw(gridx->at(i).lin, 2, sf::Lines);
//			window.draw(gridy->at(i).lin, 2, sf::Lines);
//		}
//		window.display();
//	
//
//
//		
//
//
//	}
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//	return 0;
//}