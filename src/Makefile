#Sample Makefile
test:
	@make --no-print-directory test_a
test_a:
	cmake -S . -B build
	cmake --build build
	./build/mathlib-test