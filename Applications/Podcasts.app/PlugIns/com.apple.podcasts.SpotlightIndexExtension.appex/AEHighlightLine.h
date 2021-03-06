/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:25:23 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Podcasts.app/PlugIns/com.apple.podcasts.SpotlightIndexExtension.appex/com.apple.podcasts.SpotlightIndexExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <com.apple.podcasts.SpotlightIndexExtension/com.apple.podcasts.SpotlightIndexExtension-Structs.h>
@class CALayer;

@interface AEHighlightLine : NSObject {

	CALayer* mLayer;
	CGRect mFullLineRect;
	CGRect mCurrentLineRect;
	float mUnderlinePosition;
	CGImageRef mMultiplyImage;
	char mLightenBlend;
	char mIncludesCapSpace;
	char mIsSingleWord;
	CALayer* mContentLayer;
	int mUnderlineDirection;

}

@property (nonatomic,retain) CALayer * contentLayer; 
@property (assign,nonatomic) CGRect fullLineRect; 
@property (assign,nonatomic) CGRect currentLineRect; 
@property (assign,nonatomic) float underlinePosition; 
@property (assign,nonatomic) int underlineDirection; 
@property (assign,nonatomic) CGImageRef multiplyImage; 
@property (assign,nonatomic) char lightenBlend; 
@property (assign,nonatomic) char includesCapSpace; 
@property (assign,nonatomic) char isSingleWord; 
-(void)setMultiplyImage:(CGImageRef)arg1 ;
-(CGRect)fullLineRect;
-(void)setFullLineRect:(CGRect)arg1 ;
-(CGRect)currentLineRect;
-(void)setCurrentLineRect:(CGRect)arg1 ;
-(void)setUnderlinePosition:(float)arg1 ;
-(int)underlineDirection;
-(void)setUnderlineDirection:(int)arg1 ;
-(CGImageRef)multiplyImage;
-(char)lightenBlend;
-(void)setLightenBlend:(char)arg1 ;
-(char)includesCapSpace;
-(void)setIncludesCapSpace:(char)arg1 ;
-(char)isSingleWord;
-(void)setIsSingleWord:(char)arg1 ;
-(void)dealloc;
-(float)underlinePosition;
-(void)setContentLayer:(CALayer *)arg1 ;
-(CALayer *)contentLayer;
@end

