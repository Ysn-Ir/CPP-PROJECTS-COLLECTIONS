//#include "pieces.h"
//#include <math.h>
//int main()
//{
//	Clock dt;
//	srand(time(nullptr));
//	class smoke
//	{
//	public:
//		Sprite sm;Texture txt;
//		vector<Sprite> smv;
//		Vector2f mov;
//		float mxspd;
//		smoke() {
//			mov = Vector2f(0, 0);
//			mxspd = rand()%5;
//			sm.setPosition(300, 300);
//			txt.loadFromFile("textures/smoke.png");
//			sm.setTexture(txt);
//			for (int j = 0; j < 5; j++) {
//				for (int i = 0; i < 8; i++) {
//					sm.setTextureRect(IntRect(i * 125.25f, 114.2f * j, 125.25f, 114.2f));
//					smv.push_back(sm);
//				}
//			}
//			
//		}
//	};
//	const int w = 600;
//	RenderWindow window(VideoMode(w, w), "smoke simulation", Style::Default);
//	window.setFramerateLimit(300);
//	CircleShape cir; cir.setRadius(30.f);  cir.setPointCount(3); cir.setPosition(Vector2f(300, 300));
//	cir.rotate(180);
//	Vector2f mospos, cirpos,vec, norm, dir;
//	vector<smoke> r; smoke rec;
//	while (window.isOpen())
//	{
//		Event event;
//			    while (window.pollEvent(event))
//				{
//							
//			    	if (event.type ==Event::Closed)
//								window.close();
//				    if (event.type == Event::KeyPressed && event.key.code == Keyboard::Escape)
//								window.close();
//			    }
//				//update
//				mospos = Vector2f(Mouse::getPosition(window));
//				cirpos = Vector2f(cir.getPosition())+Vector2f(cir.getRadius(), cir.getRadius());
//				vec = mospos - cirpos;
//				dir = vec / (float)sqrt(pow(vec.x, 2) + pow(vec.y, 2));
//				cout << r.size() << endl;
//				if (Mouse::isButtonPressed(Mouse::Left)) {
//					
//						rec.mov = Vector2f(dir.x,dir.y ) * rec.mxspd;
//						r.push_back(rec);
//					
//				}
//				for (int i = 0; i < r.size(); i++) {
//					for(auto&j:r[i].smv)
//					j.move(r[i].mov);
//				}
//				cout << dt.getElapsedTime().asSeconds() << endl;
//				window.clear();
//				window.draw(cir);
//				for(int i=0;i<r.size();i++)
//				for (int j=0;j<r[i].smv.size();j++)
//				{
//					window.draw(r[i].smv[j]);
//				
//				}
//				window.display();
//
//	}
//
//	return 0;
//}
