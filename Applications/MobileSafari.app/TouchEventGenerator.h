/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:39:17 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileSafari.app/MobileSafari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MobileSafari/MobileSafari-Structs.h>
@interface TouchEventGenerator : NSObject {

	IOHIDEventSystemClientRef _ioSystemClient;
	SCD_Struct_To17 _activePoints[5];
	unsigned _activePointCount;

}
+(id)sharedTouchEventGenerator;
-(void)moveToPoints:(CGPoint*)arg1 touchCount:(unsigned)arg2 duration:(double)arg3 ;
-(void)liftUp:(CGPoint)arg1 ;
-(IOHIDEventRef)_createIOHIDEventType:(int)arg1 ;
-(char)_sendHIDEvent:(IOHIDEventRef)arg1 ;
-(void)touchDownAtPoints:(CGPoint*)arg1 touchCount:(unsigned)arg2 ;
-(void)liftUpAtPoints:(CGPoint*)arg1 touchCount:(unsigned)arg2 ;
-(void)liftUp:(CGPoint)arg1 touchCount:(unsigned)arg2 ;
-(void)_updateTouchPoints:(CGPoint*)arg1 count:(unsigned)arg2 ;
-(void)touchDown:(CGPoint)arg1 touchCount:(unsigned)arg2 ;
-(id)init;
-(void)touchDown:(CGPoint)arg1 ;
@end
