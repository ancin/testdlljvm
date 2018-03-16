#include "library.h"

#include <iostream>

void hello() {
    std::cout << "Hello, World!" << std::endl;
}

JNIEXPORT jint JNICALL Agent_OnLoad(JavaVM *jvm, char *options,void *reserved)
{
    printf("=====jvm call staring======");
    jvmtiEnv *jvmti;
    jint result = jvm->GetEnv((void **) &jvmti, JVMTI_VERSION_1_0);
    if (result != JNI_OK)
    {
        printf("ERROR: Unable to access JVMTI!\n");
    }
    jvmtiError err = (jvmtiError) 0;
    jclass *classes;
    jint count;
    printf("%d \n",count);

    err = jvmti->GetLoadedClasses(&count, &classes);
    if (err)
    {
        printf("ERROR: JVMTI GetLoadedClasses failed!\n");
    }

    printf("===jvm on load===");
    return err;
}
//}

JNIEXPORT void JNICALL Agent_OnUnload(JavaVM *vm)
{
    printf("END onUnload JVM.");
}