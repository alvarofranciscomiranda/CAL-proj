/*
 * Algorithms.h
 *
 *  Created on: 23/03/2018
 *      Author: Francisco Miranda; Jo�o Vaz Gama Amaral; Maria Teresa Ferreira;
 */

#ifndef SRC_ALGORITHMS_H_
#define SRC_ALGORITHMS_H_

#include "Libraries.h"
#include "Destiny.h"
#include "Agency.h"
#include "Clients.h"
#include "Accommodation.h"
/**
 * @brief Binary search algorithm to search a client by ID
 * @param v clients vector to search
 * @param clients ID
 */
int binarySearchC(const std::vector<Client*> &v, int x);

/**
 * @brief Binary search algorithm to search a client by name
 * @param v clients vector to search
 * @param clients name
 */
int binarySearchC(const std::vector<Client*> &v, std::string x);


/**
 * @brief Function that returns a city by its ID.
 * @param vect Vector of destinies
 * @param ID to find
 */
Destiny searchID(std::vector<Destiny> vect, int ID);

/*
 * @brief Binary search algorithm to search a destiny by name
 * @param d destinies vector to search
 * @param x destiny name
 */

/*
 * @brief Bubble sort algorithm to sort a "Destiny" vector by ID
 * @param destiny_aux destiny vector to be sorted
 */
void bubbleSortD(std::vector<Destiny> destiny_aux);

/*
 * @brief Bubble sort algorithm to sort a "Destiny" vector by name
 * @param destiny_aux destiny vector to be sorted
 */
void bubbleSortDname(std::vector<Destiny> destiny_aux);

/*
 * @brief Selection sort to sort a Destiny vector by name
 * @param d_aux destiny vector to be sorted
 */
void selectionSortD(std::vector<Destiny> &d_aux);

Destiny binarySearchD(const std::vector<Destiny> d, std::string x);

Destiny searchCityName(const std::vector<Destiny> d, std::string x);

bool isPossibleDestiny(const std::vector<PossibleDestinies*> p, Destiny d);

Accommodation searchAccommodation(Destiny& d, std::string acc);

void flush();
/*
void removeReps(std::vector<Destiny>& d){
	for(auto i = d.begin() ; i !=d.end(); i++){
		if(i->getCityName() == (i+1)->getCityName()){
			d.erase(i);
			i--;
		}
	}
}
*/
#endif /* SRC_ALGORITHMS_H_ */
