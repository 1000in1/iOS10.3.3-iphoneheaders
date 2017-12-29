/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:50 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class UIColor;

@interface _UIGroupTableViewCellBackgroundImageKey : NSObject <NSCopying> {

	char _opaque;
	char _selected;
	CGSize _size;
	UIColor* _backgroundColor;
	UIColor* _sectionBorderColor;
	float _sectionBorderWidth;
	UIColor* _separatorColor;
	UIColor* _topShadowColor;
	UIColor* _bottomShadowColor;
	UIColor* _fillColor;
	UIColor* _selectionColor;
	float _leftPhase;
	float _rightPhase;
	int _sectionLocation;
	int _selectionStyle;
	UIEdgeInsets _separatorInset;

}

@property (assign,nonatomic) char opaque;                               //@synthesize opaque=_opaque - In the implementation block
@property (assign,nonatomic) char selected;                             //@synthesize selected=_selected - In the implementation block
@property (assign,nonatomic) CGSize size;                               //@synthesize size=_size - In the implementation block
@property (nonatomic,retain) UIColor * backgroundColor;                 //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,retain) UIColor * sectionBorderColor;              //@synthesize sectionBorderColor=_sectionBorderColor - In the implementation block
@property (assign,nonatomic) float sectionBorderWidth;                  //@synthesize sectionBorderWidth=_sectionBorderWidth - In the implementation block
@property (nonatomic,retain) UIColor * separatorColor;                  //@synthesize separatorColor=_separatorColor - In the implementation block
@property (nonatomic,retain) UIColor * topShadowColor;                  //@synthesize topShadowColor=_topShadowColor - In the implementation block
@property (nonatomic,retain) UIColor * bottomShadowColor;               //@synthesize bottomShadowColor=_bottomShadowColor - In the implementation block
@property (nonatomic,retain) UIColor * fillColor;                       //@synthesize fillColor=_fillColor - In the implementation block
@property (nonatomic,retain) UIColor * selectionColor;                  //@synthesize selectionColor=_selectionColor - In the implementation block
@property (assign,nonatomic) float leftPhase;                           //@synthesize leftPhase=_leftPhase - In the implementation block
@property (assign,nonatomic) float rightPhase;                          //@synthesize rightPhase=_rightPhase - In the implementation block
@property (assign,nonatomic) int sectionLocation;                       //@synthesize sectionLocation=_sectionLocation - In the implementation block
@property (assign,nonatomic) int selectionStyle;                        //@synthesize selectionStyle=_selectionStyle - In the implementation block
@property (assign,nonatomic) UIEdgeInsets separatorInset;               //@synthesize separatorInset=_separatorInset - In the implementation block
-(CGSize)size;
-(void)setOpaque:(char)arg1 ;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(UIColor *)backgroundColor;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setSize:(CGSize)arg1 ;
-(UIColor *)separatorColor;
-(void)setSectionBorderColor:(UIColor *)arg1 ;
-(int)selectionStyle;
-(void)setSeparatorColor:(UIColor *)arg1 ;
-(void)setTopShadowColor:(UIColor *)arg1 ;
-(void)setBottomShadowColor:(UIColor *)arg1 ;
-(UIColor *)sectionBorderColor;
-(void)setSelected:(char)arg1 ;
-(void)setSeparatorInset:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)separatorInset;
-(void)setSelectionStyle:(int)arg1 ;
-(void)setFillColor:(UIColor *)arg1 ;
-(UIColor *)fillColor;
-(int)sectionLocation;
-(void)setSectionLocation:(int)arg1 ;
-(float)sectionBorderWidth;
-(void)setSectionBorderWidth:(float)arg1 ;
-(UIColor *)topShadowColor;
-(char)opaque;
-(UIColor *)bottomShadowColor;
-(char)selected;
-(UIColor *)selectionColor;
-(void)setSelectionColor:(UIColor *)arg1 ;
-(float)leftPhase;
-(void)setLeftPhase:(float)arg1 ;
-(float)rightPhase;
-(void)setRightPhase:(float)arg1 ;
@end
