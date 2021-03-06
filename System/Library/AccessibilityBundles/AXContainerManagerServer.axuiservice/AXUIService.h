/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:46 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/AccessibilityBundles/AXContainerManagerServer.axuiservice/AXContainerManagerServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AXUIService <NSObject>
@optional
+(id)sharedInstance;
+(id)requiredEntitlementForProcessingMessageWithIdentifier:(unsigned)arg1;
+(id)possibleRequiredEntitlementsForProcessingMessageWithIdentifier:(unsigned)arg1;
-(char)messageWithIdentifierShouldBeProcessedAsynchronously:(unsigned)arg1;
-(void)processMessageAsynchronously:(id)arg1 withIdentifier:(unsigned)arg2 fromClientWithIdentifier:(id)arg3 completion:(/*^block*/id)arg4;
-(id)accessQueueForProcessingMessageWithIdentifier:(unsigned)arg1;
-(char)messageWithIdentifierRequiresWritingBlock:(unsigned)arg1;
-(void)processInitializationMessage:(id)arg1;
-(void)serviceWasFullyInitialized;
-(void)connectionWillBeInterruptedForClientWithIdentifier:(id)arg1;

@required
-(id)processMessage:(id)arg1 withIdentifier:(unsigned)arg2 fromClientWithIdentifier:(id)arg3 error:(id*)arg4;

@end

