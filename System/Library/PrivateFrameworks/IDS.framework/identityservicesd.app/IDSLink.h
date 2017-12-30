/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:56:59 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol IDSLink <NSObject>
@property (retain) NSString * cbuuid; 
@property (retain) NSString * deviceUniqueID; 
@property (getter=linkTypeString,readonly) NSString * linkTypeString; 
@property (readonly) unsigned state; 
@property (readonly) unsigned headerOverhead; 
@property (__weak) id<IDSLinkDelegate> delegate; 
@property (__weak) id<IDSLinkDelegate> alternateDelegate; 
@required
-(NSString *)cbuuid;
-(void)setCbuuid:(id)arg1;
-(NSString *)deviceUniqueID;
-(id)copyLinkStatsDict;
-(unsigned)sendPacketBuffer:(/*function pointer*/void**)arg1 toDeviceUniqueID:(id)arg2 cbuuid:(id)arg3;
-(id)generateLinkReport:(double)arg1 isCurrentLink:(char)arg2;
-(NSString *)linkTypeString;
-(unsigned)headerOverhead;
-(id<IDSLinkDelegate>)alternateDelegate;
-(void)setAlternateDelegate:(id)arg1;
-(void)setDelegate:(id)arg1;
-(id<IDSLinkDelegate>)delegate;
-(unsigned)state;
-(void)setDeviceUniqueID:(id)arg1;

@end
