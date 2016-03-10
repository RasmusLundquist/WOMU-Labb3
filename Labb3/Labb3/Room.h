#pragma once
#include "Wall.h"


ref class Room 
{
public:
	void setTitle(std::string title);
	std::string getTitle();
	void setDetailedDesc(std::string roomDesc);
	std::string getDetailedDesc();

	void setCoordinates(int x, int y);
	int getCoordinates();

	void addWall(Wall someWall);
	void removeWall(Wall wallDelete);
	std::list<Wall> getWalls();

	Room();
	virtual ~Room();

private:
	std::string roomTitle;
	std::string detailedDesc;
	int roomCoordinates;
	std::list<Wall> roomWalls; //Should maybe have some kind of controll, cause  of that the specification said that the room only includes six walls.

	
};

