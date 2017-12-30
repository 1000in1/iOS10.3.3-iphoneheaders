/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:20 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>
#import <SpringBoard/SBDashBoardAppearanceProviding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableSet, NSString, _UILegibilitySettings, UIColor, NSSet;

@interface SBDashBoardAppearance : NSObject <BSDescriptionProviding, SBDashBoardAppearanceProviding, NSCopying> {

	NSMutableSet* _components;
	char _transitional;
	NSString* _identifier;
	int _backgroundStyle;
	_UILegibilitySettings* _legibilitySettings;
	UIColor* _backgroundColor;

}

@property (nonatomic,copy) NSString * identifier;                                     //@synthesize identifier=_identifier - In the implementation block
@property (assign,getter=isTransitional,nonatomic) char transitional;                 //@synthesize transitional=_transitional - In the implementation block
@property (assign,nonatomic) int backgroundStyle;                                     //@synthesize backgroundStyle=_backgroundStyle - In the implementation block
@property (nonatomic,retain) UIColor * backgroundColor;                               //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,copy) NSSet * components;                                        //@synthesize components=_components - In the implementation block
@property (nonatomic,retain) _UILegibilitySettings * legibilitySettings;              //@synthesize legibilitySettings=_legibilitySettings - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * appearanceIdentifier; 
+(id)appearanceWithIdentifier:(id)arg1 ;
+(id)appearanceForProvider:(id)arg1 ;
-(void)unionAppearance:(id)arg1 ;
-(NSString *)appearanceIdentifier;
-(id)componentForType:(int)arg1 property:(unsigned)arg2 ;
-(id)componentForType:(int)arg1 identifier:(id)arg2 ;
-(int)flagForComponentType:(int)arg1 ;
-(void)setTransitional:(char)arg1 ;
-(char)isEqualToAppearance:(id)arg1 ;
-(void)removeAllComponentsWithIdentifier:(id)arg1 ;
-(char)isTransitional;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(UIColor *)backgroundColor;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(NSString *)description;
-(NSString *)identifier;
-(int)backgroundStyle;
-(void)setBackgroundStyle:(int)arg1 ;
-(void)reset;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)initWithIdentifier:(id)arg1 ;
-(void)setLegibilitySettings:(_UILegibilitySettings *)arg1 ;
-(_UILegibilitySettings *)legibilitySettings;
-(NSSet *)components;
-(void)addComponent:(id)arg1 ;
-(void)setComponents:(NSSet *)arg1 ;
-(void)removeComponent:(id)arg1 ;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
@end

