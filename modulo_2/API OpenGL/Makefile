# freeglut + GLU instalados em ~/.local
CFLAGS  += -Wall -I$(HOME)/.local/include
LDFLAGS += -L$(HOME)/.local/lib -Wl,-rpath,$(HOME)/.local/lib
LDLIBS  += -lglut -lGLU -lGL -lm

index: index.c
