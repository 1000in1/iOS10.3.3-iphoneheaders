/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 4:28:55 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PreferenceBundles/AccessibilitySettings.bundle/AccessibilitySettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AccessibilitySettings/AccessibilitySettings-Structs.h>
#import <Preferences/PSTableCell.h>
#import <UIKit/UIScrollViewDelegate.h>

@class UIImageView, NSString;

@interface DisplayFilterPreviewCell : PSTableCell <UIScrollViewDelegate> {

	UIImageView* _previewImageView;

}

@property (nonatomic,retain) UIImageView * previewImageView;              //@synthesize previewImageView=_previewImageView - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(float)previewCellHeight;
-(void)setPreviewImageView:(UIImageView *)arg1 ;
-(void)layoutSubviews;
-(void)dealloc;
-(UIImageView *)previewImageView;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3 ;
@end

