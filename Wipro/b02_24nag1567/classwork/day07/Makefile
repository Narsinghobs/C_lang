CC = gcc

app: main.o emp.o
	$(CC) -o app main.o emp.o

main.o: main.c
	$(CC) -c main.c

emp.o: emp.c
	$(CC) -c emp.c

clean:
	rm app
	rm *.o
	@echo "Cleaning Done"
