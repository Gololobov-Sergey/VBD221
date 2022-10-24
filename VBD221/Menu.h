#pragma once
#include<conio.h>
#include<iomanip>
#include<Windows.h>
#include"Function.h"

enum DIRECTION
{
	UP_DIR = 72, DOWN_DIR = 80, LEFT_DIR = 75, RIGHT_DIR = 77, ESC = 27, ENTER = 13
};

enum class HORIZONTAL_POSITION
{
	LEFT, CENTER, RIGHT
};


enum class VERTICAL_POSITION
{
	TOP, CENTER, BOTTOM
};

enum class ALLIGNMENT
{
	LEFT, CENTER, RIGHT
};

int vertical_menu(char** menuItem, HORIZONTAL_POSITION hp, VERTICAL_POSITION vp, ALLIGNMENT allignment)
{

	HANDLE wHnd = GetStdHandle(STD_OUTPUT_HANDLE);

	CONSOLE_SCREEN_BUFFER_INFO consoleInfo;
	GetConsoleScreenBufferInfo(wHnd, &consoleInfo);
	int width = consoleInfo.dwSize.X;
	int height = consoleInfo.dwSize.Y;

	CONSOLE_CURSOR_INFO structCursorInfo;
	GetConsoleCursorInfo(wHnd, &structCursorInfo);
	structCursorInfo.bVisible = FALSE;
	SetConsoleCursorInfo(wHnd, &structCursorInfo);



	int size = _msize(menuItem) / sizeof(char*);
	int maxLength = 0;
	for (size_t i = 0; i < size; i++)
	{
		if (strlen(menuItem[i]) > maxLength)
			maxLength = strlen(menuItem[i]);
	}

	int x, y;

	switch (hp)
	{
	case HORIZONTAL_POSITION::LEFT:     x = 1;                       break;
	case HORIZONTAL_POSITION::CENTER:   x = (width - maxLength) / 2; break;
	case HORIZONTAL_POSITION::RIGHT:    x = width - maxLength - 1;   break;
	}

	switch (vp)
	{
	case VERTICAL_POSITION::TOP:      y = 1;                   break;
	case VERTICAL_POSITION::CENTER:   y = (height - size) / 2; break;
	case VERTICAL_POSITION::BOTTOM:   y = height - size - 1;   break;
	}

	char** menuItemChanged = new char* [size];
	char space[] = "                              ";
	for (size_t i = 0; i < size; i++)
	{
		menuItemChanged[i] = new char[maxLength + 1];
		menuItemChanged[i][0] = '\0';
		switch (allignment)
		{
		case ALLIGNMENT::LEFT:
			strcat(menuItemChanged[i], menuItem[i]);
			strncat(menuItemChanged[i], space, maxLength - strlen(menuItem[i]));
			break;
		case ALLIGNMENT::CENTER:
			strncat(menuItemChanged[i], space, (maxLength - strlen(menuItem[i])) / 2);
			strcat(menuItemChanged[i], menuItem[i]);
			strncat(menuItemChanged[i], space, maxLength - strlen(menuItem[i]) - (maxLength - strlen(menuItem[i])) / 2);
			break;
		case ALLIGNMENT::RIGHT:
			strncat(menuItemChanged[i], space, maxLength - strlen(menuItem[i]));
			strcat(menuItemChanged[i], menuItem[i]);
			break;
		}

	}

	int position = 0;

	char choise;

	do
	{
		// print
		for (size_t i = 0; i < size; i++)
		{
			if (i == position)
			{
				SetColor(Black, White);
			}
			else
			{
				SetColor(White, Black);
			}
			gotoxy(x, y + i);
			cout << setw(maxLength) << menuItemChanged[i];
		}

		//click
		choise = _getch();

		switch (choise)
		{
		case UP_DIR:
			if (position > 0)
				position--;
			break;
		case DOWN_DIR:
			if (position < size - 1)
				position++;
			break;
		case ESC:
			return -1;

		default: break;
		}
	} while (choise != ENTER);

	for (size_t i = 0; i < 2; i++)
	{

		SetColor(White, Black);
		gotoxy(x, y + position);
		cout << setw(maxLength) << menuItemChanged[position];
		Sleep(200);

		SetColor(Black, White);
		gotoxy(x, y + position);
		cout << setw(maxLength) << menuItemChanged[position];
		Sleep(200);
	}
	SetColor(White, Black);
	structCursorInfo.bVisible = TRUE;
	SetConsoleCursorInfo(wHnd, &structCursorInfo);

	///// Alt CLS
	char* voidItem = new char[maxLength + 1];
	for (size_t i = 0; i < maxLength; i++) voidItem[i] = ' ';
	voidItem[maxLength] = '\0';
	for (size_t i = 0; i < size; i++)
	{
		gotoxy(x, y + i);
		cout << voidItem;
	}

	//system("cls");
	return position;
}
