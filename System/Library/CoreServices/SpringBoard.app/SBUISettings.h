/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:27 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/_UISettings.h>

@class NSHashTable;

@interface SBUISettings : _UISettings {

	NSHashTable* __managedkeyObservers;
	NSHashTable* __managedKeyPathObservers;

}

@property (nonatomic,retain) NSHashTable * _managedkeyObservers;                  //@synthesize _managedkeyObservers=__managedkeyObservers - In the implementation block
@property (nonatomic,retain) NSHashTable * _managedKeyPathObservers;              //@synthesize _managedKeyPathObservers=__managedKeyPathObservers - In the implementation block
-(void)addKeyObserverIfPrototyping:(id)arg1 ;
-(void)_prototypingIsAllowedSettingChanged:(id)arg1 ;
-(NSHashTable *)_managedkeyObservers;
-(NSHashTable *)_managedKeyPathObservers;
-(char)_isPrototypingEnabled:(id)arg1 ;
-(void)set_managedkeyObservers:(NSHashTable *)arg1 ;
-(void)set_managedKeyPathObservers:(NSHashTable *)arg1 ;
-(void)addKeyPathObserverIfPrototyping:(id)arg1 ;
-(void)dealloc;
-(void)setDefaultValues;
-(void)applyArchiveValue:(id)arg1 forKey:(id)arg2 ;
-(id)archiveValueForKey:(id)arg1 ;
-(void)removeKeyPathObserver:(id)arg1 ;
-(void)removeKeyObserver:(id)arg1 ;
@end

