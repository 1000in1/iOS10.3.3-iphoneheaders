/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:43 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/_CDPDataHarvester.h>

@class NSMutableDictionary, _CDInteractionStore, NSPredicate, NSArray, NSString;

@interface _CDPInteractionStoreDataHarvester : NSObject <_CDPDataHarvester> {

	NSMutableDictionary* _identifierToContactMap;
	_CDInteractionStore* _store;
	NSPredicate* _predicate;
	NSArray* _interactions;

}

@property (nonatomic,retain) _CDInteractionStore * store;              //@synthesize store=_store - In the implementation block
@property (nonatomic,retain) NSPredicate * predicate;                  //@synthesize predicate=_predicate - In the implementation block
@property (nonatomic,readonly) NSArray * interactions;                 //@synthesize interactions=_interactions - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setPredicate:(NSPredicate *)arg1 ;
-(NSPredicate *)predicate;
-(void)loadWithLimit:(unsigned)arg1 dataPointReader:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(NSArray *)interactions;
-(id)contactForIdentifier:(id)arg1 ;
-(void)setStore:(_CDInteractionStore *)arg1 ;
-(_CDInteractionStore *)store;
@end

