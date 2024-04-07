#ifndef MATRIX_H
#define MATRIX_H
#include <windows.h> 
#include "global.h"
#include "life.h"

class Matrix {
public:
	Matrix();
	~Matrix();
	void render() const;
	void computeNextState();
	bool initState(Life* life);

private:

	void clearScreen() const;
	char nextState(char state, char row, char col, bool toggle) const;

	char** grid_1;
	char** grid_2;
	bool	toggle;
};

#endif

