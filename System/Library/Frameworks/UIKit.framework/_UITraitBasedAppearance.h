/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:28 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/_UIAppearance.h>

@class UITraitCollection;

@interface _UITraitBasedAppearance : _UIAppearance {

	UITraitCollection* _traitCollection;

}
+(id)_appearanceForTraitCollection:(id)arg1 forClass:(Class)arg2 withContainerList:(id)arg3 ;
+(char)_hasAnyCustomizations;
+(char)_hasCustomizationsForTraitCollection:(id)arg1 class:(Class)arg2 guideClass:(Class)arg3 ;
+(void)_setHasAnyCustomizations;
-(void)dealloc;
-(id)_traitCollection;
-(char)_isValidAppearanceForCustomizableObject:(id)arg1 ;
-(void)_invalidateAppearanceInWindow:(id)arg1 ;
@end

