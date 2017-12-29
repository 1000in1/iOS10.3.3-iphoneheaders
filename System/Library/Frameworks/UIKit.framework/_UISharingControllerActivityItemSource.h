/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:30:01 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIActivityItemSource.h>

@class UICloudSharingController, NSString;

@interface _UISharingControllerActivityItemSource : NSObject <UIActivityItemSource> {

	UICloudSharingController* _viewController;

}

@property (nonatomic,retain) UICloudSharingController * viewController;              //@synthesize viewController=_viewController - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setViewController:(UICloudSharingController *)arg1 ;
-(UICloudSharingController *)viewController;
-(id)activityViewControllerPlaceholderItem:(id)arg1 ;
-(id)activityViewController:(id)arg1 itemForActivityType:(id)arg2 ;
@end
