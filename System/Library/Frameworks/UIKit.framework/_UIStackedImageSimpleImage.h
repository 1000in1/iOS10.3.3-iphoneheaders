/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:24 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UINamedLayerImage.h>

@class NSString, UIImage;

@interface _UIStackedImageSimpleImage : NSObject <UINamedLayerImage> {

	NSString* _name;
	float _opacity;
	int _blendMode;
	UIImage* _imageObj;
	CGRect _frame;

}

@property (nonatomic,retain) NSString * name;                       //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) CGRect frame;                          //@synthesize frame=_frame - In the implementation block
@property (assign,nonatomic) float opacity;                         //@synthesize opacity=_opacity - In the implementation block
@property (assign,nonatomic) int blendMode;                         //@synthesize blendMode=_blendMode - In the implementation block
@property (nonatomic,retain) UIImage * imageObj;                    //@synthesize imageObj=_imageObj - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) char fixedFrame; 
-(void)setFrame:(CGRect)arg1 ;
-(CGRect)frame;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(UIImage *)imageObj;
-(float)opacity;
-(void)setOpacity:(float)arg1 ;
-(int)blendMode;
-(void)setBlendMode:(int)arg1 ;
-(void)setImageObj:(UIImage *)arg1 ;
@end

