main:
	g++ -std=c++11 main.cpp src/*.cpp -o build/main `fltk-config --libs`
clean:
	rm build/main
cleanall:
	rm build/*
run:
	./build/main
