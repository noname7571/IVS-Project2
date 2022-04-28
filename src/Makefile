#Sample Makefile

CXXFLAGS += -O0 -Wall -Werror -pedantic -pg -g --coverage

test:
	@make --no-print-directory test_a
test_a:
	cmake -S . -B build
	cmake --build build
	./build/mathlib-test
profiling: mathlib.o profiling.o
	$(CXX) $(CXXFLAGS) $^ -o $@

mathlib.o: mathlib.cpp mathlib.h
profiling.o: profiling.cpp mathlib.h

clean:
	rm -f profiling *.o *.gcov *.gcno *.gcda