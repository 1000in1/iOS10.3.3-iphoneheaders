/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:34 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface _UIKeyboardTypingSpeedLogger : NSObject {

	int _typingDelaySamples[7];
	int _typingDelaySampleCount;

}
-(id)init;
-(void)logToAggregate;
-(void)recordTypingDelay:(double)arg1 ;
@end

