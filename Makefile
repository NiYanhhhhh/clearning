mkdir:
	mkdir -p ./bin/

gettime: mkdir misc/gettime.c
	gcc misc/gettime.c -o  bin/gettime &
	./bin/gettime

sort.c: mkdir sort/sort.c util/random.c
	gcc sort/sort.c util/random.c -o bin/sort

sort: sort.c
	./bin/sort
