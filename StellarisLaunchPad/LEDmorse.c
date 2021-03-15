void BSP_sendMorseCode(uint32_t bitmask){
uint32_t volatile delay_ctr;
enum {
DOT_DELAY=150;
}

for(;bitmask!=0U;bitmask <<=1){
if ((bitmask & 1U<<31)) != 0U){
    	BSP_ledGreenOn();
  }
else{
 	BSP_ledGreenOff();
   }
	for(delay_ctr =DOT_DELAY;delay_ctr !=0U;
--delay_ctr){}
 }

}