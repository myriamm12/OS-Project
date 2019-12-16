#inlcude "user.h"
#inlcude "types.h"
#include "stat.h"
#include "fcntl.h"


int main(int argc, char *argv[]) {
int id;
fork();
fork();

//getting currnet process ID
id = getpid(); 

printf("the current parent process ID is %d",id)

printf("parent is %d and his children are %d",id,getChild(id));
return 0;


}
