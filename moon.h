// planet.h
// Definition of class planet
#ifndef MOON_H
#define MOON_H

#include<iostream>
#include "unit.h"


class planet : public unit
{
private:
	short x;
	short y;
//	short z;
	char planetName[50];
	short money;
	short fuel;
	short iron;
	short sugar;
	short rice;
	short ironPrice;
	short sugarPrice;
	short ricePrice;
public:
//	planet(short xPos, short yPos, short zPos, char* name) : unit(xPos,yPos,zPos) {x=xPos, y=yPos, z=zPos;} -- going two dims
	planet(short xPos, short yPos, char* name, short m, short f, short i, short s, short r, short ip, short sp, short rp) : unit(xPos,yPos) {x=xPos, y=yPos,/*strcpy(name,planetName),*/fuel=f,money=m,sugar=s,rice=r,iron=i,ironPrice=ip,sugarPrice=sp,ricePrice=rp;}

	void setFuel(short); 
	void setFunds(short); 
	void setPlanetName(char[]);
    void setIron(short);
	void setSugar(short);
	void setRice(short);
	void setIronPrice(short);
	void setSugarPrice(short);
	void setRicePrice(short);


	char* getPlanetName(void);
	short getFuel(void);
	short getFunds(void);
	short getIron(void);
	short getSugar(void);
	short getRice(void);
	short getIronPrice(void);
	short getSugarPrice(void);
	short getRicePrice(void);
	
	~planet();
};
#endif