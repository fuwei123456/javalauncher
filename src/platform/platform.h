#ifndef PLATFORM_H
#define	PLATFORM_H

#include "../log4z/log4z.h"
#ifdef WIN32
#include <windows.h>
#endif

class Platform {
public:
	static void createConsole();
	static void launchApplication(std::string application, char** argv);
private:
	Platform();
};

#endif	/* PLATFORM_H */
