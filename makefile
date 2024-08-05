hello:main.cpp hello.cpp
	g++ -o hello main.cpp
.PHONY:clean
	rm -rf hello