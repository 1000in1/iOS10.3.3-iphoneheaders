/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 6:38:13 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Messages/iMessageBalloons/ASMessagesProvider.bundle/ASMessagesProvider
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class UIBarButtonItem;


@protocol ASNavigationItemProviding <NSObject>
@property (nonatomic,retain) UIBarButtonItem * messagesRightBarButtonItem; 
@property (nonatomic,retain) UIBarButtonItem * messagesLeftBarButtonItem; 
@required
-(UIBarButtonItem *)messagesRightBarButtonItem;
-(UIBarButtonItem *)messagesLeftBarButtonItem;
-(void)setMessagesLeftBarButtonItem:(id)arg1;
-(void)setMessagesRightBarButtonItem:(id)arg1;

@end
