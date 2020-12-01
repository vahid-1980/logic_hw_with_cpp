OR=or
AND=and
NAND=nand
XOR=xor
NOT=not
GATES=gates
WIRE=wire
TEST=test
NOR=nor
LIB=lib
OBJ=obj
BUILD=build

SRC_INC_PATH=${OR} ${AND} ${NAND} ${XOR} ${NOT} ${GATES} ${WIRE} ${TEST} ${NOR}
LIBPATH=${LIB}

SRCFILES:=$(patsubst %,%/*.cpp,${SRC_INC_PATH})
OBJFILES:=$(patsubst %.cpp,%.o,${SRCFILES})
INCFILES:=$(patsubst %,%/*.h,${SRC_INC_PATH})

CXX=g++
CFLAGS=-Wall

dd:
	echo ${SRCFILES}

all:
	${CXX} ${CFLAGS} ${SRCFILES} -o mainApp
#	mv *.o ${OBJ}
	

OBJPATH:
#	mkdir ${OBJ}

LIBPATH:
#	mkdir ${LIB}

LIBPATH:
#	mkdir ${BUILD}

library: LIBPATH OBJPATH 


clean:
	rm -rf ./mainApp
#	rm -rf ${LIB} ${OBJ}