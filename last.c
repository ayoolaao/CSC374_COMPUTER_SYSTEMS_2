// Open a directory
DIR*	dirPtr	= opendir(".");

if  (dirPtr == NULL)
{
  fprintf(stderr,"Could not open .\n");
  exit(EXIT_FAILURE);
}

struct dirEnt*	dirEntryPtr;

dirEntryPtr	= readdir(dirPtr);

if  (dirEntryPtr == NULL)
{
  fprintf(stderr,". is an empty directory\n");
  exit(EXIT_FAILURE);
}

int	socketFD;
const char*	cPtr;

for  ( cPtr  = dirEntryPtr->d_name
      *cPtr != '\0';
       cPtr++
     )
  write(socketFD,cPtr,1);

write(socketFD,cPtr,1);


closedir(dirPtr);