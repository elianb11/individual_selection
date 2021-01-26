CC = gcc

prog : main.o setup.o
	$(CC) -o prog main.o printchainI.o printchainP.o InitPop.o InitIndiv.o InitIndiv2.o add_headI.o add_headP.o remove_headP.o remove_headI.o CalcVal.o CalcQual1.o CalcQual2.o CalcQual3.o CroiserIndiv.o CroiserPop.o SelectIndiv.o freePop.o QuickSort.o randIndiv.o copieIndiv.o add_tailI.o setup.o

main.o : InitPop.o CroiserPop.o QuickSort.o SelectIndiv.o printchainP.o main.c
	$(CC) -o main.o -c main.c

printchainI.o : printchainI.c
	$(CC) -o printchainI.o -c printchainI.c

printchainP.o : printchainI.o printchainP.c
	$(CC) -o printchainP.o -c printchainP.c

InitPop.o : add_headP.o InitIndiv.o InitIndiv2.o InitPop.c
	$(CC) -o InitPop.o -c InitPop.c

InitIndiv.o : add_headI.o InitIndiv.c 
	$(CC) -o InitIndiv.o -c InitIndiv.c

InitIndiv2.o : InitIndiv2.c
	$(CC) -o InitIndiv2.o -c InitIndiv2.c

add_headI.o : add_headI.c
	$(CC) -o add_headI.o -c add_headI.c

add_headP.o : CalcVal.o CalcQual1.o CalcQual2.o CalcQual3.o add_headP.c
	$(CC) -o add_headP.o -c add_headP.c

remove_headP.o : remove_headP.c
	$(CC) -o remove_headP.o -c remove_headP.c

remove_headI.o : remove_headI.c
	$(CC) -o remove_headI.o -c remove_headI.c

CalcVal.o : CalcVal.c
	$(CC) -o CalcVal.o -c CalcVal.c

CalcQual1.o : CalcQual1.c
	$(CC) -o CalcQual1.o -c CalcQual1.c

CalcQual2.o : CalcQual2.c
	$(CC) -o CalcQual2.o -c CalcQual2.c

CalcQual3.o : CalcQual3.c
	$(CC) -o CalcQual3.o -c CalcQual3.c

CroiserIndiv.o : CroiserIndiv.c
	$(CC) -o CroiserIndiv.o -c CroiserIndiv.c

CroiserPop.o : CroiserIndiv.o freePop.o randIndiv.o CroiserPop.c
	$(CC) -o CroiserPop.o -c CroiserPop.c


QuickSort.o : add_headP.o QuickSort.c
	$(CC) -o QuickSort.o -c QuickSort.c

SelectIndiv.o : SelectIndiv.c 
	$(CC) -o SelectIndiv.o -c SelectIndiv.c

randIndiv.o : randIndiv.c copieIndiv.o
	$(CC) -o randIndiv.o -c randIndiv.c

freePop.o : remove_headP.o remove_headI.o freePop.c
	$(CC) -o freePop.o -c freePop.c

copieIndiv.o : copieIndiv.c add_tailI.o
	$(CC) -o copieIndiv.o -c copieIndiv.c

add_tailI.o : add_tailI.c
	$(CC) -o add_tailI.o -c add_tailI.c

setup.o : setup.c
	$(CC) -o setup.o -c setup.c

clean :
	rm -rf *.o

cleanall : clean
	rm -rf prog