.PHONY: all
all: clean test-random test-array test-safe_mem gen-coverage

.PHONY: clean
clean:
	$(bash rm *.gcov)
	$(bash rm *.gcda)
	$(bash rm *.gcno)

.PHONY: gen-coverage
gen-coverage:
	lcov --base-directory . --directory . -c -o test.info
	genhtml test.info --output-directory out

.PHONY: test-random
test-random:
	gcc -fprofile-arcs -ftest-coverage random_test.c -lcmocka
	./a.out

.PHONY: test-array
test-array:
	gcc -fprofile-arcs -ftest-coverage array_len_test.c -lcmocka
	./a.out

.PHONY: test-safe_mem
test-safe_mem:
	gcc -fprofile-arcs -ftest-coverage safe_mem_test.c -lcmocka
	./a.out