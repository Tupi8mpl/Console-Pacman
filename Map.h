#pragma once
#include <iostream>
#include <windows.h>
#include "Pacman.h"
#include "Monster.h"
#include "Fruit.h"
#include "Pacman.h"
#define size_map_y 22
#define size_map_x 26
class Pacman;
class Monster;
class Fruit;

class Map {
	char map[size_map_y][size_map_x]{
"|-----------------------|",//0
"|'''''''''''|'''''''''''|",//1
"|'|||'|||||'|'|||||'|||'|",//2
"|'|||'|||||'|'|||||'|||'|",//3
"|'''''''''''''''''''''''|",//4
"|'|||'|'---------'|'|||'|",//5
"|'''''|'''''|'''''|'''''|",//6
"|----'|---  |  ---|'-----",//7
"    |'|           |'|   ",//8
"-----'|  |-----|  |'-----",//9
"     '   |     |   '     ",//10
"-----'|  -------  |'-----",//11
"    |'|           |'|    ",//12
"-----'|  -------  |'-----",//13
"|'''''''''''|'''''''''''|",//14
"|'--|'-----'|'-----'---'|",//15
"|'''|'''''''''''''''|'''|",//16
"|--'|'|''-------''|'|'--|",//17
"|'''''|'''''|'''''|'''''|",//18
"|'--------''|''--------'|",//19
"|'''''''''''''''''''''' |",//20
"|-----------------------|",//21
};
public:
	void draw_map();
	void collected_coin();
	friend class Pacman;
	friend class Monster;
	friend class Fruit;
};

//void draw_map();
//void update_map(char map[size_map_y][size_map_x]);

extern HANDLE hStdOut;
extern Monster monsterZ;
extern Monster monsterN;
extern Monster monsterM;
extern Fruit fruit;
extern Pacman pacman;
extern int num_coin;