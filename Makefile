
MINGW32_PATH= ../SDL2-2.0.12/i686-w64-mingw32
MINGW64_PATH= ../SDL2-2.0.12/x86_64-w64-mingw32

SDL2_LIB_ARGS= -lSDL2main -lSDL2
MINGW_LIB_ARGS = -lmingw32

OUTPUT_POSIX= main
OUTPUT_WIN= main.exe

BUILD_DIR = build

POSIX_CC= gcc
WIN32_CC= i686-w64-mingw32-gcc
WIN64_CC= x86_64-w64-mingw32-gcc 

x86_SDL2_DLL= ./bin/SDL32/SDL2.dll
x64_SDL2_DLL= ./bin/SDL64/SDL2.dll

$(OUTPUT_POSIX): *.c *.h
	mkdir -p $(BUILD_DIR)/posix
	gcc -o  $(BUILD_DIR)/posix/$(OUTPUT_POSIX) *.c $(SDL2_LIB_ARGS)

win64:
	mkdir -p $(BUILD_DIR)/win64
	$(WIN64_CC) -I$(MINGW64_PATH)/include -L$(MINGW64_PATH)/lib -o  $(BUILD_DIR)/win64/$(OUTPUT_WIN) *.c $(MINGW_LIB_ARGS) $(SDL2_LIB_ARGS)
	cp $(x64_SDL2_DLL) $(BUILD_DIR)/win64

win32:
	mkdir -p $(BUILD_DIR)/win32
	$(WIN32_CC) -I$(MINGW32_PATH)/include -L$(MINGW32_PATH)/lib -o $(BUILD_DIR)/win32/$(OUTPUT_WIN) *.c $(MINGW_LIB_ARGS) $(SDL2_LIB_ARGS)
	cp $(x86_SDL2_DLL) $(BUILD_DIR)/win32

clean:
	rm -r $(BUILD_DIR)
.PHONY: clean
