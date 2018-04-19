u_t_final.pdf : u_t_final.txt u_no_lineal.txt
	python u_t_final.py
	rm u_t_final.rs u_no_lineal.rs
	rm u_t_final.txt u_no_lineal.txt	

u_t_final.txt: u_t_final.rs
	./u_t_final.rs > u_t_final.txt

u_t_final.rs:
	c++ hans.cpp -o u_t_final.rs

u_no_lineal.txt: u_no_lineal.rs
	./u_no_lineal.rs > u_no_lineal.txt

u_no_lineal.rs:
	c++ zimmer.cpp -o u_no_lineal.rs
