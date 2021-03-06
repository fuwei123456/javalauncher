#ifndef PLATFORM_H
#define	PLATFORM_H

#include "Logger.h"
#include "utils.h"
#include "JVMLauncherException.cpp"
#include "jni.h"
#ifdef UNIX
#include <fcntl.h>
#include <unistd.h>
#include <cstdio>
#include <iostream>
#endif
#ifdef WIN32
#include <windows.h>
#include <shlobj.h>
#include <ShellScalingApi.h>
#endif
#include <vector>
#include <regex>
#include <fstream>


class Platform {
public:
	typedef jint(JNICALL* CreateJavaVM)(JavaVM**, void**, void*);
	static void createConsole();
	static void launchApplication(std::string application, std::string arguments);
	static bool moveFile(std::string oldFile, std::string newFile);
	static bool deleteFileIfExists(std::string file);
	static bool deleteFile(std::string file);
	static void platformInit();
	static std::string getExePath();
	static std::string addTrailingSlash(std::string directory);
	static std::vector<std::string> listDirectory(std::string directory);
	static std::vector<std::string> listDirectory(std::string directory, std::regex regex);
	static std::string launchApplicationCapturingOutput(std::string application, char** argv);
	static CreateJavaVM getJVMInstance(std::string javaLibrary);
	static std::string getJavaDLLFromRegistry();
	static std::string getRegistryValue(std::string, std::string);
	static std::string getJavaHomeFromRegistry();
private:
	Platform();
};

#endif	/* PLATFORM_H */

