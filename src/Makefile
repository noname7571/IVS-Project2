#Sample Makefile

CXXFLAGS += -O0 -Wall -Werror -pedantic -pg -g --coverage

.PHONY: all install pack run doc test clean

all: grindsetcalc profile 

install: grindsetcalc
	mkdir -p $(DESTDIR)/usr/bin
	install $(INSFLAGS) $< $(DESTDIR)/usr/bin/

pack:
	make clean
	cd ../ && zip xgrindset00.zip *
run: grindsetcalc
	./$<

grindsetcalc: 
	cd GUI && cmake .
	cd GUI && make
	mv GUI/ivs_calculator $@

doc:
	doxygen Doxyfile

test:
	@make --no-print-directory test_a
test_a:
	cmake -S . -B build
	cmake --build build
	./build/mathlib-test
profile: mathlib.o profiling.o
	$(CXX) $(CXXFLAGS) $^ -o $@

mathlib.o: mathlib.cpp mathlib.h
profiling.o: profiling.cpp mathlib.h

clean:
	rm -rf build profile *.o *.gcov *.gcno *.gcda gmon.out html grindsetcalc CMakeFiles
	cd GUI && rm -rf cmake_install.cmake CMakeFiles Makefile ivs_calculator CMakeCache.txt ivs_calculator_autogen
	rm -f ../xgrindset00.zip