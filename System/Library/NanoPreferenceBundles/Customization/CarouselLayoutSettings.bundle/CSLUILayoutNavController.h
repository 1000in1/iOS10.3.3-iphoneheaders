/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 6:38:32 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/NanoPreferenceBundles/Customization/CarouselLayoutSettings.bundle/CarouselLayoutSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UINavigationController.h>

@class CSLUILayoutViewController;

@interface CSLUILayoutNavController : UINavigationController {

	CSLUILayoutViewController* _layoutViewController;

}

@property (nonatomic,retain) CSLUILayoutViewController * layoutViewController;              //@synthesize layoutViewController=_layoutViewController - In the implementation block
-(void)resetIconPositions;
-(void)setLayoutViewController:(CSLUILayoutViewController *)arg1 ;
-(CSLUILayoutViewController *)layoutViewController;
-(id)init;
@end

