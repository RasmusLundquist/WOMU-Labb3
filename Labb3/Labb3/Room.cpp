#include "pch.h"
#include "Room.h"

using namespace std;

void Room::setTitle(string title)
{
	roomTitle = title;
}

std::string Room::getTitle()
{
	return roomTitle;
}

void Room::setDetailedDesc(string roomDesc)
{
	detailedDesc = roomDesc;
}

std::string Room::getDetailedDesc()
{
	return detailedDesc;
}

Room::Room()
{
}


Room::~Room()
{
}

void Room::setCoordinates(int x, int y)
{
	//The params x and y could be a different datatype, depending on what the gps sensor is returning as it's type.

	throw ref new Platform::NotImplementedException();
}

int Room::getCoordinates()
{
	//This function should return the datatype which represents the gps coordinates for the room.
	//How this is used is still a mystery and should be resolved.
	return 0;
}

void Room::addWall(Wall someWall)
{
	//this row might be removed if the delete function works as we want it to. No need  to save the indexes for the rooms.
	someWall.setListIndex(roomWalls.size());
	roomWalls.push_back(someWall);
	
}

void Room::removeWall(Wall wallDelete)
{
	//If this works then we can delete index stored in  the rooms aswell as the accessor functions for these.
	roomWalls.remove(wallDelete);
}

std::list<Wall> Room::getWalls()
{
	return roomWalls;
}
