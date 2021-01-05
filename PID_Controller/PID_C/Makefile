CC = gcc
TARGET = app
OBJS += test.o PID.o
HDR = PID.h
SRC = PID.c

${TARGET}: ${OBJS}
	${CC} -o ${TARGET} ${OBJS}

test.o: test.c ${HDR}
	${CC} -c test.c

PID.o: ${SRC} ${HDR}
	${CC} -c ${SRC}
clean:
	rm -rf ${TARGET} ${OBJS}