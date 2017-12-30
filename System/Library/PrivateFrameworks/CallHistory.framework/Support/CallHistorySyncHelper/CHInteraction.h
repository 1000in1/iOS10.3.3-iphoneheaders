/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:56:24 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/CallHistory.framework/Support/CallHistorySyncHelper
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CallHistorySyncHelper/InteractionProtocol.h>

@class NSString;

@interface CHInteraction : NSObject <InteractionProtocol>

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)deleteInteractionWithCall:(id)arg1 ;
-(void)donateCallHistoryInteractionWithCall:(id)arg1 ;
-(void)deleteInteractionWithCalls:(id)arg1 ;
@end

