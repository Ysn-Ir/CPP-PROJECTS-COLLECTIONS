//#include <iostream>
//#include<SFML/Graphics.hpp>
//#include<SFML/Window.hpp>
//#include<SFML/System.hpp>
//#include<Vector>
//#include<cstdlib>
//using namespace sf;
//using namespace std;
//
//
//
//
//int main()
//{
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
//	RenderWindow window(VideoMode(w, l), "ex", Style::Default);//window
//	window.setFramerateLimit(60);//frame rate
//	RectangleShape wall;
//	//background
//	Texture ground;
//	ground.loadFromFile("textures/map2.png");
//	Sprite back; back.setTexture(ground);
//	back.setScale(1, 1.1076);
//	view.setCenter(w / 2.f, l / 2.f);
//	player.setPosition(w / 2.f, l / 2.f);
//	view.setSize(480, 270);
//	wall.setPosition(400, 200);
//	walls.push_back(wall);
//	wall.setFillColor(Color::White);
//	wall.setSize(Vector2f(grid, grid));
//	player.setOrigin(Vector2f(8.f,8.f));
//	string loader;
//	Texture tex;
//	loader = "textures/mariostand.png";
//	tex.loadFromFile(loader); player.setTexture(tex);
//	//enemy
//	Texture enem; enem.loadFromFile("textures/mush2.png");
//	Sprite enemy; enemy.setTexture(enem);
//	float x;
//	float esi=600.f;//enemy spawn intervall
//	vector<Sprite> enemies;
//	
//	Vector2f evelocity;
//	float emov = 3.f;
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
//		//creat walls
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
//		if (player.getPosition().y > 700)
//		{
//			player.setPosition(player.getPosition().x, 700);
//		}
//
//		//walls collision
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
//		//enemy
//		//first setting enemy position properly based on the player position the player should be included in an intervall a b such as b-a = 600.f then if the enemy is in the intervall the enemy spawn 
//		float x = player.getPosition().x+300.f;
//		if (player.getPosition().x > x - 600.f && player.getPosition().x < x + 600.f)
//		{
//			//settings for every intervall based on the position 
//
//			if (x == 360.f)
//			{
//				enemy.setPosition(x, 666.f);
//				evelocity.x += emov;
//				if (enemy.getPosition().x == x + 300)
//				{
//					evelocity.x += -emov;
//					if (enemy.getPosition().x == x - 300.f)
//						evelocity.x = -emov;
//				}
//				enemy.move(evelocity.x, 715.f);
//
//				enemies.push_back(enemy);
//
//			}
//			else if (x == 700)
//			{
//				enemy.setPosition(x, 666.f);
//				evelocity.x += emov;
//				if (enemy.getPosition().x == x + 300)
//				{
//					evelocity.x += -emov;
//					if (enemy.getPosition().x == x - 300.f)
//						evelocity.x = -emov;
//				}
//				enemy.move(evelocity.x, 715.f);
//
//				enemies.push_back(enemy);
//			}
//			else if (x == 1150.f) {
//				enemy.setPosition(x, 666.f);
//				evelocity.x += emov;
//				if (enemy.getPosition().x == x + 300)
//				{
//					evelocity.x += -emov;
//					if (enemy.getPosition().x == x - 300.f)
//						evelocity.x = -emov;
//				}
//				enemy.move(evelocity.x, 0.f);
//
//				enemies.push_back(enemy);
//			}
//			else if (x == 2020)
//			{
//				enemy.setPosition(x, 666.f);
//				evelocity.x += emov;
//				if (enemy.getPosition().x == x + 300)
//				{
//					evelocity.x += -emov;
//					if (enemy.getPosition().x == x - 300.f)
//						evelocity.x = -emov;
//				}
//				enemy.move(evelocity.x, 715.f);
//
//				enemies.push_back(enemy);
//			}
//			else if (x == 2750) {
//				enemy.setPosition(x, 666.f);
//				evelocity.x += emov;
//				if (enemy.getPosition().x == x + 300)
//				{
//					evelocity.x += -emov;
//					if (enemy.getPosition().x == x - 300.f)
//						evelocity.x = -emov;
//				}
//				enemy.move(evelocity.x, 0.f);
//
//				enemies.push_back(enemy);
//			}
//			else if (x == 3120) {
//				enemy.setPosition(x, 715.f);
//				evelocity.x += emov;
//				if (enemy.getPosition().x == x + 300)
//				{
//					evelocity.x += -emov;
//					if (enemy.getPosition().x == x - 300.f)
//						evelocity.x = -emov;
//				}
//				enemy.move(evelocity.x, 715.f);
//
//				enemies.push_back(enemy);
//
//			}
//		}
//		
//	//collision
//	FloatRect enm = enemy.getGlobalBounds();
//	FloatRect plr = player.getGlobalBounds();
//	if (plr.top == enm.top && enm.left == plr.left)
//	{
//		bool ex = 0;
//		int index = -1;
//		for (size_t i = 0; i < enemies.size() && !ex; i++)
//		{
//			if (enemies[i].getPosition().x ==plr.left && enemies[i].getPosition().y==plr.top)
//			{
//				ex = 1;
//				index = i;
//			}
//		}
//		if (ex)
//		{
//
//			enemies.erase(enemies.begin() + index);
//
//		}
//	}
//
//	float t = 400.f;
//	enemy.setPosition(x, 715.f);
//	evelocity.x += emov;
//	if (enemy.getPosition().x == t + 300)
//	{
//		evelocity.x += -emov;
//		if (enemy.getPosition().x == t - 300.f)
//			evelocity.x = emov;
//	}
//	enemy.move(evelocity.x, 715.f);
//
//	enemies.push_back(enemy);
//	//drawing shit
//
//	view.setCenter(Vector2f(player.getPosition().x, player.getPosition().y));
//	window.clear();
//	window.draw(back);
//	window.draw(player);
//	window.setView(view);
//	for (auto& i : walls)
//	{
//		window.draw(i);
//
//	}
//	for (int k = 0; k < enemies.size(); k++)
//	{
//		window.draw(enemies[k]);
//	}
//	
//	window.draw(enemy);
//	window.display();
//
//}	
//
//	return 0;
//    }