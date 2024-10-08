//#include <iostream>
//#include<SFML/Graphics.hpp>
//#include<SFML/Window.hpp>
//#include<SFML/System.hpp>
//#include<Vector>
//#include<cstdlib>
//#include<String>
//using namespace sf;
//using namespace std;
//
//
//
//
//int main()
//{
//	//font 
//	Font font;
//	font.loadFromFile("textures/font1.otf");
//	Text text; text.setFont(font);
//	Vector2f a;//acceleration
//	/*
//	a=dv/dt
//	v=vx*i+vy+
//
//	*/
//	View view;
//	const float grid = 10.f;
//	const int w = 1024; const int l = 780;
//	vector<RectangleShape> walls;
//	Sprite player;
//	/*player.setSize(Vector2f(grid, grid));
//	player.setFillColor(Color::Red);*/
//	srand(time(NULL));
//	RenderWindow window(VideoMode(w, l), "mario ", Style::Default);//window
//	window.setFramerateLimit(60);//frame rate
//	RectangleShape wall;
//	//background
//	Texture ground;
//	ground.loadFromFile("textures/map2.png");
//	Sprite back; back.setTexture(ground);
//	back.setScale(1, 1.1076);
//	view.setCenter(w / 2.f, l / 2.f);
//	player.setPosition(w / 2.f, l / 2.f);
//	view.setSize(w, l);
//	wall.setPosition(400, 200);
//	walls.push_back(wall);
//	wall.setFillColor(Color::White);
//	wall.setSize(Vector2f(grid, grid));
//	player.setOrigin(Vector2f(8.f, 8.f));
//	string loader; Clock dr_x;
//	Texture tex;
//	loader = "textures/mariostand.png";
//	tex.loadFromFile(loader); player.setTexture(tex);
////	enemy
//	Texture enem; enem.loadFromFile("textures/mush2.png");
//	Sprite enemy; enemy.setTexture(enem);
//	float x;
//	float esi = 600.f;//enemy spawn intervall
//	Vector2f evelocity;
//	float emov = 0.3f;
//	player.scale(2.f, 2.f);
//	while (window.isOpen())
//	{
//		Vector2f mgs;
//		mgs.x = (Mouse::getPosition(window).x / (int)grid);
//		mgs.y = (Mouse::getPosition(window).y / (int)grid);
//		Event event;
//		while (window.pollEvent(event))
//		{
//			if (event.type == Event::Closed)
//				window.close();
//			if (event.type == Event::KeyPressed && event.key.code == Keyboard::Escape)
//				window.close();
//		}
//	//	creat walls
//		if (Mouse::isButtonPressed(Mouse::Left))
//		{
//			bool ex = 0;
//			for (size_t i = 0; i < walls.size() && !ex; i++)
//			{
//				if (walls[i].getPosition().x / (int)grid == mgs.x && walls[i].getPosition().y / (int)grid == mgs.y)
//				{
//					ex = 1;
//				}
//			}
//			if (!ex)
//			{
//				wall.setPosition(Vector2f(mgs.x * grid, mgs.y * grid));
//				walls.push_back(wall);
//			}
//		}
//		//delete walls
//		if (Mouse::isButtonPressed(Mouse::Right))
//		{
//			/*cout << "out";*/
//			bool ex = 0;
//			int index = -1;
//			for (size_t i = 0; i < walls.size() && !ex; i++)
//			{
//				if (walls[i].getPosition().x / (int)grid == mgs.x && walls[i].getPosition().y / (int)grid == mgs.y)
//				{
//					ex = 1;
//					index = i;
//				}
//			}
//			if (ex)
//			{
//
//				walls.erase(walls.begin() + index);
//
//			}
//		}
//
//		const float mov = 5.f;
//		Vector2f velocity;
//		velocity.x = 0.f;		velocity.y = 0.f;
//
//		//mouvement
//		if (Keyboard::isKeyPressed(Keyboard::A))
//		{
//			velocity.x += -mov;
//			Clock dx;
//			cout << (float)dx.getElapsedTime().asMilliseconds() << endl;
//			if ((float)dx.getElapsedTime().asMilliseconds() >= 0.05f)
//			{
//				loader = "textures/mariomove1.png";
//			}
//			else if ((float)dx.getElapsedTime().asSeconds() >= 0.1f)
//			{
//				loader = "textures/mariostand2.png";
//			}
//			else if ((float)dx.getElapsedTime().asSeconds() >= 0.2f)
//			{
//				loader = "textures/mariomove2.png";
//			}
//			dx.restart();
//		}
//		else if (Keyboard::isKeyPressed(Keyboard::D))
//		{
//			velocity.x += mov;
//
//		}
//
//
//		if (Keyboard::isKeyPressed(Keyboard::Space) && player.getPosition().y > 380.f)
//		{
//
//			velocity.y += -4.f;
//			player.move(velocity.x, velocity.y);
//			loader = "textures/jump1.png";
//			if (player.getPosition().y >= 380.f)
//			{
//				velocity.y += 2.f;
//				player.move(velocity.x, velocity.y);
//			}
//			Clock dt;
//			if (dt.getElapsedTime().asSeconds() > 1)
//			{
//				loader = "textures/jump2.png";
//				velocity.y += 2.f;
//
//			}
//		}
//		else if (!(Keyboard::isKeyPressed(Keyboard::Space)) && player.getPosition().y < 675.f)
//		{
//
//			loader = "textures/fall.png";
//			velocity.y += 4.f;
//		}
//		tex.loadFromFile(loader);
//		player.setTexture(tex);
//		player.move(velocity.x, velocity.y);
//		if (velocity == Vector2f(0.f, 0.f))
//		{
//			loader = "textures/mariostand.png";
//		}
//		//collision with screen
//		if (player.getPosition().x < 0.f)
//		{
//			player.setPosition(4.f, player.getPosition().y);
//
//		}
//		if (player.getPosition().x > w + 2336)
//		{
//			player.setPosition(w + 2336, player.getPosition().y);
//
//		}
//		if (player.getPosition().y < 0.f)
//		{
//			player.setPosition(player.getPosition().x, 0.f);
//		}
//		if (player.getPosition().y > 700 && player.getPosition().x < 2460 && (player.getPosition().x > 2464 && player.getPosition().y > 550 /*&& player.getPosition().y > 560 */ && player.getPosition().x <= 2460 && player.getPosition().x >= 2464))
//		{
//			player.setPosition(player.getPosition().x, 700);
//		}
//		else if (player.getPosition().y >= 550 /*&& player.getPosition().y <= 560*/ && player.getPosition().x >= 2460 && player.getPosition().x <= 2464)
//		{
//			player.move(0.f, 30.f);
//		}
//
////		walls collision
//
//		for (auto& wall : walls)
//		{
//			FloatRect wlr = wall.getGlobalBounds();
//			FloatRect plr = player.getGlobalBounds();
//			plr.top += velocity.y; plr.left += velocity.x;
//			if (wall.getGlobalBounds().intersects(player.getGlobalBounds()))
//			{
//				//left
//				if (plr.left <= wlr.left && plr.left + plr.width <= wlr.left + wlr.width
//					&& plr.top + plr.height >= wlr.top && plr.top <= wlr.height + wlr.top)
//				{
//					velocity.x = 0.f;
//					player.setPosition(wlr.left - wlr.width, plr.top);
//				}
//				//right
//				if (plr.left > wlr.left && plr.left + plr.width > wlr.left + wlr.width
//					&& plr.top + plr.height >= wlr.top && plr.top <= wlr.height + wlr.top)
//				{
//					velocity.x = 0.f;
//					player.setPosition(wlr.left + wlr.width, plr.top);
//				}
//				//top
//				if (plr.left <= wlr.left && plr.left + plr.width <= wlr.left + wlr.width
//					&& plr.top + plr.height <= wlr.top + wlr.height && plr.top <= wlr.top)
//				{
//					velocity.y = 0.f;
//					player.setPosition(plr.left, wlr.top - wlr.height);
//				}
//				//buttom
//				if (plr.left <= wlr.left && plr.left + plr.width <= wlr.left + wlr.width
//					&& plr.top + plr.height >= wlr.top + wlr.height && plr.top >= wlr.top)
//				{
//					velocity.y = 0.f;
//					player.setPosition(plr.left, wlr.top + wlr.height);
//				}
//			}
//		}
//		emov = 3.f;
//	//	enemies
//		Vector2f evelocity1, evelocity2, evelocity3, evelocity4, evelocity5, evelocity6;
//		evelocity1.x = 0.f;
//		evelocity2.x = 0.f;
//		evelocity3.x = 0.f;
//		evelocity4.x = 0.f;
//		evelocity5.x = 0.f;
//		evelocity6.x = 0.f;
//		Sprite enemy1, enemy2, enemy3, enemy4, enemy5, enemy6;
//		enemy1.setTexture(enem);	enemy2.setTexture(enem);	enemy3.setTexture(enem);	enemy4.setTexture(enem);	enemy5.setTexture(enem);	enemy6.setTexture(enem);
//		for (int i = 0; i < 6; i++)
//		{
//			switch (i)
//			{
//			case 0:
//				x = 300.f;
//				enemy1.setPosition(x, 666.f);
//				if (enemy1.getPosition().x < x + 30.f)
//				{
//					evelocity1.x += emov;
//				}
//				else
//					evelocity1.x += -emov;
//
//			case 1:
//				x = 600.f;
//				enemy2.setPosition(x, 666.f);
//				if (enemy2.getPosition().x < x + 30.f)
//				{
//					evelocity2.x += emov;
//				}
//				else
//					evelocity2.x += -emov;
//
//			case 2:
//				x = 900.f;
//				enemy3.setPosition(x, 666.f);
//				if (enemy3.getPosition().x < x + 30.f)
//				{
//					evelocity3.x += emov;
//				}
//				else
//					evelocity3.x += -emov;
//	
//			case 3:
//				x = 1200.f;
//				enemy4.setPosition(x, 666.f);
//				if (enemy4.getPosition().x < x + 30.f)
//				{
//					evelocity4.x += emov;
//				}
//				else
//					evelocity4.x += -emov;
//				
//			case 4:
//				x = 1500.f;
//				enemy5.setPosition(x, 666.f);
//				if (enemy5.getPosition().x < x + 30.f)
//				{
//					evelocity5.x += emov;
//				}
//				else
//					evelocity5.x += -emov;
//			
//			case 5:
//				x = 2000.f;
//				enemy6.setPosition(x, 666.f);
//				if (enemy6.getPosition().x < x + 30.f)
//				{
//					evelocity6.x += emov;
//				}
//				else
//					evelocity6.x += -emov;
//			
//			}
//		}
//		//enemy move
//		
//		enemy1.move(evelocity1.x, 0.f);
//		enemy2.move(evelocity2.x, 0.f);
//		enemy3.move(evelocity3.x, 0.f);
//		enemy4.move(evelocity4.x, 0.f);
//		enemy5.move(evelocity5.x, 0.f);
//		enemy6.move(evelocity6.x, 0.f);
//		//fontpos
//		string posxy;
//		posxy = " this is x: ";
//		text.setCharacterSize(20.f);
//		text.setString(posxy);
//		text.setPosition(enemy1.getPosition().x, enemy1.getPosition().y - 10.f);
//			//drawing shit
//
//			view.setCenter(Vector2f(player.getPosition().x, player.getPosition().y));
//			window.clear();
//			window.draw(back);
//			window.draw(player);
//			window.setView(view);
//			for (auto& i : walls)
//			{
//				window.draw(i);
//
//			}
//			window.draw(text);
//			window.draw(enemy1); window.draw(enemy2); window.draw(enemy3); window.draw(enemy4); window.draw(enemy5); window.draw(enemy6);
//
//			window.display();
//
//		}
//
//		return 0;
//	}
