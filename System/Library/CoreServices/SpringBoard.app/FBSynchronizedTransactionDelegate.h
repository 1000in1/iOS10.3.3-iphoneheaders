/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:36:50 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBSynchronizedTransactionDelegate <NSObject>
@required
-(void)synchronizedTransactionReadyToCommit:(id)arg1;
-(void)synchronizedTransaction:(id)arg1 willCommitSynchronizedTransactions:(id)arg2;
-(void)synchronizedTransaction:(id)arg1 didCommitSynchronizedTransactions:(id)arg2;

@end
