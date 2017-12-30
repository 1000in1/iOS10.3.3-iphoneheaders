/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 4:28:55 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PreferenceBundles/AccessibilitySettings.bundle/AccessibilitySettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AccessibilitySettings/AccessibilitySettings-Structs.h>
#import <AccessibilitySettings/AccessibilityBaseListController.h>
#import <AccessibilitySettings/AXCaptionPreviewDelegate.h>

@class UIWindow, UIView, NSArray, NSString;

@interface AXCaptionStyleChooserController : AccessibilityBaseListController <AXCaptionPreviewDelegate> {

	UIWindow* _fullScreenPreviewWindow;
	UIView* _landscapeBlackBackgroundView;
	UIView* _topHalfSplitImage;
	UIView* _bottomHalfSplitImage;
	UIView* _padSidePortionImage;
	CFStringRef profileId;
	NSArray* captionPreviewSpecifiers;
	NSArray* videoOverrideSpecifiers;

}

@property (nonatomic,readonly) CFStringRef profileId; 
@property (nonatomic,readonly) NSArray * captionPreviewSpecifiers; 
@property (nonatomic,readonly) NSArray * videoOverrideSpecifiers; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSArray *)captionPreviewSpecifiers;
-(NSArray *)videoOverrideSpecifiers;
-(char)isPreviewExpanded;
-(void)captionPreviewWasTapped:(char)arg1 ;
-(id)_videoOverrideText;
-(void)_setVideoOverridesStyle:(id)arg1 specifier:(id)arg2 ;
-(id)_videoOverridesStyle:(id)arg1 ;
-(id)_snapshotWindow:(id)arg1 opaque:(char)arg2 ;
-(id)_splitImageAppropriately:(id)arg1 statusBar:(id)arg2 secondHalfStart:(CGPoint)arg3 secondHalfEnd:(CGPoint)arg4 ;
-(char)isStoredColorType:(int)arg1 equalWithColors:(id)arg2 ;
-(char)isStoredTransparencyType:(int)arg1 equalWithTransparency:(id)arg2 ;
-(void)updateTableCheckedSelection:(id)arg1 ;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(float)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(char)shouldAutorotate;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)willResignActive;
-(CFStringRef)profileId;
@end

