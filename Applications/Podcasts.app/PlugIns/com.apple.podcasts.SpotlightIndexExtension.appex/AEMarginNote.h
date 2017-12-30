/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:25:23 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Podcasts.app/PlugIns/com.apple.podcasts.SpotlightIndexExtension.appex/com.apple.podcasts.SpotlightIndexExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <com.apple.podcasts.SpotlightIndexExtension/com.apple.podcasts.SpotlightIndexExtension-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol AEAnnotation;
@class AEAnnotationTheme;

@interface AEMarginNote : NSObject <NSCopying> {

	int mSide;
	float mYStart;
	float mYEnd;
	float mXOffset;
	id<AEAnnotation> mAnnotation;
	AEAnnotationTheme* mTheme;

}

@property (nonatomic,retain) AEAnnotationTheme * theme; 
@property (assign,nonatomic) int side; 
@property (nonatomic,retain) id<AEAnnotation> annotation; 
@property (assign,nonatomic) float yStart; 
@property (assign,nonatomic) float yEnd; 
@property (assign,nonatomic) float xOffset; 
-(void)setXOffset:(float)arg1 ;
-(float)xOffset;
-(int)side;
-(void)setSide:(int)arg1 ;
-(float)yStart;
-(void)setYStart:(float)arg1 ;
-(float)yEnd;
-(void)setYEnd:(float)arg1 ;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id<AEAnnotation>)annotation;
-(void)setAnnotation:(id<AEAnnotation>)arg1 ;
-(AEAnnotationTheme *)theme;
-(void)setTheme:(AEAnnotationTheme *)arg1 ;
@end

