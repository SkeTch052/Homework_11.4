#pragma once
#include "Triangle.h"
#ifndef DYNLIBFIGURES_EXPORTS
#define DYNLIBFIGURES_API __declspec(dllexport)
#else
#define DYNLIBFIGURES_API __declspec(dllimport)
#endif
namespace Figures_ns
{
	class Equilateral_Triangle : public Triangle { public: DYNLIBFIGURES_API Equilateral_Triangle(); };
}