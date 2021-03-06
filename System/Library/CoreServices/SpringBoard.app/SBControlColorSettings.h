/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:21 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIColor;

@interface SBControlColorSettings : NSObject {

	UIColor* _tintColor;
	UIColor* _selectedTintColor;
	UIColor* _textColor;
	UIColor* _selectedTextColor;

}

@property (nonatomic,readonly) UIColor * tintColor;                      //@synthesize tintColor=_tintColor - In the implementation block
@property (nonatomic,readonly) UIColor * selectedTintColor;              //@synthesize selectedTintColor=_selectedTintColor - In the implementation block
@property (nonatomic,readonly) UIColor * textColor;                      //@synthesize textColor=_textColor - In the implementation block
@property (nonatomic,readonly) UIColor * selectedTextColor;              //@synthesize selectedTextColor=_selectedTextColor - In the implementation block
+(id)settingsWithTintColor:(id)arg1 selectedTintColor:(id)arg2 textColor:(id)arg3 selectedTextColor:(id)arg4 ;
-(UIColor *)selectedTintColor;
-(id)initWithTintColor:(id)arg1 selectedTintColor:(id)arg2 textColor:(id)arg3 selectedTextColor:(id)arg4 ;
-(UIColor *)tintColor;
-(UIColor *)textColor;
-(UIColor *)selectedTextColor;
@end

