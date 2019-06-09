build:
	gcc -o out.amd64 main.c -static -Wall -pedantic

clean:
	rm out.a

buildarm64:
	arm-linux-gnueabi-gcc -o out.arm64 main.c -static -Wall -pedantic
