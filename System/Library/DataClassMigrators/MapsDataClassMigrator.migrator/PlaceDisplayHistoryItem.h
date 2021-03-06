/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:35 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/DataClassMigrators/MapsDataClassMigrator.migrator/MapsDataClassMigrator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapsDataClassMigrator/MapsDataClassMigrator-Structs.h>
#import <MapsDataClassMigrator/RecentsItem.h>
#import <libobjc.A.dylib/NSCopying.h>

@class MKMapItem, MSPHistoryEntryStorage, NSString;

@interface PlaceDisplayHistoryItem : NSObject <RecentsItem, NSCopying> {

	double _timestamp;
	MKMapItem* _mapItem;
	MSPHistoryEntryStorage* _storage;
	double _position;

}

@property (nonatomic,readonly) MKMapItem * mapItem;                           //@synthesize mapItem=_mapItem - In the implementation block
@property (nonatomic,readonly) MSPHistoryEntryStorage * storage;              //@synthesize storage=_storage - In the implementation block
@property (assign,nonatomic) double position;                                 //@synthesize position=_position - In the implementation block
@property (nonatomic,copy) NSString * syncIdentifier; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setSyncIdentifier:(NSString *)arg1 ;
-(id)storageData;
-(id)initWithSearchRequestStorage:(id)arg1 ;
-(void)updateWithStorage:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(double)timestamp;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setPosition:(double)arg1 ;
-(double)position;
-(id)initWithMapItem:(id)arg1 ;
-(MSPHistoryEntryStorage *)storage;
-(MKMapItem *)mapItem;
-(NSString *)syncIdentifier;
@end

