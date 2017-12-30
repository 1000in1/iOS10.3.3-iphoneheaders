/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:57:04 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/IOAccessoryManager.framework/PlugIns/WetNotification.appex/WetNotification
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WetNotification/WetNotification-Structs.h>
#import <SpringBoardUIServices/SBSUIRemoteAlertItemContentViewController.h>

@class UIImageView, UILabel;

@interface WetNotificationViewController : SBSUIRemoteAlertItemContentViewController {

	UIImageView* _imageView;
	UILabel* _titleLabel;
	UILabel* _bodyLabel;

}
+(void)initialize;
-(void)loadView;
-(void)viewWillLayoutSubviews;
-(void)viewDidLayoutSubviews;
-(CGSize)preferredContentSize;
@end

