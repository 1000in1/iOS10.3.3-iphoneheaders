/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:57:39 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface MPTransitionManager : NSObject {

	NSMutableDictionary* mTransitions;
	NSMutableDictionary* mTransitionCategories;
	NSMutableDictionary* mTransitionPresets;

}
+(void)releaseSharedManager;
+(void)loadTransitionManagerWithPaths:(id)arg1 ;
+(id)sharedManager;
-(id)descriptionForTransitionID:(id)arg1 ;
-(id)attributesForTransitionID:(id)arg1 andPresetID:(id)arg2 ;
-(id)allTransitionIDs;
-(id)categoryIDsForTransitionID:(id)arg1 ;
-(id)transitionsForCategoryID:(id)arg1 ;
-(id)settingsUIControlDescriptionsForTransition:(id)arg1 ;
-(id)versionOfTransitionID:(id)arg1 ;
-(float)beatStrengthForTransitionID:(id)arg1 ;
-(double)defaultDurationForTransitionID:(id)arg1 ;
-(int)transitionNeedsRandomSeedInformation:(id)arg1 ;
-(id)allCategoryIDs;
-(id)constraintsForTransitionPresetsMatchingList:(id)arg1 andCriteria:(id)arg2 ;
-(id)presetsForTransitionID:(id)arg1 ;
-(double)bestBeatTimeForTransitionID:(id)arg1 ;
-(id)randomTransitionPresetFromList:(id)arg1 abidingWithConstraints:(id)arg2 ;
-(id)transitionPresetsMatchingCriteria:(id)arg1 ;
-(id)localizedTransitionNameForTransitionID:(id)arg1 ;
-(id)localizedNameForTransitionID:(id)arg1 withLanguage:(id)arg2 ;
-(id)localizedTransitionNameForTransitionID:(id)arg1 andPresetID:(id)arg2 ;
-(id)localizedCategoryNameFromCategoryID:(id)arg1 ;
-(id)localizedSettingsUITitleForTitleKey:(id)arg1 inTransition:(id)arg2 ;
-(id)controlForAttribute:(id)arg1 forTransitionID:(id)arg2 ;
-(void)dealloc;
-(id)initWithPaths:(id)arg1 ;
@end

