#include "pch.h"
#include "RecEng.h"


struct RECENG_API Matrix {
public:
	Matrix(int xDimension, int yDimension) {
	    int locX = xDimension; //Get the inputted x dimension
	    int locY = yDimension; //Get the inputted y dimension
		int** matrix = new int*[locX]; //Create a d_p to an pointed array
		for (int i = 0; i < locX; i++) { matrix[i] = new int[yDimension]; } //Create first dimension of array
	}
	Matrix(int **inMatrix) {
		int size = sizeof(inMatrix); //Get the X dimension of the inputted data
		
		int columns = sizeof(inMatrix[0]); // Get the Y dimension of the inputted data

		int rows = size / columns;

		int** matrix = new int*[rows]; // Create matrix of "rows" rows
		for (int i = 0; i < rows; i++) { matrix[i] = new int[columns]; } //Put in the columns that should be at every row

		//Copy the inputted data into a matrix struct
		for (int i = 0; i < rows; i++) {
			for (int j = 0; j < columns; j++) {
				matrix[i][j] = inMatrix[i][j];
			}
		}
	}
	~Matrix() {
		delete this;
	}
	int GetRows(){
		return sizeof(*this) / sizeof(this[0]);
	}
	int GetColumns(){
		return sizeof(this[0]);
	}
	/*
	int Index(int x, int y) {
		return this[x, y];
	}*/
};
RECENG_API Matrix transpose(Matrix inMatrix) {
	Matrix transposition = inMatrix;
	return transposition;
}
RECENG_API Matrix dotProduct(Matrix inMatrixT, int **inVector){
	int rows = inMatrixT.GetRows();
	int columns = inMatrixT.GetColumns();

	return inMatrixT;
}
