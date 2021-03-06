#ifndef JVMLAUNCHEREXCEPTION_H
#define	JVMLAUNCHEREXCEPTION_H

#include <iostream>
#include <exception>
#include <stdexcept>
using namespace std;

class JVMLauncherException: public runtime_error {
public:
    JVMLauncherException(const string& message) : runtime_error(message) {
    };
};

#endif	/* JVMLAUNCHEREXCEPTION_H */
