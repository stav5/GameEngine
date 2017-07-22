#pragma once


#define dllspec
#define DEBUG_LOG(x) 
#define RELEASE_LOG(x) 

//Windows specific macros
#ifdef WIN32 || WIN64

	//DLL interface
	#ifdef build_shared
		#define dllspec __declspec(dllexport)
	#else
		#define dllspec __declspec(dllimport)
	#endif


	//Debug logger
	#ifdef _DEBUG
		#define DEBUG_LOG(x) printf("DEBUG:> %s\n",x);
	#endif

	//Release logger
	#ifndef _DEBUG
		#define RELEASE_LOG(x) printf("RELEASE:> %s\n",x);
	#endif


#endif

