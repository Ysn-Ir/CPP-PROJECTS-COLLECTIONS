////#include<Sfml/Graphics.hpp>
////#include <vector>
////#include<ctime>
////#include <iostream>
////#include <cMath>
////using namespace std;
////using namespace sf;
////const int w = 800, l = 600;
////class line
////{
////public:
////	Vertex line[3];
////};
////int main() {
////	srand(time(nullptr));
////	Clock clock;
////	RenderWindow window(VideoMode(w, l), "Graphs", Style::Default);
////	window.setFramerateLimit(60);
////	
////	//reflection line
////	line ref;
////	ref.line[0].position = Vector2f(w/2, 0);
////	ref.line[1].position = Vector2f(w/2, l );
////	line src;
////	bool b=0;
////	Vector2f* vec=new Vector2f(0,0);
////	src.line[1].position = Vector2f(src.line[0].position);
////	while (window.isOpen()) {
////		Event event;
////		while (window.pollEvent(event))
////		{
////			if (event.type == Event::Closed || event.type == Event::KeyPressed && event.key.code == Keyboard::Escape)
////				window.close();
////		}
////		float dt = clock.restart().asSeconds();
////		if (Mouse::isButtonPressed(Mouse::Left)){
////			src.line[0].position = Vector2f(Mouse::getPosition(window));
////			b = 1;
////		}
////		if (b) {
////         
////		 float norm = sqrtf(pow(src.line[0].position.x - (w / 2), 2) + pow(src.line[0].position.y - (l / 2), 2));
////		 *vec = Vector2f(src.line[1].position - src.line[0].position)/norm*norm;
////		 src.line[1].position +=(*vec)/norm*norm;
////		}
////		window.clear();
////		window.draw(src.line, 2, Lines);
////		window.draw(ref.line, 2, Lines);
////		window.display();
////	}
////	delete vec;
////	vec = nullptr;
//}