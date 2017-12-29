/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:39:16 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileSafari.app/MobileSafari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileSafari/ContentInteractionTestRunner.h>

@interface ScrollTestProcessor : ContentInteractionTestRunner {

	char _startedScrollTest;
	int _scrollDelta;

}

@property (assign,nonatomic) char startedScrollTest;              //@synthesize startedScrollTest=_startedScrollTest - In the implementation block
@property (assign,nonatomic) int scrollDelta;                     //@synthesize scrollDelta=_scrollDelta - In the implementation block
-(id)initWithTestName:(id)arg1 browserController:(id)arg2 ;
-(void)setScrollDelta:(int)arg1 ;
-(char)startPageAction:(id)arg1 ;
-(char)performActionForPage:(id)arg1 ;
-(void)setStartedScrollTest:(char)arg1 ;
-(char)startedScrollTest;
-(int)scrollDelta;
@end
