/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:25:36 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Stocks.app/PlugIns/StocksWidget.appex/StocksWidget
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StocksWidget/StocksWidget-Structs.h>
#import <UIKit/UIButton.h>

@class UIColor, UIImage;

@interface SWTodayRowOrnamentControl : UIButton {

	UIColor* _imageMaskColor;
	UIImage* _maskImage;

}

@property (nonatomic,retain) UIColor * imageMaskColor;              //@synthesize imageMaskColor=_imageMaskColor - In the implementation block
@property (nonatomic,retain) UIImage * maskImage;                   //@synthesize maskImage=_maskImage - In the implementation block
-(void)drawRect:(CGRect)arg1 ;
-(void)sizeToFit;
-(void)setMaskImage:(UIImage *)arg1 ;
-(UIColor *)imageMaskColor;
-(UIImage *)maskImage;
-(void)setImageMaskColor:(UIColor *)arg1 ;
@end

