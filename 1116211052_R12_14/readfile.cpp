#include <Windows.h>
#include <stdio.h>

#define BUFFSIZE 1024
#define CHARBUFF 124
#define Month 12
#define Day 31

void readFile(char file[Month][CHARBUFF], double data[Month][Day]) {
    FILE* fp;
    char s[BUFFSIZE];
    int count;
    char* p1;
    char delim[] = ", ";
    char* ctx;
    
    errno_t error;
    for (int i = 0; i < Month; i++) {
        count = -1;
        error = fopen_s(&fp, file[i], "r");
        if (error != 0)
            fprintf_s(stderr, "failed to open\n");
        else {
            while (fgets(s, BUFFSIZE, fp) != NULL) {
                p1 = strtok_s(s, delim, &ctx);
                if (count >= 0) {
                    p1 = strtok_s(NULL, delim, &ctx);
                    data[i][count] = atof(p1);
                    fprintf_s(stderr, "%lf\n", data[i][count]);
                }
                count += 1;
            }
            fclose(fp);
        }
    }
}