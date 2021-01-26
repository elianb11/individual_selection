#define nGen 100
#define tSelect 30//%
#define taillePop 100
#define longIndiv 8
#define A -1
#define B 1
#define pCroise 0.5

typedef unsigned char Bit;

typedef struct indiv{
	Bit bit;
	struct indiv *nextI;
} Indiv;

typedef Indiv *ListeI;

typedef struct pop{
	ListeI individu;
	double qualite;
	struct pop *nextP;
} Pop;

typedef Pop *ListeP;