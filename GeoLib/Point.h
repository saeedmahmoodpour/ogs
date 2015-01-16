/**
 * \file
 * \author Thomas Fischer
 * \date   2010-01-12
 * \brief  Definition of the Point class.
 *
 * \copyright
 * Copyright (c) 2012-2015, OpenGeoSys Community (http://www.opengeosys.org)
 *            Distributed under a Modified BSD License.
 *              See accompanying file LICENSE.txt or
 *              http://www.opengeosys.org/project/license
 *
 */

#ifndef POINT_H_
#define POINT_H_

// STL
#include <limits>

// GeoLib
#include "GeoObject.h"

// MathLib
#include "MathLib/MathPoint.h"

namespace GeoLib
{
/**
 * \ingroup GeoLib
 */

class Point : public MathLib::MathPoint, public GeoLib::GeoObject
{
public:
	Point(double x1, double x2, double x3) :
		MathLib::MathPoint(), GeoLib::GeoObject()
	{
		this->_x[0] = x1;
		this->_x[1] = x2;
		this->_x[2] = x3;
	}

	Point() :
		MathLib::MathPoint(), GeoLib::GeoObject()
	{}

	Point (double const* x) :
		MathLib::MathPoint(x), GeoLib::GeoObject()
	{}

	/// return a geometry type
	virtual GEOTYPE getGeoType() const {return GEOTYPE::POINT;}
};

static const Point ORIGIN(0, 0, 0);
}

#endif /* POINT_H_ */

