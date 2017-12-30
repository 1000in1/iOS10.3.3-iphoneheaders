/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:41 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/InteractiveTransitionAction.h>

@class NSString;

@interface InteractiveTransition : NSObject <InteractiveTransitionAction> {

	/*^block*/id _start;
	/*^block*/id _update;
	/*^block*/id _finish;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id startHandler; 
@property (nonatomic,readonly) id updateHandler; 
@property (nonatomic,readonly) id finishHandler; 
-(id)initWithStartHandler:(/*^block*/id)arg1 updateHandler:(/*^block*/id)arg2 finishHandler:(/*^block*/id)arg3 ;
-(id)startHandler;
-(id)finishHandler;
-(id)updateHandler;
@end

