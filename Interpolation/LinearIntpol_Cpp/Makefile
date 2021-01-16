CC = g++
TARGET = app
OBJS += test.o LinearIntpol.o
HDR = LinearIntpol.h

${TARGET}: ${OBJS}
	${CC} -o ${TARGET} ${OBJS}

test.o: test.cpp ${HDR}
	${CC} -c test.cpp

LinearIntpol.o: LinearIntpol.cpp LinearIntpol.h
	${CC} -c LinearIntpol.cpp

clean:
	rm -rf ${TARGET} ${OBJS}