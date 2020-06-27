.PHONY: test-random
test-random:
	gcc random_test.c -lcmocka
	./a.out