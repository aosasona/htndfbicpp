.PHONY: run
n := 1

# run as `make run n=20`
run:
	rm -f a.out
	g++ main.cpp
	./a.out $(n)
	rm -f a.out
