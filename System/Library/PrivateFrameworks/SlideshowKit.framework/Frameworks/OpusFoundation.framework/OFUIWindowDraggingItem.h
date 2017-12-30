/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:57:34 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusFoundation.framework/OpusFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OFUIWindowDraggingPasteboard;
#import <OpusFoundation/OpusFoundation-Structs.h>
@class UIImageView, UIImage;

@interface OFUIWindowDraggingItem : NSObject {

	id<OFUIWindowDraggingPasteboard> _object;
	UIImageView* _imageView;
	UIImage* _originalImage;
	UIImage* _placeHolderImage;
	CGRect _originalBounds;
	float _imageAspectRatio;
	CGRect _imageContentsRect;
	CGAffineTransform _originalTransform;
	char _isReverting;
	double _rotation;

}

@property (nonatomic,retain) id<OFUIWindowDraggingPasteboard> object;              //@synthesize object=_object - In the implementation block
@property (nonatomic,retain) UIImageView * imageView;                              //@synthesize imageView=_imageView - In the implementation block
@property (assign,nonatomic) double rotation;                                      //@synthesize rotation=_rotation - In the implementation block
@property (nonatomic,retain) UIImage * originalImage;                              //@synthesize originalImage=_originalImage - In the implementation block
@property (nonatomic,retain) UIImage * placeHolderImage;                           //@synthesize placeHolderImage=_placeHolderImage - In the implementation block
@property (assign,nonatomic) CGRect originalBounds;                                //@synthesize originalBounds=_originalBounds - In the implementation block
@property (assign,nonatomic) float imageAspectRatio;                               //@synthesize imageAspectRatio=_imageAspectRatio - In the implementation block
@property (assign,nonatomic) CGRect imageContentsRect;                             //@synthesize imageContentsRect=_imageContentsRect - In the implementation block
@property (assign,nonatomic) CGAffineTransform originalTransform;                  //@synthesize originalTransform=_originalTransform - In the implementation block
@property (assign,nonatomic) char isReverting;                                     //@synthesize isReverting=_isReverting - In the implementation block
-(id)init;
-(void)dealloc;
-(id<OFUIWindowDraggingPasteboard>)object;
-(UIImageView *)imageView;
-(void)setObject:(id<OFUIWindowDraggingPasteboard>)arg1 ;
-(void)setRotation:(double)arg1 ;
-(double)rotation;
-(void)setImageView:(UIImageView *)arg1 ;
-(UIImage *)originalImage;
-(void)setImageContentsRect:(CGRect)arg1 ;
-(void)setOriginalImage:(UIImage *)arg1 ;
-(UIImage *)placeHolderImage;
-(void)setPlaceHolderImage:(UIImage *)arg1 ;
-(CGRect)imageContentsRect;
-(id)initWithObject:(id)arg1 image:(id)arg2 ;
-(CGRect)originalBounds;
-(void)setOriginalBounds:(CGRect)arg1 ;
-(float)imageAspectRatio;
-(void)setImageAspectRatio:(float)arg1 ;
-(CGAffineTransform)originalTransform;
-(void)setOriginalTransform:(CGAffineTransform)arg1 ;
-(char)isReverting;
-(void)setIsReverting:(char)arg1 ;
@end

