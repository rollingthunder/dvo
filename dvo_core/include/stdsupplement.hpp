#pragma once
#ifndef DVO_STDSUPPLEMENT_HPP
#define DVO_STDSUPPLEMENT_HPP

#ifdef _WIN32
#include <limits>
namespace std
{
	inline bool isIndeterminate(const double pV)
	{
		return (pV != pV);
	} 

	inline bool isInfinite(const double pV)
	{
		return (fabs(pV) == std::numeric_limits<double>::infinity());
	}

	inline bool isfinite(const double arg)
	{
		return !(isInfinite(arg) || isIndeterminate(arg));
	}
}
#endif // _WIN32

#endif