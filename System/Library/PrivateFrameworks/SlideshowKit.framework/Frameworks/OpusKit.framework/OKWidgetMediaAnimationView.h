/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:57:34 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusKit/OKWidgetView.h>
#import <libobjc.A.dylib/OKSettingsSupport.h>

@class NSMutableArray, NSString;

@interface OKWidgetMediaAnimationView : OKWidgetView <OKSettingsSupport> {

	NSMutableArray* _CGImages;
	char _autoplay;
	char _loop;
	float _duration;
	NSString* _uuid;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)animationKeyPrefix;
+(id)supportedSettings;
+(void)setupJavascriptContext:(id)arg1 ;
-(void)dealloc;
-(void)stopAnimation;
-(id)valueForUndefinedKey:(id)arg1 ;
-(char)prepareForDisplay:(char)arg1 ;
-(void)playAnimation;
-(id)settingObjectForKey:(id)arg1 ;
-(int)settingContentMode;
-(void)setSettingContentMode:(int)arg1 ;
-(void)setSettingUrls:(id)arg1 ;
-(char)settingAutoplay;
-(void)setSettingAutoplay:(char)arg1 ;
-(char)settingLoop;
-(void)setSettingLoop:(char)arg1 ;
-(float)settingDuration;
-(void)setSettingDuration:(float)arg1 ;
-(id)initWithWidget:(id)arg1 ;
@end

