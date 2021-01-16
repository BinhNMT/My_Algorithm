CC = gcc
TARGET = app
OBJS += test.o LinearIntpol.o
HDR = LinearIntpol.h

${TARGET}: ${OBJS}
	${CC} -o ${TARGET} ${OBJS}

test.o: test.c ${HDR}
	${CC} -c test.c

LinearIntpol.o: LinearIntpol.c LinearIntpol.h
	${CC} -c LinearIntpol.c

clean:
	rm -rf ${TARGET} ${OBJS}