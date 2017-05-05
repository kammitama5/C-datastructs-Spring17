#include <iostream>
#include <vector>
#include <string>
#include <time.h>
#include <conio.h>
#include <Windows.h>

// use enums
enum eDir{ STOP = 0, LEFT = 1, UPLEFT = 2, DOWNLEFT = 3, RIGHT = 4, UPRIGHT = 5, DOWNRIGHT = 6 };

using namespace std;

class cBall{
private:
	int x, y;
	int originalX, originalY;
	eDir direction;
public:
	// position of X and Y for ball
	cBall(int posX, int posY)
	{
		originalX = posX;
		originalY = posY;
		x = posX;
		y = posY;
		direction = STOP;
	}
	// reset function
	void Reset()
	{
		x = originalX; y = originalY; 
		direction = STOP;
	}
	void changeDirection(eDir d)
	{
		direction = d;
	}

	// change direction to be random
	void randomDirection()
	{
		direction = (eDir)((rand() % 6) + 1);
	}


	// inline getX, getY, getDirection
	inline int getX()
	{
		return x;
	}
	inline int getY()
	{
		return y;
	}
	inline eDir getDirection()
	{
		return direction;
	}

	// main move function
	void Move()
	{
		switch (direction)
		{
		case STOP:
			break;
		case LEFT:
			x--;
			break;
		case RIGHT:
			x++;
		case UPLEFT:
			x--; y--;
			break;
		case DOWNLEFT:
			x--; y++;
			break;
		case UPRIGHT:
			x++; y--;
			break;
		case DOWNRIGHT:
			x++; y++;
			break;
		default:
			break;
		}
	}
	friend ostream & operator<<(ostream & o, cBall c)
	{
		o << "Ball [" << c.x << "," << c.y << "][" << c.direction << "]" << endl;
		return o;
	}
};
class cPaddle
{
private:
	int x, y;
	int originalX, originalY;
public:
	cPaddle()
	{
		x = y = 0;
	}
	cPaddle(int posX, int posY) : cPaddle()
	{
		originalX = posX;
		originalY = posY;
		x = posX;
		y = posY;
	}
	inline void Reset()
	{
		x = originalX;
		y = originalY;
	}
	inline int getX()
	{
		return x;
	}
	inline int getY()
	{
		return y;
	}
	inline void moveUp()
	{
		y--;
	}
	inline void moveDown()
	{
		y++;
	}
	friend ostream & operator<<(ostream & o, cPaddle c)
	{
		o << "Paddle [" << c.x << "," << c.y << "]";
		return o;
	}



};
class cGameManager
{
private:
	int width, height;
	int score1, score2;
	char up1, down1, up2, down2;
	bool quit;
	cBall *ball;
	cPaddle *player1;
	cPaddle *player2;
public:
	cGameManager(int w, int h)
	{
		srand(time(NULL));
		quit = false;
		up1 = 'w'; up2 = 'i';
		down1 = 's'; down2 = 'k';
		score1 = score2 = 0;
		width = w; height = h;
		ball = new cBall(w / 2, h / 2);
		player1 = new cPaddle(1, h / 2 - 3);
		player2 = new cPaddle(w - 2, h / 2 - 3); // one block from right of height window
	}
	~cGameManager()
	{
		delete ball, player1, player2; // prevent memory leak!
	}
	void ScoreUp(cPaddle *player)
	{
		if (player == player1)
		{
			score1++;
		}
		else if (player == player2)
		{
			score2++;
		}
		ball->Reset(); // reset the ball
		player1->Reset(); // reset the player
		player2->Reset();
	}
	void Draw()
	{
		system("cls");
		// top wall
		for (int i = 0; i < width + 2; i++)
			cout << "\xB2";
		cout << endl;

		for (int i = 0; i < height; i++)
		{
			for (int j = 0; j < width; j++)
			{
				int ballx = ball->getX();
				int bally = ball->getY();
				int player1x = player1->getX();
				int player2x = player2->getX();
				int player1y = player1->getY();
				int player2y = player2->getY();

				if (j == 0)
					cout << "\xB2"; // print wall
				// print logic map and logic of ball
				if (ballx == j && bally == i)
					cout << "\x9B"; // ball
				else if (player1x == j && player1y == i)
					cout << "\xDB"; // player one
				else if (player2x == j && player2y == i)
					cout << "\xDB"; // player two
				//player one
				else if (player1x == j && player1y + 1 == i)
					cout << "\xDB"; // player one
				else if (player1x == j && player1y + 2 == i)
					cout << "\xDB"; // player one
				else if (player1x == j && player1y + 3 == i)
					cout << "\xDB"; // player one
				//player two
				else if (player2x == j && player2y + 1 == i)
					cout << "\xDB"; // player one
				else if (player2x == j && player2y + 2 == i)
					cout << "\xDB"; // player one
				else if (player2x == j && player2y + 3 == i)
					cout << "\xDB"; // player one
				else
					cout << " ";
				if (j == width - 1)
					cout << "\xB2";
			}
			cout << endl;

		}

		// bottom wall
		for (int i = 0; i < width + 2; i++)
			cout << "\xB2";
		cout << endl;
	

		cout << "Score 1: " << score1 << endl;
		cout << "Score 2:" << score2 << endl;
	}
	void Input()
	{
		ball->Move();

		int ballx = ball->getX();
		int bally = ball->getY();
		int player1x = player1->getX();
		int player2x = player2->getX();
		int player1y = player1->getY();
		int player2y = player2->getY();

		if (_kbhit())
		{
			// player 1 move up
			char current = _getch();
			if (current == up1)
				if (player1y > 0)
					player1->moveUp();
			// player 2 move up
			if (current == up2)
				if (player2y > 0)
					player2->moveUp();
			// player 1 move down
			if (current == down1)
				if (player1y + 4 < height)
					player1->moveDown();
			// player 2 move down
			if(current == down2)
				if (player2y + 4 < height)
					player2->moveDown();
			// if ball == stop, randomize direction
			if (ball->getDirection() == STOP)
				ball->randomDirection();
			// if q, quit game
			if (current == 'q')
				quit = true;
		}
	}
	void Logic()
	{
		int ballx = ball->getX();
		int bally = ball->getY();
		int player1x = player1->getX();
		int player2x = player2->getX();
		int player1y = player1->getY();
		int player2y = player2->getY();
		
		//left paddle
		for (int i = 0; i < 4; i++)
			if (ballx == player1x + 1)
				if (bally == player1y + i)
					ball->changeDirection((eDir)((rand() % 3) + 4)); // get 4 values 

		//right paddle
		for (int i = 0; i < 4; i++) // 4 is paddle height
			if (ballx == player2x - 1)
				if (bally == player2y + i)
					ball->changeDirection((eDir)((rand() % 3) + 1)); // get 4 values 
		// bottom wall
		if (bally == height - 1)
			ball->changeDirection(ball->getDirection() == DOWNRIGHT ? UPRIGHT : UPLEFT);
		// top wall
		if (bally == 0)
			ball->changeDirection(ball->getDirection() == UPRIGHT ? DOWNRIGHT : DOWNLEFT);
		// right wall
		if (ballx == width - 1)
			ScoreUp(player1);
		// left wall
		if (ballx == 0)
			ScoreUp(player2);
	}
	void Run()
	{
		while (!quit)
		{
			Draw();
			Input();
			Logic();
			Sleep(60);
		}
	}
	
};

int main(){


	cGameManager c(40, 20);
	c.Run();

	/*cPaddle p1(0, 0);
	cPaddle p2(10, 0);

	cout << p1 << endl;
	cout << p2 << endl;
	p1.moveUp();
	p2.moveDown();
	cout << p1 << endl;
	cout << p2 << endl;
*/




	//cBall c(0, 0); // create an object c


	// Test ball movements
	/*cout << c << endl;
	c.randomDirection();
	cout << c << endl;
	c.Move();
	cout << c << endl;
	c.randomDirection();
	c.Move();
	cout << c << endl;
	c.randomDirection();
	c.Move();
	cout << c << endl;*/



	system("PAUSE");



	return 0;
}