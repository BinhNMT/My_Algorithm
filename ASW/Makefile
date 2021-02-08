CC = gcc
TARGET = unitTest
OBJS += test.o ASW_StoppingDistance.o
HDR += ASW_StoppingDistance.h ASW_ConfigParameters.h
SRC = ASW_StoppingDistance.c

${TARGET}: ${OBJS}
	${CC} -o ${TARGET} ${OBJS}

test.o: test.c ${HDR}
	${CC} -c test.c

ASW_StoppingDistance.o: ${SRC} ${HDR}
	${CC} -c ${SRC}
clean:
	rm -rf ${TARGET} ${OBJS}