cylinder:
	g++ *.cpp -o cylinder

clean:
	rm -f cylinder

run: cylinder
	./cylinder
