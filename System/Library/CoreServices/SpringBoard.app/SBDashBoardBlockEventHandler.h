/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:22 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBDashBoardEventHandling.h>

@class NSString;

@interface SBDashBoardBlockEventHandler : NSObject <SBDashBoardEventHandling> {

	/*^block*/id _buttonPredicate;
	/*^block*/id _eventBlock;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)wouldHandleButtonEvent:(id)arg1 ;
-(id)initWithButtonPredicate:(/*^block*/id)arg1 eventBlock:(/*^block*/id)arg2 ;
-(id)init;
-(char)handleEvent:(id)arg1 ;
@end

