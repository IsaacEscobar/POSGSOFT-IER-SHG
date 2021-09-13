#
VIEW := View
CONTROLLER := Controller
MODEL := Model

all: compilar
compilar: criterio acta persona director jurado asistente universidad view main
	g++ -o Salida Criterio.o Acta.o Persona.o Director.o Jurado.o Asistente.o Universidad.o View.o Main.o
criterio: ${MODEL}/Criterio.cpp ${MODEL}/Criterio.h
	g++ -c ${MODEL}/Criterio.cpp
acta: ${MODEL}/Acta.cpp ${MODEL}/Acta.h ${MODEL}/Criterio.h
	g++ -c ${MODEL}/Acta.cpp
persona: ${MODEL}/Persona.cpp ${MODEL}/Persona.h ${MODEL}/Acta.h
	g++ -c ${MODEL}/Persona.cpp
director: ${MODEL}/Director.cpp ${MODEL}/Director.h ${MODEL}/Persona.h
	g++ -c ${MODEL}/Director.cpp
jurado: ${MODEL}/Jurado.cpp ${MODEL}/Jurado.h ${MODEL}/Persona.h
	g++ -c ${MODEL}/Jurado.cpp
asistente: ${MODEL}/Asistente.cpp ${MODEL}/Asistente.h ${MODEL}/Persona.h
	g++ -c ${MODEL}/Asistente.cpp
universidad: ${MODEL}/Universidad.cpp ${MODEL}/Universidad.h ${MODEL}/Asistente.h ${MODEL}/Jurado.h 
${MODEL}/Director.h ${MODEL}/Acta.h
	g++ -c ${MODEL}/Universidad.cpp
view: ${VIEW}/View.cpp ${VIEW}/View.h ${MODEL}/Universidad.h
	g++ -c ${VIEW}/View.cpp
main: Main.cpp ${VIEW}/View.h 
	g++ -c Main.cpp
clean: #comando para borrar los .o
	@echo "Cleaning compilation..."
	del *.o, del *.exe