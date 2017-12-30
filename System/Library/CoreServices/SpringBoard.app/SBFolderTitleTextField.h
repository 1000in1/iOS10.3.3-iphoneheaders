/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:22 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKit/UITextField.h>

@class _UILegibilityView, _UILegibilitySettings;

@interface SBFolderTitleTextField : UITextField {

	char _showingEditUI;
	_UILegibilityView* _legibilityView;
	char _allowsEditing;
	_UILegibilitySettings* _legibilitySettings;

}

@property (assign,nonatomic) char allowsEditing;                                      //@synthesize allowsEditing=_allowsEditing - In the implementation block
@property (assign,nonatomic) float fontSize; 
@property (nonatomic,retain) _UILegibilitySettings * legibilitySettings;              //@synthesize legibilitySettings=_legibilitySettings - In the implementation block
@property (nonatomic,readonly) char showingEditUI;                                    //@synthesize showingEditUI=_showingEditUI - In the implementation block
+(void)warmupIfNecessary;
+(id)_editBackgroundImage;
+(id)_clearButtonImage;
-(void)_updateLegibility;
-(char)showingEditUI;
-(float)_legibilityStrength;
-(id)_clearButtonImage;
-(CGRect)_textRectForBounds:(CGRect)arg1 ;
-(void)setShowsEditUI:(char)arg1 animated:(char)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setText:(id)arg1 ;
-(CGRect)editingRectForBounds:(CGRect)arg1 ;
-(id)_backgroundImage;
-(CGRect)textRectForBounds:(CGRect)arg1 ;
-(void)setFontSize:(float)arg1 ;
-(char)allowsEditing;
-(void)setAllowsEditing:(char)arg1 ;
-(CGRect)clearButtonRectForBounds:(CGRect)arg1 ;
-(void)setLegibilitySettings:(_UILegibilitySettings *)arg1 ;
-(_UILegibilitySettings *)legibilitySettings;
-(float)fontSize;
-(void)_updateLegibilityView;
@end

