executable: objects
			g++ -pedantic -std=c++11 *.o -o comanda
			rm *.o
			@echo "Successful compilation!"
			
objects: *.cpp
		g++ -pedantic -std=c++11 *.cpp
