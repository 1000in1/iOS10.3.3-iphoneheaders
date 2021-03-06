/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:26 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKit/UIView.h>
#import <SpringBoard/_SBIconWallpaperBackgroundClient.h>

@protocol SBIconBlurryBackgroundViewObserver;
@class NSString;

@interface SBIconBlurryBackgroundView : UIView <_SBIconWallpaperBackgroundClient> {

	CGRect _wallpaperRelativeBounds;
	char _isBlurring;
	char _suppressesExternalUpdates;
	id<SBIconBlurryBackgroundViewObserver> _observer;
	/*^block*/id _wantsBlurEvaluator;
	CGPoint _wallpaperRelativeCenter;

}

@property (assign,nonatomic,__weak) id<SBIconBlurryBackgroundViewObserver> observer;                          //@synthesize observer=_observer - In the implementation block
@property (assign,nonatomic) CGPoint wallpaperRelativeCenter;                                                 //@synthesize wallpaperRelativeCenter=_wallpaperRelativeCenter - In the implementation block
@property (nonatomic,readonly) char isBlurring;                                                               //@synthesize isBlurring=_isBlurring - In the implementation block
@property (nonatomic,copy) id wantsBlurEvaluator;                                                             //@synthesize wantsBlurEvaluator=_wantsBlurEvaluator - In the implementation block
@property (assign,getter=isSuppressingExternalUpdates,nonatomic) char suppressesExternalUpdates;              //@synthesize suppressesExternalUpdates=_suppressesExternalUpdates - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setWallpaperRelativeCenter:(CGPoint)arg1 ;
-(void)setSuppressesExternalUpdates:(char)arg1 ;
-(void)setWantsBlurEvaluator:(id)arg1 ;
-(CGRect)wallpaperRelativeBounds;
-(char)wantsBlur:(id)arg1 ;
-(void)setWallpaperBackgroundRect:(CGRect)arg1 forContents:(CGImageRef)arg2 withFallbackColor:(CGColorRef)arg3 ;
-(void)setBlurring:(char)arg1 ;
-(char)isBlurring;
-(CGPoint)wallpaperRelativeCenter;
-(id)wantsBlurEvaluator;
-(char)isSuppressingExternalUpdates;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(char)_shouldAnimatePropertyWithKey:(id)arg1 ;
-(void)didAddSubview:(id)arg1 ;
-(void)setObserver:(id<SBIconBlurryBackgroundViewObserver>)arg1 ;
-(id<SBIconBlurryBackgroundViewObserver>)observer;
@end

