/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 6:38:16 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Messages/iMessageBalloons/HandwritingProvider.bundle/HandwritingProvider
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HandwritingProvider/HandwritingProvider-Structs.h>
#import <UIKit/UIView.h>
#import <DigitalTouchBalloonProvider/CKTranscriptPluginView.h>

@class HWBalloonDataSource, HWHandwritingItem, UIImageView, DKInkView, UIImage, NSString;

@interface HWPluginContentView : UIView <CKTranscriptPluginView> {

	HWBalloonDataSource* _dataSource;
	HWHandwritingItem* _handwriting;
	UIImageView* _imageView;
	DKInkView* _inkView;
	UIImage* _cachedImage;
	CGSize _cachedSize;

}

@property (assign,nonatomic) HWBalloonDataSource * dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,retain) HWHandwritingItem * handwriting;               //@synthesize handwriting=_handwriting - In the implementation block
@property (retain) UIImageView * imageView;                                 //@synthesize imageView=_imageView - In the implementation block
@property (retain) DKInkView * inkView;                                     //@synthesize inkView=_inkView - In the implementation block
@property (retain) UIImage * cachedImage;                                   //@synthesize cachedImage=_cachedImage - In the implementation block
@property (assign) CGSize cachedSize;                                       //@synthesize cachedSize=_cachedSize - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) char wantsOutline; 
+(id)_inkColor;
+(id)_backgroundColor;
-(CGSize)cachedSize;
-(void)_lazySetupGLInkView;
-(void)cleanupAfterAnimation;
-(void)_teardownInkView;
-(void)setHandwriting:(HWHandwritingItem *)arg1 ;
-(HWHandwritingItem *)handwriting;
-(void)setCachedSize:(CGSize)arg1 ;
-(void)replayDrawingWithCompletionBlock:(/*^block*/id)arg1 ;
-(DKInkView *)inkView;
-(id)currentBackgroundColor;
-(void)_updateCachedImageForSize:(CGSize)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)setInkView:(DKInkView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setDataSource:(HWBalloonDataSource *)arg1 ;
-(HWBalloonDataSource *)dataSource;
-(UIImageView *)imageView;
-(void)setImageView:(UIImageView *)arg1 ;
-(void)setCachedImage:(UIImage *)arg1 ;
-(UIImage *)cachedImage;
@end

