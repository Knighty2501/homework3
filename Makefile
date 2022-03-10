GPP= g++ -std=c++17

all: HeartRates

HeartRates: HeartRate.o main.o
	$(GPP) $^ -o $@

HeartRate.o: HeartRate.cpp heartrate.hpp
	$(GPP) -c $<

main.o: main.cpp heartrate.hpp
	$(GPP) -c $<

clean:
	-rm *.o HeartRates
