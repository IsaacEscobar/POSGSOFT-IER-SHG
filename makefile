all: compilar
compilar: criterio acta persona director jurado asistente universidad view main
	g++ -o Salida Criterio.o Acta.o Persona.o Director.o Jurado.o Asistente.o Universidad.o View.o Main.o
criterio: Criterio.cpp Criterio.h
	g++ -c Criterio.cpp
acta: Acta.cpp Acta.h Criterio.h
	g++ -c Acta.cpp
persona: Persona.cpp Persona.h Acta.h
	g++ -c Persona.cpp
director: Director.cpp Director.h Persona.h
	g++ -c Director.cpp
jurado: Jurado.cpp Jurado.h Persona.h
	g++ -c Jurado.cpp
asistente: Asistente.cpp Asistente.h Persona.h
	g++ -c Asistente.cpp
universidad: Universidad.cpp Universidad.h Asistente.h Jurado.h Director.h Acta.h
	g++ -c Universidad.cpp
view: View.cpp View.h Universidad.h
	g++ -c View.cpp
main: Main.cpp View.h 
	g++ -c Main.cpp
clean: #comando para borrar los .o
	@echo "Cleaning compilation..."
	del *.o