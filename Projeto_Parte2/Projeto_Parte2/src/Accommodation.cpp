/*
 * Accommodation.c
 *
 *  Created on: 23/03/2018
 *      Author: Francisco Miranda; Jo�o Vaz Gama Amaral; Maria Teresa Ferreira;
 */

#include "Accommodation.h"

Accommodation::Accommodation(){
	basePrice = 0;
	name = "";
	periods = *(new std::vector<Period*>());
}

Accommodation::Accommodation(float price, std::string name, std::vector<Period*> periods):
	basePrice(price), name(name), periods(periods){}

int Accommodation::getBasePrice(){
	return basePrice;
}

std::string Accommodation::getName(){
	return name;
}

std::vector<Period*> Accommodation::getAllPeriods(){
	return periods;
}

Period* Accommodation::getPeriod(Date d){
	std::vector<Period*>::iterator it = periods.begin();

	Period *p = new Period();

	for(; it != periods.end(); it++){
		if(d.getMonth() == (*it)->getInitMonth()){
			if(d.getDay() >= (*it)->getInitDay()){
				p = (*it);
				return p;
			}
		}
		if(d.getMonth() > (*it)->getInitMonth() && d.getMonth() < (*it)->getEndMonth()){
			p=(*it);
			return p;
		}
	}
	//std::cout << "No special period in that date." << std::endl;
	return p;
}

int Accommodation::getPrice(Date d){

	float price = this->basePrice;

	std::vector<Period*>::iterator it = periods.begin();

	Period *p = getPeriod(d);

	price += p->getPrice();

	return price;

}
