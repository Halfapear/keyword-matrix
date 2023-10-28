#include <REGX52.H>
#include "LCD1602.h"
#include "Delay.h"
#include "MatrixKey.h"


void main(){
        int Password = 0,KeyNum,n,i;
		LCD_Init();
		LCD_ShowString(1,1,"Password");
        while(1){
					KeyNum = MatrixKey();
            //??while ????,????????,??????Password???Password???????f u
            if(KeyNum)
                {
//                for(i=0;i<4;i++){
//									KeyNum = MatrixKey();
//									if(KeyNum){
									if(KeyNum <=10){
                        Password = Password *10;
                        Password =Password + KeyNum%10;
									}
//                        }
//											}
									
                if(KeyNum==11){
                        if (Password == 628){
                                LCD_ShowString(1,1,"yeah");
                            while(1){}
                        }
                        else{
                                LCD_ShowString(1,1,"f**k you");
                            while(1){}
                        }
                }
		    }
		}
}