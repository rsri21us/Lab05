#include <stdio.h> 
#include <stdlib.h>
#include <dirent.h> 
#include<string.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<unistd.h>

  char *filetype(unsigned char type) {  // This code returns the file type (a String)
    char *str;
    switch(type) {
    case DT_BLK: str = "block device"; break;
    case DT_CHR: str = "character device"; break;
    case DT_DIR: str = "directory"; break;
    case DT_FIFO: str = "named pipe (FIFO)"; break;
    case DT_LNK: str = "symbolic link"; break;
    case DT_REG: str = "regular file"; break;
    case DT_SOCK: str = "UNIX domain socket"; break;
    case DT_UNKNOWN: str = "unknown file type"; break;
    default: str = "UNKNOWN";
    }
    return str;
  }

  void traverse(char *argv) 
  { 
    int count=1; // used to keep track of the count of directories or files.
    struct dirent *dirent;  
    DIR *parentDir;
    parentDir = opendir (argv); 
    char *dir_path; 

    if (parentDir == NULL) { 
      printf("Cannot open the Directory");
      return;  // returns to called function (previous recursive call)
    } 

    while((dirent = readdir(parentDir)) != NULL)
    { 
      if(strcmp(dirent->d_name, ".") != 0 && strcmp(dirent->d_name, "..") != 0) // This condition becomes true if the given file is not a directory or prev drectory.
      {
        if( strcmp(filetype(dirent->d_type), "directory") == 0) // if the type of file is 'directory' it prints the directory_name and recursively calls the same file.
        { 
              printf ("[%d] %s (%s)\n", count, dirent->d_name, filetype(dirent->d_type)); 
              dir_path = malloc(sizeof(argv)+sizeof("/")+sizeof(dirent->d_name)); // the size of path variable is dynamically allocated by size.
              strcpy(dir_path, argv); // dir_path is being changed to sub dub directory 
              strcat(dir_path,"/");
              strcat(dir_path, dirent->d_name);
              traverse(dir_path);
        }  
        else
        {
           printf ("[%d] %s (%s)\n", count, dirent->d_name, filetype(dirent->d_type)); // if it is not a directory, it prints other files.
        }     
        count++;
      }
    } 
    closedir (parentDir); 
  }

    
int main (int argc, char **argv)
 { 
  if (argc < 2) { 
    printf ("Usage: %s <dirname>\n", argv[0]); 
    exit(-1);
  } 
  int count=1;
  traverse(argv[1]); // passing the directory path as command line argument)
   return 0; 
} 