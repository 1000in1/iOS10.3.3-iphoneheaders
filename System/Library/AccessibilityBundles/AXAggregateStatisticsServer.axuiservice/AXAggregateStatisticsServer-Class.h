/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:46 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/AccessibilityBundles/AXAggregateStatisticsServer.axuiservice/AXAggregateStatisticsServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AXAggregateStatisticsServer/AXUIService.h>

@class NSString;

@interface AXAggregateStatisticsServer : NSObject <AXUIService>

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(id)requiredEntitlementForProcessingMessageWithIdentifier:(unsigned)arg1 ;
-(id)processMessage:(id)arg1 withIdentifier:(unsigned)arg2 fromClientWithIdentifier:(id)arg3 error:(id*)arg4 ;
-(char)messageWithIdentifierShouldBeProcessedAsynchronously:(unsigned)arg1 ;
@end

