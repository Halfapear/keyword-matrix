#include <REGX52.H>
#include "LCD1602.h"
#include "Delay.h"
#include "MatrixKey.h"


void main(){
		int Password=0,KeyNum,n[4],i;
		LCD_Init();
		LCD_ShowString(1,1,"Password");
		while(1){
				if(KeyNum)
						{
						for(i=0;i<4;i++){
								Password = Password *10;
								n[i]=MatrixKey();
								Password =Password + n[i];
								}
						if(Password==1234){
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