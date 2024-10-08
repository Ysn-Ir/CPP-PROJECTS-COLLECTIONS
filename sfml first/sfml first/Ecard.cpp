//#include"card.h"
////size = 168*224
//// 2 250*356
////1.52 *1.58
//unsigned  const int w = 1200, l = 800;
//int main()
//{
//	srand(time(nullptr));
//	sf::RenderWindow window(sf::VideoMode(w, l), "Ecard", sf::Style::Default);
//	window.setFramerateLimit(60);
//	sf::Sprite cards[4]; sf::Texture tcards[4];
//	for (int i = 0; i < 4; i++) {
//		if (i == 0) {
//			tcards[i].loadFromFile("textures/cards/c" + std::to_string(i)+".png");
//		}
//		else {
//			tcards[i].loadFromFile("textures/cards/c" + std::to_string(i) + ".jpg");
//		}
//		cards[i].setTexture(tcards[i]);
//	}
//	for(int i=1;i<4;i++)
//	   cards[i].setScale(1.52f, 1.58f);
//	
//	card s(cards[2],"slave",1), e(cards[1], "emperor", 2), c(cards[3], "civilian", 3, sf::Vector2f(490, 500));
//	//s.setpos(); e.setpos(); c.setpos();
//	card arr[3] = {s,e,c};
//	while (window.isOpen()) {
//		sf::Event event;
//		while (window.pollEvent(event)) {
//			if (event.type == sf::Event::Closed || event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::Escape)
//			   window.close();
//		}
//window.clear();
//for (int i = 0; i < 3;i++) {
//	window.draw(arr[i].getshape());
//}
//	window.display();
//	}
//	
//
//	return 0;
//}