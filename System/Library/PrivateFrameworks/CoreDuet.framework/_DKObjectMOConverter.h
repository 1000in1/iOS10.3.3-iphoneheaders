/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:43 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface _DKObjectMOConverter : NSObject {

	char _readMetadata;
	char _deduplicateValues;

}

@property (assign) char readMetadata;                   //@synthesize readMetadata=_readMetadata - In the implementation block
@property (assign) char deduplicateValues;              //@synthesize deduplicateValues=_deduplicateValues - In the implementation block
-(id)init;
-(void)setReadMetadata:(char)arg1 ;
-(void)setDeduplicateValues:(char)arg1 ;
-(id)insertObject:(id)arg1 inManagedObjectContext:(id)arg2 ;
-(char)copyObject:(id)arg1 intoManagedObject:(id)arg2 ;
-(id)objectsFromManagedObjects:(id)arg1 ;
-(id)dataIntervalsFromManagedObjects:(id)arg1 ;
-(char)readMetadata;
-(char)deduplicateValues;
@end

