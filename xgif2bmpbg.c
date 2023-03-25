#define NOBUILD_IMPLEMENTATION
#include "nobuild.h"

#define SLEEP_MS 16

int main(int argc, char **argv) {

    argc--; // remove argument[0]

    // If there is no argument supplied or more than one argument
    // print usage
    if (argc == 0 || argc > 1) {
        INFO("usage: xgif2bmpbg [folder]");
        exit(0);
    }

    char *folder = argv[1]; // save folder name
    char *file; // make a pointer to the file names

    while (1) {
        // For each file thats not '.' or '..'
        // and ends with a bmp (the check looks disgusting :( sorry)
        // set it as a background with feh
        // and sleep for SLEEP_MS
        FOREACH_FILE_IN_DIR(file, folder,
            if (strcmp(file, ".") == 0 || strcmp(file, "..") == 0) continue;
            if (file[strlen(file)-1] == 'p' &&
                file[strlen(file)-2] == 'm' &&
                file[strlen(file)-3] == 'b') {
                SILENT_CMD("feh", "--bg-scale", PATH(folder,file));
                usleep(SLEEP_MS*1000);
            }
        );
    }
    return 0;
}
