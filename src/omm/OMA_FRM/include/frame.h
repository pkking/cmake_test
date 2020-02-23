#ifndef FRAME_H
#define FRAME_H

typedef struct {
	char name[128];
	void (*initFunc)(void);
}MOD;

#endif