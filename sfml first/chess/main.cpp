#include "piece.h"
const std::string FEN = "RNBQKBNR/PPPPPPPP/8/8/8/8/pppppppp/rnbqkbnr";
int const w = 600; int const l = 600;
class vectro {
public:
	std::vector<std::vector<piece>> pieces;
};
//initillizing functions
void boardf(sf::Vector2i& mpos, std::vector<sf::RectangleShape>& board, sf::RectangleShape& glow, sf::RenderWindow& window, vectro& wvectro, vectro& nvectro);
void boardinit(sf::Vector2i& mpos, std::vector<sf::RectangleShape>& board, sf::RectangleShape& glow, sf::RenderWindow& window);
void windowhandling(sf::View v, vectro& wvectro, vectro& nvectro);
void FENtofloat(const std::string FEN, std::vector<sf::Sprite>& w, std::vector<sf::Sprite>& n, vectro& wvectro, vectro& nvectro);
vectro wvectros(),nvectros();
//void pawnmov(piece pawn);
//initiallising gloabal stuff
std::vector<std::vector<piece>>wpiece, npiece;
std::vector<sf::Sprite>Wshapes, Nshapes;
vectro wpieces, npieces;
std::vector<piece>wpawns[8]; std::vector<piece>npawns[8];
std::vector<piece>wknights[2]; std::vector<piece>nknights[2];
std::vector<piece>wbishops[2]; std::vector<piece>nbishops[2];
std::vector<piece>wrooks[2]; std::vector<piece>nrooks[2];
std::vector<piece>wkings[1]; std::vector<piece>nkings[1];
std::vector<piece>wqueens[1]; std::vector<piece>nqueens[1];
//////////////////
int main() {
	sf::View v; v.setSize(4000, 4000);
	
		//setting textures and vectors of everything
	//wvectro(); nvectro();
	vectro wvectro = wvectros();	vectro nvectro = nvectros();
	nvectros(); wvectros();
	FENtofloat(FEN, Wshapes, Nshapes, wvectro, nvectro);

	windowhandling(v,wvectro,nvectro);
	return 0;
}
///////////////////
void windowhandling(sf::View v,vectro &wvectro,vectro &nvectro)
{
	//creating window and handling stuff
	sf::RenderWindow window(sf::VideoMode(w, l), "board", sf::Style::Default);
	window.setFramerateLimit(120);
	std::vector<sf::RectangleShape> board;
	sf::Vector2i mpos;
	sf::RectangleShape glow;
	FENtofloat(FEN, Wshapes, Nshapes, wvectro, nvectro);
	boardinit(mpos, board, glow, window);
	
	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
			if (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::Escape)
				window.close();
		}
		//window.setView(v);
		//for (auto& i : Wshapes) { std::cout << i.getPosition().x / 75.f<<"     "<<i.getPosition().y/75.f << std::endl; }
		boardf(mpos, board, glow, window,wvectro,nvectro);
	}
}
void FENtofloat(const std::string FEN, std::vector<sf::Sprite>& w, std::vector<sf::Sprite>& n,vectro&wvectro,vectro &nvectro) {
		
	sf::Vector2f d = sf::Vector2f(0, 0);//distance mapped for the instance 
	int p = 0; int k = 0; int b = 0; int  r = 0;
	int P = 0; int K = 0; int B = 0; int  R = 0;
	for (auto& i : FEN) {

			switch (i) {
			case '1':
				d.x +=     75.f; std::cout << d.x << std::endl; break;
			case '2':
				d.x += 2 * 75.f; std::cout << d.x << std::endl; break;
			case '3':
				d.x += 3 * 75.f; std::cout << d.x << std::endl; break;
			case '4':
				d.x += 4 * 75.f; std::cout << d.x << std::endl; break;
			case '5':
				d.x += 5 * 75.f; std::cout << d.x << std::endl; break;
			case '6':
				d.x += 6 * 75.f; std::cout << d.x << std::endl; break;
			case '7':
				d.x += 7 * 75.f; std::cout << d.x << std::endl; break;
			case '8':
				d.x += 8 * 75.f; std::cout << d.x << std::endl; break;
			case '/':
				d.y += 75.f; d.x = 0; break;
			case 'p':
				wvectro.pieces[0][p].getshape().setPosition(d); d.x += 75.f; std::cout << d.x; std::cout << d.y << std::endl;
				
				std::cout << wvectro.pieces.at(0).at(p).getshape().getPosition().x <<" d+     yaaay niggaaaaa"<< std::endl;
				p++;
				break;
			case 'n':
				wvectro.pieces[0][k].getshape().setPosition(d); d.x += 75.f; std::cout << d.x; std::cout << d.y << std::endl;
				k++;
				break;
			case 'b':
				wvectro.pieces[0][b].getshape().setPosition(d); d.x += 75.f; std::cout << d.x; std::cout << d.y << std::endl;
				
				b++;

				break;
			case 'r':
				wvectro.pieces.at(3).at(r).getshape().setPosition(d); d.x += 75.f; std::cout << d.x<<"  " << d.y << std::endl;
			
				r++;
				break;
			case 'q':
				wvectro.pieces.at(4).at(0).getshape().setPosition(d); d.x += 75.f; std::cout << d.x; std::cout << d.y << std::endl;
				
				break;
			case 'k':
				wvectro.pieces.at(5).at(0).getshape().setPosition(d); d.x += 75.f; std::cout << d.x; std::cout << d.y << std::endl;
			
				break;
			case 'P':
				nvectro.pieces.at(0).at(P).getshape().setPosition(d); d.x += 75.f; std::cout << d.x; std::cout << d.y << std::endl;
				
				P++;
				break;
			case 'N':
				nvectro.pieces.at(1).at(K).getshape().setPosition(d); d.x += 75.f; std::cout << d.x; std::cout << d.y << std::endl;
				
				K++;break;
			case 'B':
				nvectro.pieces.at(2).at(B).getshape().setPosition(d); d.x += 75.f; std::cout << d.x; std::cout << d.y << std::endl;
			
				B++;
				break;
			case 'R':
				nvectro.pieces.at(3).at(R).getshape().setPosition(d); d.x += 75.f; std::cout << d.x; std::cout << d.y << std::endl; break;
				
				R++;
			case 'Q':
				nvectro.pieces.at(4).at(0).getshape().setPosition(d); d.x += 75.f; std::cout << d.x; std::cout << d.y << std::endl;
				
				break;
			case 'K':
				nvectro.pieces.at(5).at(0).getshape().setPosition(d); d.x += 75.f; std::cout << d.x; std::cout << d.y << std::endl;
				
				break;
			}
		}
	}
	vectro wvectros() {
		sf::Sprite sh;
		sf::Texture tex; sh.setTexture(tex); tex.loadFromFile("textures/chessp1.png");
		for (int i = 0; i < 6; i++) {
			sh.setTextureRect(sf::IntRect(90 * i, 0, 90, 90));
			sh.scale(sf::Vector2f(0.83f, 0.83f));
			Wshapes.push_back(sh);
			sh.scale(sf::Vector2f(1.2f, 1.2f));

		}
		piece pawn; pawn.setshape(Wshapes[5]); pawn.setname("pawn"); pawn.setpt(1);//pawn 5
		piece knight; knight.setshape(Wshapes[0]); knight.setname("knight"); knight.setpt(3);//knight 0
		piece bishop; bishop.setshape(Wshapes[2]); bishop.setname("bishop"); bishop.setpt(3);//bishope 2
		piece rook; rook.setshape(Wshapes[1]); rook.setname("rook"); rook.setpt(5);//rook 1
		piece queen; queen.setshape(Wshapes[3]); queen.setname("queen"); queen.setpt(8);//queen 3
		piece king; king.setshape(Wshapes[4]); king.setname("king"); king.setpt(0);//king 4

		//vector of pawns
		for (int i = 0; i < 8; i++) {
			wpawns->at(i) = pawn;
		}

		//vectorof knights
		for (int i = 0; i < 2; i++) {
			wknights->at(i) = knight;
		}

		//vector of bishops
		for (int i = 0; i < 2; i++) {
			wbishops->at(i) = bishop;
		}

		//vector of rooks
		for (int i = 0; i < 2; i++) {
			wrooks->at(i) = rook;
		}

		wqueens->at(0) = queen;
		wkings->at(0) = king;
		//the vector that contains all the vectors
		wpieces.pieces.push_back(wpawns);
		wpieces.pieces.push_back(wknights);
		wpieces.pieces.push_back(wbishops);
		wpieces.pieces.push_back(wrooks);
		wpieces.pieces.push_back(wqueens);
		wpieces.pieces.push_back(wkings);

		return wpieces;
	}
	vectro nvectros()
	{
		sf::Sprite sh;
		sf::Texture tex; sh.setTexture(tex); tex.loadFromFile("textures/chessp1.png");
		for (int i = 0; i < 6; i++) {	
			sh.setTextureRect(sf::IntRect(90 * i, 90, 90, 90));
			sh.scale(sf::Vector2f(0.83f, 0.83f));
			Nshapes.push_back(sh);
			sh.scale(sf::Vector2f(1.2f, 1.2f));
		}
		piece Npawn; Npawn.setshape(Wshapes[5]); Npawn.setname("pawn"); Npawn.setpt(1);
		piece Nknight; Nknight.setshape(Nshapes[0]); Nknight.setname("Nknight"); Nknight.setpt(3);
		piece Nbishop; Nbishop.setshape(Nshapes[2]); Nbishop.setname("Nbishop"); Nbishop.setpt(3);
		piece Nrook; Nrook.setshape(Nshapes[1]); Nrook.setname("Nrook"); Nrook.setpt(5);
		piece Nqueen; Nqueen.setshape(Nshapes[3]); Nqueen.setname("Nqueen"); Nqueen.setpt(8);
		piece Nking; Nking.setshape(Nshapes[4]); Nking.setname("Nking"); Nking.setpt(0);
		for (int i = 0; i < 8; i++) {
			npawns.push_back(Npawn);
		}
		for (int i = 0; i < 2; i++) {
			nknights.push_back(Nknight);
		}
		for (int i = 0; i < 2; i++) {
			nbishops.push_back(Nbishop);
		}
		for (int i = 0; i < 2; i++) {
			nrooks.push_back(Nrook);
		}
		nqueens.push_back(Nqueen);
		nkings.push_back(Nking);
		npieces.pieces.push_back(npawns); 
	npieces.pieces.push_back(nknights);
	npieces.pieces.push_back(nbishops);
	npieces.pieces.push_back(nrooks);	
	npieces.pieces.push_back(nqueens);	
	npieces.pieces.push_back(nkings);
		return npieces;
	}

	void boardinit(sf::Vector2i& mpos, std::vector<sf::RectangleShape>& board, sf::RectangleShape& glow, sf::RenderWindow& window)
	{
		//drawing the board
		sf::RectangleShape rec; rec.setSize(sf::Vector2f(75.f, 75.f));
		int k = 0; int u = 0;
		glow.setSize(sf::Vector2f(75.f, 75.f)); glow.setFillColor(sf::Color::Red);
		glow.setPosition(sf::Vector2f(-100, -100));
		for (int i = 1; i <= 8; i++) {
			for (int j = 1; j <= 8; j++) {

				board.push_back(rec);
				if (i % 2 == 0) {
					if (j % 2 == 0) {
						board[u].setFillColor(sf::Color::Black);
						k++;
						
					}
					else if (j % 2 == 1) {
						board[u].setFillColor(sf::Color::White);
						k++; 
					}

				}
				else {
					if (j % 2 == 0) {
						board[u].setFillColor(sf::Color::White);
						k++; 
					}
					else if (j % 2 == 1) {
						board[u].setFillColor(sf::Color::Black);
						k++;	
					}

				}

				board[u].setPosition(75.f * (i - 1), 75.f * (j - 1));
				u++;
			}
		}
	}

	void boardf(sf::Vector2i& mpos, std::vector<sf::RectangleShape>& board, sf::RectangleShape& glow, sf::RenderWindow& window,vectro &wvectro,vectro &nvectro)
	{//just making the window and the pos of mouse based on the grid of square of size 75*75 from 0 to 7 
		mpos = ((sf::Vector2i)(sf::Mouse::getPosition(window))) / 75;
		//std::cout << mpos.x << "    " << mpos.y << std::endl;
		if (mpos.x >= 0 && mpos.x <= 7 && mpos.y >= 0 && mpos.y <= 7) {
			if (sf::Mouse::isButtonPressed(sf::Mouse::Left)) {
				glow.setPosition((sf::Vector2f)(mpos) * 75.f);
			}
		}
		window.clear(sf::Color::White);
		for (auto& i : board) {
			window.draw(i);
		}
window.draw(glow);
		
		for (int j = 0; j < 6; j++){
			for (auto& i : wvectro.pieces.at(j)) {
				window.draw(i.getshape());}
			for (auto& i : nvectro.pieces.at(j)) {
				window.draw(i.getshape());
			}	

		}
		
			window.display();
	}
