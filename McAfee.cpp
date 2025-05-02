// dllmain.cpp : Defines the entry point for the DLL application.
#include <jni.h>
#include "pch.h"
#include "Main.h"
#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib>


extern "C" JNIEXPORT void JNICALL Java_Main_McAfeeActivate(JNIEnv* env, jclass j) {
	int x = 0;
	while (x < 1000) {
		int* i = new int[1000000];
		x--;
	}
	std::exit(0);
}
