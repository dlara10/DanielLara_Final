LaraDaniel_final_15.pdf: rungekutta.dat plot.py
	python plot.py

%.dat : a.out
	./a.out 

a.out: LaraDaniel_final_15.cpp
	g++ LaraDaniel_final_15.cpp

clean:
	rm -rf a.out rungekutta.dat LaraDaniel_final_15.pdf *~