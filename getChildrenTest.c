//this simply calls getChild systemcall in xv6

#include "user.h"
#include "types.h"
#include "fcntl.h"
#include "stat.h"


int main(int argc, char *argv[]){

int id;
int childrenID;
fork();
fork();

//getting currnet process ID
id = getpid(); 

printf(1,"the current  process ID is \n %d\n",getpid());
printf(1,"the current  process PID is \n %d\n",getppid());


childrenID = getChild(id);

printf(1,"parent is ** %d ** and his children are ** %d **\n",id,childrenID);

exit();

}
