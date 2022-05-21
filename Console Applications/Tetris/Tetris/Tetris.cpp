// Robert Calero
// Tetris in C++

#include <iostream>

using namespace std;

wstring tetromino[7];	// wide string
int nFieldWidth = 12;
int nFieldHeight = 18;
unsigned char* pField = nullptr;

int Rotate(int px, int py, int r)
	{
		int pi = 0;
		switch (r % 4)
			{
				case 0: // 0 degrees				//  0  1  2  3
					pi = py * 4 + px;			    //  4  5  6  7
					break;						    //  8  9 10 11
													// 12 13 14 15

				case 1: // 90 degrees				// 12  8  4  0
					pi = 12 + py - (px * 4);		// 13  9  5  1
					break;							// 14 10  6  2
													// 15 11  7  3

				case 2: // 180 degrees				// 15 14 13 12
					pi = 15 - (py * 4) - px;		// 11 10  9  8
					break;							// 7  6  5  4
													// 3  2  1  0

				case 3: // 270 degrees				// 3 7 11 15
					pi = 3 - py + (px * 4);			// 2 6 10 14
					break;							// 1 5  9 13
			}											// 0 4  8 12
		return pi;
	}

int main()
	{
		// create assets
		tetromino[0].append(L"..X...X...X...X."); // Tetronimos 4x4
		tetromino[1].append(L"..X..XX...X.....");
		tetromino[2].append(L".....XX..XX.....");
		tetromino[3].append(L"..X..XX..X......");
		tetromino[4].append(L".X...XX...X.....");
		tetromino[5].append(L".X...X...XX.....");
		tetromino[6].append(L"..X...X..XX.....");

		pField = new unsigned char[nFieldWidth * nFieldHeight]; // Create play field buffer
		for (int x = 0; x < nFieldWidth; x++) // Board Boundary
			{
				for (int y = 0; y < nFieldHeight; y++)
				{
					pField[y * nFieldWidth + x] = (x == 0 || x == nFieldWidth - 1 || y == nFieldHeight - 1) ? 9 : 0;
				}
			}

		system("pause");
		return 0;
	}