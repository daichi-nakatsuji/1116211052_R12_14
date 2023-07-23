#include <Windows.h>
#include <stdio.h>

#define BUFFSIZE 1024
#define Month 12
#define Day 31

void readFile(const char* file[Month], double data[Month][Day]) {
    FILE* fp;
    char s[BUFFSIZE];
    int count = -1;
    int a = 0;
    char* p1;
    char delim[] = ", ";
    char* ctx;

    errno_t error;
    for (int i = 0; i < Month; i++) {
        error = fopen_s(&fp, file[i], "r");
        if (error != 0)
            fprintf_s(stderr, "failed to open\n");
        else {
            while (fgets(s, BUFFSIZE, fp) != NULL) {
                if (count >= 6) {
                    p1 = strtok_s(s, delim, &ctx);
                    data[i][a] = atof(p1);
                    a += 1;
                }
                count += 1;
            }
            fclose(fp);
        }
    }
}