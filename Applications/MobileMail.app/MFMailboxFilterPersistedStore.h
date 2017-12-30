/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:55 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileMail/MFMailboxFilterStore.h>

@class NSString, NSMutableDictionary, MFCancelationToken;

@interface MFMailboxFilterPersistedStore : NSObject <MFMailboxFilterStore> {

	NSString* _storagePath;
	NSMutableDictionary* _storage;
	MFCancelationToken* _cancelationToken;
	NSMutableDictionary* _viewModelPool;

}

@property (nonatomic,retain) NSMutableDictionary * storage;                               //@synthesize storage=_storage - In the implementation block
@property (nonatomic,copy,readonly) NSString * storagePath;                               //@synthesize storagePath=_storagePath - In the implementation block
@property (nonatomic,retain,readonly) MFCancelationToken * cancelationToken;              //@synthesize cancelationToken=_cancelationToken - In the implementation block
@property (nonatomic,retain,readonly) NSMutableDictionary * viewModelPool;                //@synthesize viewModelPool=_viewModelPool - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)filterViewModelForContext:(id)arg1 ;
-(NSMutableDictionary *)viewModelPool;
-(id)_filterViewModelForContext:(id)arg1 ;
-(id)_filtersForContext:(id)arg1 provider:(id)arg2 ;
-(void)_setFilters:(id)arg1 forContext:(id)arg2 ;
-(void)_write;
-(id)init;
-(void)dealloc;
-(void)_load;
-(MFCancelationToken *)cancelationToken;
-(NSString *)storagePath;
-(void)setStorage:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)storage;
@end

