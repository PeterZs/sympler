/*
 * This file is part of the SYMPLER package.
 * https://github.com/kauzlari/sympler
 *
 * Copyright 2002-2013, 
 * David Kauzlaric <david.kauzlaric@frias.uni-freiburg.de>,
 * and others authors stated in the AUTHORS file in the top-level 
 * source directory.
 *
 * SYMPLER is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * SYMPLER is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with SYMPLER.  If not, see <http://www.gnu.org/licenses/>.
 *
 * Please cite the research papers on SYMPLER in your own publications. 
 * Check out the PUBLICATIONS file in the top-level source directory.
 *
 * You are very welcome to contribute extensions to the code. Please do 
 * so by making a pull request on https://github.com/kauzlari/sympler
 * 
 */



#ifndef __THERMOSTAT_WITH_RNG_H
#define __THERMOSTAT_WITH_RNG_H

#include "thermostat.h"
#include "random.h"


class Phase;
class Simulation;


class ThermostatWithRng : public Thermostat
{
 protected:
 
   /*!
   * initialise the property list
   */
   void init();
   
   /*!
   * a random number generator
   */
   RandomNumberGenerator m_rng;
 
 
 public:
 
 
   /*!
   * Constructor
   * @param sim Pointer to the main simulation object
   */
  ThermostatWithRng(Simulation* sim);

  /*!
   * Destructor
   */
  virtual ~ThermostatWithRng();
  
  
  virtual void setup();
};



#endif
