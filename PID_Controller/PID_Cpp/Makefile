CC = g++
TARGET = app
OBJS += test.o PID.o
HDR = PID.h
SRC = PID.cpp

${TARGET}: ${OBJS}
	${CC} -o ${TARGET} ${OBJS}

test.o: test.cpp ${HDR}
	${CC} -c test.cpp

PID.o: ${SRC} ${HDR}
	${CC} -c ${SRC}
clean:
	rm -rf ${TARGET} ${OBJS}