/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:39 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <UIKit/UIView.h>

@class NSString, UIColor;

@interface GuidanceSignDistanceLabel : UIView {

	NSString* _text;
	int _textAlignment;
	UIColor* _textColor;
	UIColor* _accentColor;
	CTFrameRef _frame;
	int _framing;
	float _maximumWidth;
	NSString* _fontName;
	NSString* _digitsFontName;
	float _fontSize;
	float _digitsFontSize;

}

@property (nonatomic,copy) NSString * text;                        //@synthesize text=_text - In the implementation block
@property (assign,nonatomic) int textAlignment;                    //@synthesize textAlignment=_textAlignment - In the implementation block
@property (nonatomic,retain) UIColor * textColor;                  //@synthesize textColor=_textColor - In the implementation block
@property (nonatomic,retain) UIColor * accentColor;                //@synthesize accentColor=_accentColor - In the implementation block
@property (assign,nonatomic) int framing;                          //@synthesize framing=_framing - In the implementation block
@property (assign,nonatomic) float maximumWidth;                   //@synthesize maximumWidth=_maximumWidth - In the implementation block
@property (nonatomic,readonly) float textWidth; 
@property (nonatomic,copy) NSString * fontName;                    //@synthesize fontName=_fontName - In the implementation block
@property (nonatomic,copy) NSString * digitsFontName;              //@synthesize digitsFontName=_digitsFontName - In the implementation block
@property (assign,nonatomic) float fontSize;                       //@synthesize fontSize=_fontSize - In the implementation block
@property (assign,nonatomic) float digitsFontSize;                 //@synthesize digitsFontSize=_digitsFontSize - In the implementation block
+(id)attributedStringWithText:(id)arg1 font:(CTFontRef)arg2 digitsFont:(CTFontRef)arg3 alignment:(int)arg4 color:(id)arg5 ;
+(id)stringAttributesWithFont:(CTFontRef)arg1 alignment:(int)arg2 color:(id)arg3 ;
-(void)setFraming:(int)arg1 ;
-(int)framing;
-(void)setDigitsFontName:(NSString *)arg1 ;
-(void)setDigitsFontSize:(float)arg1 ;
-(CTFrameRef)CTFrame;
-(CTFrameRef)CTFrameForSize:(CGSize)arg1 ;
-(void)clearCTFrame;
-(float)textWidthForSize:(CGSize)arg1 ;
-(NSString *)digitsFontName;
-(float)digitsFontSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)dealloc;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setTextAlignment:(int)arg1 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(void)setTextColor:(UIColor *)arg1 ;
-(void)setMaximumWidth:(float)arg1 ;
-(float)maximumWidth;
-(UIColor *)textColor;
-(int)textAlignment;
-(NSString *)fontName;
-(void)setFontSize:(float)arg1 ;
-(void)setFontName:(NSString *)arg1 ;
-(float)fontSize;
-(float)textWidth;
-(void)setAccentColor:(UIColor *)arg1 ;
-(UIColor *)accentColor;
@end

