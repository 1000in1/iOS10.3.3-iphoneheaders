/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 6:38:14 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Messages/iMessageBalloons/ASMessagesProvider.bundle/ASMessagesProvider
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ASPreferredItemControllerProtocol <NSObject>
@property (assign,nonatomic,__weak) id<ASPreferredItemControllerDelegate> delegate; 
@required
-(id)preferredItemForCategory:(id)arg1;
-(void)setDelegate:(id)arg1;
-(id<ASPreferredItemControllerDelegate>)delegate;
-(void)cleanup;
-(void)flushCache;

@end

