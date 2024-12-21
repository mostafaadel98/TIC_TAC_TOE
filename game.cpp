#include <iostream>
using namespace std;

// awl haga 3yz a3mlha heya el array nafsaha

char Pattern[3][3] = { {'1','2','3'} ,{'4','5','6'} , {'7','8','9'} };
int row, col;
char token = 'X';
int flag = 0;
int winx = 0;
int winy = 0;
int counter = 0;

void format()
{

	cout << "\t" << "|" << "\t" << "|" << endl;
	cout << "      " << Pattern[0][0] << " " << "|" << "   " << Pattern[0][1] << "   " << "|" << " " << Pattern[0][2] << endl;
	cout << "  ______" << "|" << "_______" << "|" << "______" << endl;
	cout << "\t" << "|" << "\t" << "|" << endl;
	cout << "      " << Pattern[1][0] << " " << "|" << "   " << Pattern[1][1] << "   " << "|" << " " << Pattern[1][2] << endl;
	cout << "  ______" << "|" << "_______" << "|" << "______" << endl;
	cout << "\t" << "|" << "\t" << "|" << endl;
	cout << "      " << Pattern[2][0] << " " << "|" << "   " << Pattern[2][1] << "   " << "|" << " " << Pattern[2][2] << endl;
	cout << "\t" << "|" << "\t" << "|" << endl;
}
void functionOne()
{
	
	cout << "\t" << "|" << "\t" << "|" << endl;
	cout << "      " << Pattern[0][0] << " " << "|" << "   " << Pattern[0][1] << "   " << "|" << " " << Pattern[0][2] << endl;
	cout << "  ______" << "|" << "_______" << "|" << "______" << endl;
	cout << "\t" << "|" << "\t" << "|" << endl;
	cout << "      " << Pattern[1][0] << " " << "|" << "   " << Pattern[1][1] << "   " << "|" << " " << Pattern[1][2] << endl;
	cout << "  ______" << "|" << "_______" << "|" << "______" << endl;
	cout << "\t" << "|" << "\t" << "|" << endl;
	cout << "      " << Pattern[2][0] << " " << "|" << "   " << Pattern[2][1] << "   " << "|" << " " << Pattern[2][2] << endl;
	cout << "\t" << "|" << "\t" << "|" << endl;
	int pos = 0;
	cin >> pos; 
	if (pos == 1)
	{
		row = 0;
		col = 0;
	}
	else if (pos == 2)
	{
		row = 0;
		col = 1;
	}
	else if (pos == 3)
	{
		row = 0;
		col = 2;
	}

	else if (pos == 4)
	{
		row = 1;
		col = 0;
	}
	else if (pos == 5)
	{
		row = 1;
		col = 1;
	}
	else if (pos == 6)
	{
		row = 1;
		col = 2;
	}


	else if (pos == 7)
	{
		row = 2;
		col = 0;
	}
	else if (pos == 8)
	{
		row = 2;
		col = 1;
	}
	else  if (pos == 9)
	{
		row = 2;
		col = 2;
	}

	else
	{
		cout << "invalid input " << endl;
	}
	if (Pattern[row][col] != 'X' && Pattern[row][col] != '0' && flag == 0)
	{
		Pattern[row][col] = 'X';
		counter++;
		flag = 1;
	}
	else if (Pattern[row][col] != 'X' && Pattern[row][col] != '0' && flag == 1)
	{
		Pattern[row][col] = '0';
		counter++;
		flag = 0;
	}

	
	
}

bool check_function()
{
	if (counter < 9)
	{

		for (int i = 0; i < 3; i++)
		{
			if (Pattern[i][0] == 'X' && Pattern[i][1] == 'X' && Pattern[i][2] == 'X' ||
				Pattern[0][i] == 'X' && Pattern[1][i] == 'X' && Pattern[2][i] == 'X')
			{
				winx = 1;
				return true;
			}
			else if (Pattern[i][0] == '0' && Pattern[i][1] == '0' && Pattern[i][2] == '0' ||
				Pattern[0][i] == '0' && Pattern[1][i] == '0' && Pattern[2][i] == '0')
			{
				winy = 1;
				return true;
			}




		}
		if (Pattern[0][0] == 'X' && Pattern[1][1] == 'X' && Pattern[2][2] == 'X' ||
			Pattern[0][2] == 'X' && Pattern[1][1] == 'X' && Pattern[2][0] == 'X')
		{
			winx = 1;
			return true;
		}
		else if (Pattern[0][0] == '0' && Pattern[1][1] == '0' && Pattern[2][2] == '0' ||
			Pattern[0][2] == '0' && Pattern[1][1] == '0' && Pattern[2][0] == '0')
		{
			winy = 1;
			return true;
		}
		return false;
	}
	else
	{
		return true;

	}
	 



}

int main()
{
	
	cout << "Player 1 's token is X ||||||||||||||||||| player 2's token is 0" << "\n\n\n" << endl;
	cout << " To Play with X press 0 \n " <<
		"To Play with 0 press 1 \n" << endl;
	cin >>flag;

	while (!check_function())
	{
		functionOne();
		
	}
	if (winx == 1)
	{
		format();
		cout << "Player 1 winsssss" << endl;
	}
	if (winy == 1)
	{
		format();
		cout << "Player 2 winsssss" << endl;
	}
		
	else if ((winy == 0) && (winx == 0))
	{
		format();
		cout << "Ta3adolll" << endl;
	}
	
}