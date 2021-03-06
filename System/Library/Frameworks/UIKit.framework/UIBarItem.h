/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:19 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <UIKit/UIAppearance.h>

@class NSString, UIImage;

@interface UIBarItem : NSObject <NSCoding, UIAppearance> {

	char _hasCustomizableInstanceAppearanceModifications;
	char _shouldArchiveUIAppearanceTags;
	int _tag;

}

@property (assign,setter=_setHasCustomizableInstanceAppearanceModifications:,nonatomic) char _hasCustomizableInstanceAppearanceModifications;              //@synthesize hasCustomizableInstanceAppearanceModifications=_hasCustomizableInstanceAppearanceModifications - In the implementation block
@property (assign,setter=_setShouldArchiveUIAppearanceTags:,nonatomic) char _shouldArchiveUIAppearanceTags;                                                //@synthesize shouldArchiveUIAppearanceTags=_shouldArchiveUIAppearanceTags - In the implementation block
@property (nonatomic,copy,readonly) NSString * resolvedTitle; 
@property (nonatomic,readonly) char selected; 
@property (nonatomic,readonly) char hasTitle; 
@property (nonatomic,readonly) char hasImage; 
@property (assign,getter=isEnabled,nonatomic) char enabled; 
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,retain) UIImage * image; 
@property (nonatomic,retain) UIImage * landscapeImagePhone; 
@property (assign,nonatomic) UIEdgeInsets imageInsets; 
@property (assign,nonatomic) UIEdgeInsets landscapeImagePhoneInsets; 
@property (assign,nonatomic) int tag;                                                                                                                      //@synthesize tag=_tag - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)appearanceForTraitCollection:(id)arg1 ;
+(id)_appearanceWhenContainedIn:(id)arg1 ;
+(id)appearance;
+(id)appearanceWhenContainedInInstancesOfClasses:(id)arg1 ;
+(id)appearanceWhenContainedIn:(Class)arg1 ;
+(id)appearanceForTraitCollection:(id)arg1 whenContainedInInstancesOfClasses:(id)arg2 ;
+(id)appearanceForTraitCollection:(id)arg1 whenContainedIn:(Class)arg2 ;
+(id)_appearanceBlindViewClasses;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)_shouldArchiveUIAppearanceTags;
-(void)_setShouldArchiveUIAppearanceTags:(char)arg1 ;
-(int)tag;
-(void)setTag:(int)arg1 ;
-(void)setTitleTextAttributes:(id)arg1 forState:(unsigned)arg2 ;
-(id)titleTextAttributesForState:(unsigned)arg1 ;
-(char)selected;
-(char)hasTitle;
-(NSString *)resolvedTitle;
-(char)hasImage;
-(id)_attributedTitleForState:(unsigned)arg1 withDefaultAttributes:(id)arg2 ;
-(id)_imageForState:(unsigned)arg1 metrics:(int)arg2 position:(int)arg3 type:(int)arg4 ;
-(char)_hasCustomizableInstanceAppearanceModifications;
-(void)_setHasCustomizableInstanceAppearanceModifications:(char)arg1 ;
@end

