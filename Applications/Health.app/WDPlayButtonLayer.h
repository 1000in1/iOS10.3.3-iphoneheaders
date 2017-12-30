/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:23 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Health.app/Health
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuartzCore/CALayer.h>

@class CALayer, UIImage;

@interface WDPlayButtonLayer : CALayer {

	CALayer* _playSymbolLayer;

}

@property (nonatomic,readonly) UIImage * playImage; 
@property (nonatomic,retain) CALayer * playSymbolLayer;              //@synthesize playSymbolLayer=_playSymbolLayer - In the implementation block
-(CALayer *)playSymbolLayer;
-(void)setPlaySymbolLayer:(CALayer *)arg1 ;
-(void)layoutSublayers;
-(UIImage *)playImage;
@end

