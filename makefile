plot.png: rk4.dat  plots.py
	python plots.py

%.dat : a.out
	./a.out

a.out: mio.cpp
	g++ mio.cpp
