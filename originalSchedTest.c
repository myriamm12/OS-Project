////fork 20times peont pid;id 1000 times


#include "user.h"
#include "types.h"
#include "fcntl.h"
#include "stat.h"
//#include "stdio.h"


int main(int argc, char *argv[]){

int id;
for(int i=0;i<10;i++){

id = fork();
if(id<0){
    printf(1,"fork failed");
    exit();
}
else if(id==0){ //child
    printf(1,"[process %d] : [print number %d]",getpid(),i);
}
else{//parent
     wait();
}
}

calculateTime();

}