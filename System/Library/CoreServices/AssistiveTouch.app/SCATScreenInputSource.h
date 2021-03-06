/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:08 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/AssistiveTouch.app/assistivetouchd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <assistivetouchd/assistivetouchd-Structs.h>
#import <assistivetouchd/SCATInputSource.h>
#import <assistivetouchd/AXEventHandler.h>

@class NSString;

@interface SCATScreenInputSource : SCATInputSource <AXEventHandler> {

	NSString* _switchDisplayName;

}

@property (nonatomic,readonly) id<SCATScreenInputSourceDelegate> delegate; 
@property (nonatomic,copy) NSString * switchDisplayName;                                //@synthesize switchDisplayName=_switchDisplayName - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)handledEvent:(id)arg1 ;
-(void)updateWithSwitches:(id)arg1 recipe:(id)arg2 ;
-(void)_didReceiveActionWithIdentifier:(long)arg1 start:(char)arg2 ignoreInputHold:(char)arg3 ;
-(long)_actionIdentifierWithType:(NSString*)arg1 ;
-(void)_startHandlingEvents;
-(void)_stopHandlingEvents;
-(void)dealloc;
-(unsigned)priority;
-(void)stopRunning;
-(void)setDelegate:(id)arg1 queue:(id)arg2 ;
-(void)startRunning;
-(NSString *)switchDisplayName;
-(void)setSwitchDisplayName:(NSString *)arg1 ;
@end

