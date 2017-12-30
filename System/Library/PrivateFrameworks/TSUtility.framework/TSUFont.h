/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:57:49 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TSUtility/TSUtility-Structs.h>
@class UIFont, NSString;

@interface TSUFont : NSObject {

	CTFontRef _ctFont;

}

@property (nonatomic,readonly) UIFont * UIFont; 
@property (nonatomic,readonly) UIFont * platformFont; 
@property (nonatomic,readonly) CTFontRef CTFont;                          //@synthesize ctFont=_ctFont - In the implementation block
@property (nonatomic,retain,readonly) NSString * familyName; 
@property (nonatomic,retain,readonly) NSString * fontName; 
@property (nonatomic,readonly) float pointSize; 
@property (nonatomic,readonly) float ascender; 
@property (nonatomic,readonly) float descender; 
@property (nonatomic,readonly) float capHeight; 
@property (nonatomic,readonly) float xHeight; 
@property (nonatomic,readonly) float lineHeight; 
+(id)fontWithUIFont:(id)arg1 ;
+(id)systemFontOfSize:(float)arg1 ;
+(id)boldSystemFontOfSize:(float)arg1 ;
+(id)fontWithName:(id)arg1 size:(float)arg2 ;
+(id)systemFontOfSize:(float)arg1 weight:(float)arg2 ;
+(id)italicSystemFontOfSize:(float)arg1 ;
-(id)initWithCTFont:(CTFontRef)arg1 ;
-(id)fontWithScale:(float)arg1 ;
-(id)initWithUIFont:(id)arg1 ;
-(UIFont *)UIFont;
-(UIFont *)platformFont;
-(void)dealloc;
-(float)ascender;
-(float)lineHeight;
-(float)pointSize;
-(id)fontWithSize:(float)arg1 ;
-(float)capHeight;
-(float)descender;
-(NSString *)fontName;
-(NSString *)familyName;
-(CTFontRef)CTFont;
-(float)xHeight;
@end

