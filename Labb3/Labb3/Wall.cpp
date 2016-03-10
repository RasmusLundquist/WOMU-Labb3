#include "pch.h"
#include "Wall.h"


void Wall::setTitle(std::string title)
{
	wallTitle = title;
}

std::string Wall::getTitle()
{
	return wallTitle;
}

void Wall::setDetailedDesc(std::string wallDesc)
{
	wallDetailedDesc = wallDesc;
}

std::string Wall::getDetailedDesc()
{
	return wallDetailedDesc;
}

void Wall::setListIndex(int index)
{
	listIndex = index;
}

int Wall::getListIndex()
{
	return listIndex;
}

Wall::Wall()
{
}


Wall::~Wall()
{
}
