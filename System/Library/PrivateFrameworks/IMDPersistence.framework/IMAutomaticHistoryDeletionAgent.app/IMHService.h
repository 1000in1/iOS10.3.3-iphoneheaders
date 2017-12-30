/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:57:03 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/IMDPersistence.framework/IMAutomaticHistoryDeletionAgent.app/IMAutomaticHistoryDeletionAgent
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSArray, NSSet;


@protocol IMHService <NSObject>
@property (nonatomic,retain) id<IMHServiceWrapperDelegate> delegate; 
@property (nonatomic,copy,readonly) NSArray * devices; 
@property (nonatomic,copy,readonly) NSSet * accounts; 
@required
-(void)sendMessage:(id)arg1 toDestinations:(id)arg2 priority:(int)arg3 options:(id)arg4 withCompletion:(/*^block*/id)arg5;
-(void)setDelegate:(id)arg1;
-(id<IMHServiceWrapperDelegate>)delegate;
-(NSArray *)devices;
-(NSSet *)accounts;

@end

