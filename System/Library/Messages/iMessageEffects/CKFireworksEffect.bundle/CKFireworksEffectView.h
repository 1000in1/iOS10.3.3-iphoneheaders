/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 6:38:17 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Messages/iMessageEffects/CKFireworksEffect.bundle/CKFireworksEffect
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CKFireworksEffect/CKFireworksEffect-Structs.h>
#import <UIKit/UIView.h>
#import <CKFireworksEffect/CKFullscreenEffectView.h>

@class SKView, GameScene;

@interface CKFireworksEffectView : UIView <CKFullscreenEffectView> {

	SKView* _fireworksView;
	GameScene* _scene;
	char messageOrientation;
	int zIndex;
	CGPoint focusPoint;
	CGRect messageRect;

}

@property (assign,nonatomic) int zIndex; 
@property (assign,nonatomic) CGPoint focusPoint; 
@property (assign,nonatomic) CGRect messageRect; 
@property (assign,nonatomic) char messageOrientation; 
-(CGRect)messageRect;
-(char)messageOrientation;
-(void)applicationWillEnterForegroundNotification;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)stopAnimation;
-(void)startAnimation;
-(void)setZIndex:(int)arg1 ;
-(void)applicationDidBecomeActive;
-(void)applicationWillResignActive;
-(int)zIndex;
-(void)applicationDidEnterBackground;
-(CGPoint)focusPoint;
-(void)setFocusPoint:(CGPoint)arg1 ;
-(void)setMessageRect:(CGRect)arg1 ;
-(void)setMessageOrientation:(char)arg1 ;
@end

