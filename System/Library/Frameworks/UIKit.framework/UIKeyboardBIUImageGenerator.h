/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:25 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIKit/UIKit-Structs.h>
@class UIImage, NSMutableDictionary, UIColor;

@interface UIKeyboardBIUImageGenerator : NSObject {

	char _useButtonShapes;
	UIImage* _biuBoldImage;
	UIImage* _biuItalicImage;
	UIImage* _biuUnderlineImage;
	NSMutableDictionary* _imageCache;
	UIColor* _tintColor;
	UIColor* _normalColor;

}

@property (nonatomic,retain) UIColor * tintColor;                //@synthesize tintColor=_tintColor - In the implementation block
@property (nonatomic,retain) UIColor * normalColor;              //@synthesize normalColor=_normalColor - In the implementation block
-(id)init;
-(UIColor *)tintColor;
-(void)setTintColor:(UIColor *)arg1 ;
-(void)_accessibilitySettingsChanged:(id)arg1 ;
-(void)_invalidateCache;
-(void)_drawBIUAtSize:(CGSize)arg1 bold:(char)arg2 italic:(char)arg3 underline:(char)arg4 ;
-(void)setNormalColor:(UIColor *)arg1 ;
-(id)BIUImageForBold:(char)arg1 italic:(char)arg2 underline:(char)arg3 ;
-(UIColor *)normalColor;
@end

