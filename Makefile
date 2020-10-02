
MING32_PATH= ../SDL2-2.0.12/i686-w64-mingw32
MING64_PATH= ../SDL2-2.0.12/x86_64-w64-mingw32

main:
	gcc -o main main.c -lSDL2main -lSDL2

win64:
	x86_64-w64-mingw32-gcc -I$(MING64_PATH)/include -L$(MING64_PATH)/lib -o main.exe main.c -lmingw32 -lSDL2main -lSDL2

clean:
	rm main.exe main
