/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:42 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Celestial/BWNodeMessage.h>

@class BWDroppedSample;

@interface BWNodeDroppedSampleMessage : BWNodeMessage {

	BWDroppedSample* _droppedSample;

}

@property (readonly) BWDroppedSample * droppedSample; 
+(id)newMessageWithDroppedSample:(id)arg1 ;
-(void)dealloc;
-(BWDroppedSample *)droppedSample;
-(id)_initWithDroppedSample:(id)arg1 ;
@end

