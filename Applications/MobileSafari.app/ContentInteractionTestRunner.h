/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:25:12 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileSafari.app/MobileSafari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileSafari/PageLoadTestRunner.h>

@interface ContentInteractionTestRunner : PageLoadTestRunner {

	int _iterations;

}

@property (assign,nonatomic) int iterations;              //@synthesize iterations=_iterations - In the implementation block
-(id)initWithTestName:(id)arg1 browserController:(id)arg2 ;
-(char)startPageAction:(id)arg1 ;
-(id)pageWebView;
-(void)startTrackingFrameRate;
-(void)endTrackingFrameRate;
-(void)startSubtest:(id)arg1 ;
-(void)stopSubtest:(id)arg1 ;
-(void)setIterations:(int)arg1 ;
-(int)iterations;
@end

