/*
 * Interface.h
 *
 *  Created on: 29/03/2018
 *      Author: Jo
 */

#ifndef INTERFACE_H_
#define INTERFACE_H_
#include "Agency.h"
#include "Libraries.h"
#include "ImportInfo.h"
#include "ExportInfo.h"
#include "graphviewer.h"


void initMenu(Agency& agency);
int showMenu(Agency& agency);
bool clientsMenu(Agency& agency);
bool showMap(Agency& agency);
bool flightMenu(Agency& agency);
bool destiniesMenu(Agency& agency);
bool mapMenu(Agency& agency);
bool flightMenu(Agency& agency);


int openMap(Agency& agency);
void updateMap(Agency& agency);
void openMapRoute(std::vector<Destiny> &d);
int closeMap1();
int closeMap2();


int checkAllclients(Agency& agency);
int addClient(Agency& agency);
int checkClient(Agency& agency);


int flightReservation1(Agency& agency);
int flightReservation2(Agency& agency);
int flightReservation3(Agency& agency);
int manyDestinies(Agency& agency);
int getTime(Destiny &d, int id);
int getCost(Destiny &d, int id);


int checkOperatingCities(Agency& agency);
int checkPossibleDestinies(Agency& agency);
int checkAccommodations(Agency& agency);

bool checkDays(std::vector<Date> &dates, int days);

#endif /* INTERFACE_H_ */
