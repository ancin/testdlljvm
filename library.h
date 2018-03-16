
#include <windows.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "jvmti.h"

#pragma once


JNIEXPORT jint JNICALL Agent_OnLoad(JavaVM *jvm, char *options, void *reserved);
JNIEXPORT void JNICALL Agent_OnUnload(JavaVM *vm);