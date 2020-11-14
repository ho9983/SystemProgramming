/*handlersignal + ignoresignal*/
#include <stdio.h>
#include <signal.h>
#include <unistd.h>
#include <stdlib.h>

void handlerSignal();
void handler(int signo);
void ignoreSignal();

int main(){
	int num;
	printf("\n1 : handlerSignal 2 : ignoresignal 0 : exit. \ninsert:");
	scanf("%d",&num);
	while(1){
		if(num == 1) handlerSignal();
		else if(num == 2) ignoreSignal();
		else if(num == 0) exit(1);
		else {printf("\nI dont know what you want\n"); break;}
	}
}

void handlerSignal() {
	struct sigaction act;
	int i=0;
	act.sa_handler = handler;
	sigfillset(&(act.sa_mask));
	sigaction(SIGINT,&act,NULL);
	printf("SIGINT on n");
	while(1) {
		sleep(1);
		printf("sleep for %d sec(s). \n", ++i);
	}
}

void handler(int signo) {
	printf("handler: signo= %d \n", signo);
}

void ignoreSignal(){
	struct sigaction act;
	int i = 0;
	act.sa_handler = SIG_IGN;
	sigfillset(&(act.sa_mask));
	sigaction(SIGINT,&act,NULL);
	printf("SIGINT off \n");
	while(1) {
		sleep(1);
		printf("sleep for %d sec(s) \n", ++i);
	}
}
