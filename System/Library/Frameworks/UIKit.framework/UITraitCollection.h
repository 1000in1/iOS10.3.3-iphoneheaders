/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:37 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary, NSString;

@interface UITraitCollection : NSObject <NSCopying, NSSecureCoding> {

	SCD_Struct_UI101 _builtinTraits;
	NSDictionary* _clientDefinedTraits;

}

@property (nonatomic,readonly) int barMetrics; 
@property (nonatomic,readonly) int barPosition; 
@property (nonatomic,readonly) int userInterfaceIdiom; 
@property (nonatomic,readonly) int userInterfaceStyle; 
@property (nonatomic,readonly) int layoutDirection; 
@property (nonatomic,readonly) float displayScale; 
@property (nonatomic,readonly) int horizontalSizeClass; 
@property (nonatomic,readonly) int verticalSizeClass; 
@property (nonatomic,readonly) int forceTouchCapability; 
@property (nonatomic,copy,readonly) NSString * preferredContentSizeCategory; 
@property (nonatomic,readonly) int displayGamut; 
+(id)traitCollectionWithUserInterfaceStyle:(int)arg1 ;
+(char)supportsSecureCoding;
+(id)traitCollectionWithDisplayScale:(float)arg1 ;
+(id)traitCollectionWithForceTouchCapability:(int)arg1 ;
+(id)traitCollectionWithHorizontalSizeClass:(int)arg1 ;
+(id)traitCollectionWithVerticalSizeClass:(int)arg1 ;
+(id)traitCollectionWithTraitsFromCollections:(id)arg1 ;
+(id)_emptyTraitCollection;
+(id)traitCollectionWithUserInterfaceIdiom:(int)arg1 ;
+(id)traitCollectionWithLayoutDirection:(int)arg1 ;
+(id)traitCollectionWithDisplayGamut:(int)arg1 ;
+(id)traitCollectionWithInteractionModel:(unsigned)arg1 ;
+(id)traitCollectionWithTouchLevel:(int)arg1 ;
+(id)traitCollectionWithPrimaryInteractionModel:(unsigned)arg1 ;
+(id)traitCollectionWithPreferredContentSizeCategory:(id)arg1 ;
+(id)_traitCollectionWithValue:(id)arg1 forTraitNamed:(id)arg2 ;
+(id)traitCollectionWithBarMetrics:(int)arg1 ;
+(id)traitCollectionWithBarPosition:(int)arg1 ;
-(id)init;
-(int)userInterfaceIdiom;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(int)verticalSizeClass;
-(int)userInterfaceStyle;
-(NSString *)preferredContentSizeCategory;
-(int)horizontalSizeClass;
-(unsigned)primaryInteractionModel;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)layoutDirection;
-(id)_initWithBuiltinTraitStorage:(SCD_Struct_UI101*)arg1 clientDefinedTraits:(id)arg2 ;
-(char)containsTraitsInCollection:(id)arg1 ;
-(float)displayScale;
-(int)displayGamut;
-(int)barMetrics;
-(int)barPosition;
-(unsigned)interactionModel;
-(char)_changedContentSizeCategoryFromTraitCollection:(id)arg1 ;
-(int)forceTouchCapability;
-(int)_compare:(id)arg1 ;
-(id)_traitCollectionByReplacingValue:(id)arg1 forTraitName:(id)arg2 ;
-(id)_valueForTraitNamed:(id)arg1 ;
-(id)_namedImageDescription;
-(char)_matchesIntersectionWithTraitCollection:(id)arg1 ;
-(int)touchLevel;
@end

