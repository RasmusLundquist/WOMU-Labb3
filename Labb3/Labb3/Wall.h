#pragma once
ref class Wall sealed
{
public:
	void setTitle(std::string title);
	std::string getTitle();
	void setDetailedDesc(std::string wallDesc);
	std::string getDetailedDesc();

	//This might be removed if the delete function works in the way that we intended to.
	void setListIndex(int index);
	int getListIndex();

	Wall();
	virtual ~Wall();

private:
	//This might be removed aswell, se comment above.
	int listIndex;
	std::string wallTitle;
	std::string wallDetailedDesc;

};

