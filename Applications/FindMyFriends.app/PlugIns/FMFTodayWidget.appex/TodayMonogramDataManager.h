/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:19 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/FindMyFriends.app/PlugIns/FMFTodayWidget.appex/FMFTodayWidget
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TodayMonogramDataManagerDelegate;
@class NSMutableDictionary;

@interface TodayMonogramDataManager : NSObject {

	id<TodayMonogramDataManagerDelegate> _delegate;
	NSMutableDictionary* _handlesToImages;
	NSMutableDictionary* _handlesToContacts;
	NSMutableDictionary* _locationsToMapImages;

}

@property (nonatomic,retain) NSMutableDictionary * handlesToImages;                             //@synthesize handlesToImages=_handlesToImages - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * handlesToContacts;                           //@synthesize handlesToContacts=_handlesToContacts - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * locationsToMapImages;                        //@synthesize locationsToMapImages=_locationsToMapImages - In the implementation block
@property (assign,nonatomic,__weak) id<TodayMonogramDataManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)sharedInstance;
-(id)_monogramFromCacheForHandle:(id)arg1 height:(id)arg2 ;
-(id)_contactFromCacheForHandle:(id)arg1 keysToFetch:(id)arg2 ;
-(NSMutableDictionary *)handlesToContacts;
-(NSMutableDictionary *)handlesToImages;
-(void)setHandlesToContacts:(NSMutableDictionary *)arg1 ;
-(void)setHandlesToImages:(NSMutableDictionary *)arg1 ;
-(id)contactForHandle:(id)arg1 keysToFetch:(id)arg2 ;
-(id)_cacheKeyForHandle:(id)arg1 height:(id)arg2 ;
-(id)monogramForHandle:(id)arg1 forHeight:(id)arg2 ;
-(void)cleanupCaches;
-(id)_cacheKeyForLocation:(id)arg1 ;
-(NSMutableDictionary *)locationsToMapImages;
-(void)setLocationsToMapImages:(NSMutableDictionary *)arg1 ;
-(void)setDelegate:(id<TodayMonogramDataManagerDelegate>)arg1 ;
-(id<TodayMonogramDataManagerDelegate>)delegate;
@end
