/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:37 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, _MXExtensionManager, NSHashTable, NSTimer, NSArray;

@interface _RidesharingApplicationsSource : NSObject {

	NSMutableDictionary* _appsByIdentifier;
	_MXExtensionManager* _extensionManager;
	NSHashTable* _observers;
	NSTimer* _coalescingTimer;
	NSArray* _availableApplications;
	char _loading;

}

@property (getter=isLoading,nonatomic,readonly) char loading;                //@synthesize loading=_loading - In the implementation block
@property (nonatomic,readonly) NSArray * availableApplications;              //@synthesize availableApplications=_availableApplications - In the implementation block
@property (nonatomic,readonly) NSArray * enabledApplications; 
+(id)sharedSource;
-(NSArray *)availableApplications;
-(NSArray *)enabledApplications;
-(void)_updateWithAvailableExtensions:(id)arg1 ;
-(id)init;
-(id)_init;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(char)isLoading;
-(id)applicationWithIdentifier:(id)arg1 ;
@end

