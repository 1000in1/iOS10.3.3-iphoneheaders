/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:17 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class _UIBackdropViewSettings, _UIVisualEffectConfig;

@interface UIVisualEffect : NSObject <NSCopying, NSSecureCoding> {

	char __isATVStyle;
	char __isAutomaticStyle;
	_UIBackdropViewSettings* _effectSettings;
	_UIVisualEffectConfig* _effectConfig;

}

@property (nonatomic,readonly) _UIBackdropViewSettings * effectSettings;              //@synthesize effectSettings=_effectSettings - In the implementation block
@property (nonatomic,readonly) char _isATVStyle;                                      //@synthesize _isATVStyle=__isATVStyle - In the implementation block
@property (nonatomic,readonly) char _isAutomaticStyle;                                //@synthesize _isAutomaticStyle=__isAutomaticStyle - In the implementation block
@property (nonatomic,readonly) _UIVisualEffectConfig * effectConfig;                  //@synthesize effectConfig=_effectConfig - In the implementation block
+(char)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)effectConfigForQuality:(int)arg1 ;
-(id)effectForUserInterfaceStyle:(int)arg1 ;
-(_UIBackdropViewSettings *)effectSettings;
-(char)_isATVStyle;
-(char)_isAutomaticStyle;
-(_UIVisualEffectConfig *)effectConfig;
@end

