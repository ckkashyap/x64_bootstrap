#include "types.h"
#include "defs.h"
#include "param.h"
#include "memlayout.h"
#include "mmu.h"
#include "proc.h"
#include "x86.h"

static void startothers(void);
static void mpmain(void)  __attribute__((noreturn));
extern pde_t *kpgdir;
extern char end[]; // first address after kernel loaded from ELF file

// Bootstrap processor starts running C code here.
// Allocate a real stack and switch to it, first
// doing some setup required for memory allocator to work.
int
main(void)
{
	int i;
	char *ptr=0xb8000;
	for(i=0;i<500;i+=2)
	ptr[i]='A';
	while(1);
}

// Other CPUs jump here from entryother.S.
void
mpenter(void)
{
}

// Common CPU setup code.
static void
mpmain(void)
{
}

pde_t entrypgdir[];  // For entry.S
void entry32mp(void);


//PAGEBREAK!
// Blank page.

