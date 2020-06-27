.PHONY: test-random
test-random:
	gcc random_test.c -lcmocka
	./a.out

.PHONY: test-array
test-array:
	gcc array_len_test.c -lcmocka
	./a.out

.PHONY: test-safe_mem
test-safe_mem:
	gcc safe_mem_test.c -lcmocka
	./a.out