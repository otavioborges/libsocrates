#ifndef SOCKETFAMILY_H_
#define SOCKETFAMILY_H_

#include <cstdlib>
#include "socrates.h"

enum class socrates::SocketFamily {
	FamilyUnspec	= 0,
	FamilyUnix		= 1,
	FamilyIPv4		= 2,
	FamilyBridge	= 7,
	FamilyIPv6		= 10
};

#endif /* SOCKETFAMILY_H_ */
