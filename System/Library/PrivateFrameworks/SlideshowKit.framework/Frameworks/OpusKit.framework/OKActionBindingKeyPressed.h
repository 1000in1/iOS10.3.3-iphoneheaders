/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:57:36 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusKit/OpusKit-Structs.h>
#import <OpusKit/OKActionBinding.h>

@class NSString;

@interface OKActionBindingKeyPressed : OKActionBinding {

	NSString* _keyPressed;
	char _isKeyUp;

}

@property (nonatomic,retain) NSString * keyPressed;              //@synthesize keyPressed=_keyPressed - In the implementation block
@property (assign,nonatomic) char isKeyUp;                       //@synthesize isKeyUp=_isKeyUp - In the implementation block
+(id)supportedSettings;
-(id)init;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithSettings:(id)arg1 ;
-(char)respondsToAction:(id)arg1 isTouchCountAgnostic:(char)arg2 ;
-(void)setKeyPressed:(NSString *)arg1 ;
-(void)setIsKeyUp:(char)arg1 ;
-(NSString *)keyPressed;
-(char)isKeyUp;
-(void)setSettingKeyPressed:(id)arg1 ;
-(void)setSettingIsKeyUp:(char)arg1 ;
@end
