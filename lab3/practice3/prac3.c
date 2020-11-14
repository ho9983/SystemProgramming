#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <dirent.h>

void showDirStruct(const char *name);

int main(void) {
    showDirStruct(".");
    return 0;
}

void showDirStruct(const char *name){
    DIR *dir;
    struct dirent *fileInDir;
    char array[20][100];
    char *pathArray[20];
    char path[1024];
    int pnum=0, num=0;
    
    for(int a = 0; a<20; a++)
        pathArray[a] = NULL;
    for(int b = 0; b<20; b++){
        for(int c = 0; c<100; c++)
            array[b][c] = 0;
    }
    if (!(dir = opendir(name))) return;

    printf("%s: \n", name);
    while ((fileInDir = readdir(dir)) != NULL) {
        if (fileInDir->d_type == DT_DIR) {
            if (strcmp(fileInDir->d_name, ".") == 0 || strcmp(fileInDir->d_name, "..") == 0 
	        || strcmp(fileInDir->d_name, ".git") == 0)
                continue;
            snprintf(path, sizeof(path), "%s/%s", name, fileInDir->d_name);
            for(int d = 0; d< strlen(path); d++){
                array[pnum][d] = path[d];
            }
            pathArray[pnum] = array[pnum];
            pnum = pnum+1;
            printf("%s  ", pathArray[pnum-1]);
        }
	else { printf("%s  ", fileInDir->d_name); }
    }  
    printf("\n\n");
    while(pathArray[num] != NULL){
        if(pathArray[num] == NULL) break;
        showDirStruct(pathArray[num]);
        num = num+1;
    }
    closedir(dir);
}

