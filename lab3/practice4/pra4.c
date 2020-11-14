#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <termios.h>
#include <sys/types.h>
#include <fcntl.h>
#include <unistd.h>
#include <time.h>
#include <math.h>
#define PASSWORDSIZE 12

void typingFunc();

int main(void){
	typingFunc();
	return 0;
}

void typingFunc() {
	int fd;
	double speed=0, total=0;
	int nread , cnt =0, errcnt = 0, typcnt=0;
	char ch, text[] = "The magic thing is that you can change it.";
	struct termios init_attr, new_attr;
	time_t start_time, end_time; // time.h

	fd = open(ttyname (fileno(stdin)), O_RDWR); 
	tcgetattr(fd, &init_attr);

	new_attr = init_attr;
	new_attr.c_lflag &= ~ICANON;
	new_attr.c_lflag &= ~ECHO; 

	new_attr.c_cc[VMIN] = 1;
	new_attr.c_cc[VTIME] = 0;
	if (tcsetattr(fd, TCSANOW, &new_attr) != 0) {
		fprintf(stderr, "Cannot set the terminal attribute\n");
	}
	printf("@@Type this sentense. It must be the same to the blank.@@ \n%s \n", text);
	start_time = time(NULL); // start timer
	while ((nread=read(fd, &ch, 1)) > 0 && ch != '\n') {
		if (ch == text[cnt++]) {
			write(fd, &ch, 1);
			typcnt++; //typing count
		}
		else {
			write(fd, "?", 1);
			errcnt++; //error count
		}
	}
	end_time = time(NULL); // end timer

	total = difftime(end_time, start_time); // The time between start_time and end_time
	
	speed = typcnt/(total/60); // Get the typing speed per minute
	printf("\nTyping error count is :  %d\n", errcnt);
	printf("Speed average in 1 minute : %.1f\n", speed);
	tcsetattr(fd, TCSANOW, &init_attr);
	close(fd);
}


