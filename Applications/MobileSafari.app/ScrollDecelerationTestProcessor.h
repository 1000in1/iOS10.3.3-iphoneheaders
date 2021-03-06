/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:25:11 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileSafari.app/MobileSafari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileSafari/ContentInteractionTestRunner.h>

@interface ScrollDecelerationTestProcessor : ContentInteractionTestRunner {

	int _iterationsRemaining;
	int _state;

}

@property (assign,nonatomic) int iterationsRemaining;              //@synthesize iterationsRemaining=_iterationsRemaining - In the implementation block
@property (assign,nonatomic) int state;                            //@synthesize state=_state - In the implementation block
-(id)initWithTestName:(id)arg1 browserController:(id)arg2 ;
-(char)startPageAction:(id)arg1 ;
-(char)performActionForPage:(id)arg1 ;
-(int)state;
-(void)setState:(int)arg1 ;
-(void)setIterationsRemaining:(int)arg1 ;
-(int)iterationsRemaining;
@end

