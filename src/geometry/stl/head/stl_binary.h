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



#ifndef __STL_BINARY_H
#define __STL_BINARY_H

#include <string>
#include <istream>

#include "general.h"
#include "wall_container.h"


class STLBinaryError: public gError
{
public:
  STLBinaryError(string where, string msg): gError(where, msg) { }
};



class STLBinaryParser
{
protected:
  bool m_invert_normals;

  WallContainer *m_wall_container;

public:
  STLBinaryParser(WallContainer *w);
  virtual ~STLBinaryParser();

  virtual void setInvertNormals(bool invert_normals) {
    m_invert_normals = invert_normals;
  }

  virtual WallContainer *read(istream *s);
  virtual WallContainer *read(string filename);

  static double dist_eps;
};

#endif
