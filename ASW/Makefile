CC = gcc
TARGET = unitTest
OBJS += test.o ASW_StoppingDistance.o ASW_Interpolate.o
CONF = ASW_ConfigParameters.h
HDR += ${CONF} ASW_StoppingDistance.h ASW_Interpolate.h

${TARGET}: ${OBJS}
	${CC} -o ${TARGET} ${OBJS}

test.o: test.c ${HDR}
	${CC} -c test.c

ASW_StoppingDistance.o: ASW_StoppingDistance.c ASW_StoppingDistance.h ${CONF}
	${CC} -c ASW_StoppingDistance.c

ASW_Interpolate.o: ASW_Interpolate.c ASW_StoppingDistance.h
	${CC} -c ASW_Interpolate.c

clean:
	rm -rf ${TARGET} ${OBJS}