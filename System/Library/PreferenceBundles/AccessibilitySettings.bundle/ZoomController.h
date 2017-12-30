/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 4:28:54 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PreferenceBundles/AccessibilitySettings.bundle/AccessibilitySettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AccessibilitySettings/AccessibilitySettings-Structs.h>
#import <AccessibilitySettings/AccessibilityBaseListController.h>

@class PSSpecifier;

@interface ZoomController : AccessibilityBaseListController {

	PSSpecifier* _zoomOnSpecifier;
	PSSpecifier* _leaveKeyboardUnzoomedSpecifier;
	PSSpecifier* _idleSlugOpacitySpecifier;

}

@property (nonatomic,retain) PSSpecifier * leaveKeyboardUnzoomedSpecifier;              //@synthesize leaveKeyboardUnzoomedSpecifier=_leaveKeyboardUnzoomedSpecifier - In the implementation block
@property (nonatomic,retain) PSSpecifier * idleSlugOpacitySpecifier;                    //@synthesize idleSlugOpacitySpecifier=_idleSlugOpacitySpecifier - In the implementation block
+(void)setZoomEnabled:(char)arg1 initialFocusRect:(CGRect)arg2 contextId:(unsigned)arg3 ;
+(void)setZoomEnabled:(char)arg1 ;
-(id)zoomLensModeSummary:(id)arg1 ;
-(id)zoomFilterSummary:(id)arg1 ;
-(id)zoomIdleSlugOpacitySummary:(id)arg1 ;
-(void)setZoomTouchEnabled:(id)arg1 specifier:(id)arg2 ;
-(id)zoomShouldFollowFocus:(id)arg1 ;
-(id)zoomPeekZoomEnabled:(id)arg1 ;
-(id)zoomShouldShowSlug:(id)arg1 ;
-(void)setZoomShouldShowSlug:(id)arg1 specifier:(id)arg2 ;
-(void)setZoomPeekZoomEnabled:(id)arg1 specifier:(id)arg2 ;
-(void)setZoomShouldFollowFocus:(id)arg1 specifier:(id)arg2 ;
-(id)zoomAlwaysUseWindowZoomForTyping:(id)arg1 ;
-(void)setZoomAlwaysUseWindowZoomForTyping:(id)arg1 specifier:(id)arg2 ;
-(void)setLeaveKeyboardUnzoomedSpecifier:(PSSpecifier *)arg1 ;
-(void)setIdleSlugOpacitySpecifier:(PSSpecifier *)arg1 ;
-(PSSpecifier *)leaveKeyboardUnzoomedSpecifier;
-(void)_updateOptionsFooterText:(char)arg1 ;
-(PSSpecifier *)idleSlugOpacitySpecifier;
-(id)_zoomTouchEnabledSpecifier;
-(void)_zoomTouchEnabledChange;
-(id)zoomTouchEnabled:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(id)tableView:(id)arg1 viewForFooterInSection:(int)arg2 ;
-(id)specifiers;
@end

