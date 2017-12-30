/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 6:38:33 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/NanoPreferenceBundles/General/AccessibilitySettings.bundle/AccessibilitySettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSListController.h>

@class NPSDomainAccessor;

@interface VoiceOverGestureDirectionDetailController : PSListController {

	NPSDomainAccessor* _domainAccessor;

}

@property (nonatomic,retain) NPSDomainAccessor * domainAccessor;              //@synthesize domainAccessor=_domainAccessor - In the implementation block
-(void)updateTableCheckedSelection:(id)arg1 ;
-(void)setGizmoPref:(id)arg1 forKey:(id)arg2 ;
-(id)init;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(NPSDomainAccessor *)domainAccessor;
-(void)setDomainAccessor:(NPSDomainAccessor *)arg1 ;
-(id)specifiers;
@end

