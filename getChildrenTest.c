//this simply calls getChild systemcall in xv6

#include "user.h"
#include "types.h"
#include "fcntl.h"
#include "stat.h"


int main(int argc, char *argv[]){

int id;
int childrenID;
int fork1 = fork();
int fork2 = fork();

//getting currnet process ID
id = getpid(); 
if (fork1 > 0 && fork2 > 0){
printf(1,"the current  process ID is \n %d\n",getpid());
printf(1,"the current  process PID is \n %d\n",getppid());
}
else 
printf("fork system call was unsuccessful");

childrenID = getChild(id);
printf(1,"parent is ** %d ** and his children are ** %d **\n",id,childrenID);

exit();

}
