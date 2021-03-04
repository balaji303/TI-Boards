#define RCGCGPIO (*((unsigned int *)0x400FE608U))

#define GPIOF_BASE 0x40025000U
#define GPIOF_DIR (*((unsigned int *)(GPIOF_BASE + 0x400U)))
#define GPIOF_DEN (*((unsigned int *)(GPIOF_BASE + 0x51CU)))
#define GPIOF_DATA (*((unsigned int *)(GPIOF_BASE + 0x3FCU)))

int main(){
RCGCGPIO =0x20U;
GPIOF_DIR =0x0EU;
GPIOF_DEN =0x0EU;

 while(1){
	GPIOF_DATA=0x02U;

	int counter =0;
	while (counter <1000000){
	++counter;
	}
	GPIOF_DATA = 0x00U;
	counter=0;
	while (counter <1000000){
	++counter;
	}
}
return 0;

} 