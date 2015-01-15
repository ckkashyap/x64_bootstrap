all:
	gcc -gdwarf-2 -Wa,-divide -Iinclude -m64 -DX64 -mcmodel=kernel -mtls-direct-seg-refs -mno-red-zone -c -o entry64.o entry64.S
