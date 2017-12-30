/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:19 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Fitness.app/Fitness
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class HKQuery;

@interface DataQueryObject : NSObject {

	id _object;
	HKQuery* _query;
	int _numberOfErrors;

}

@property (nonatomic,retain) id object;                       //@synthesize object=_object - In the implementation block
@property (nonatomic,retain) HKQuery * query;                 //@synthesize query=_query - In the implementation block
@property (assign,nonatomic) int numberOfErrors;              //@synthesize numberOfErrors=_numberOfErrors - In the implementation block
+(void)setHealthStore:(id)arg1 ;
-(int)numberOfErrors;
-(void)setNumberOfErrors:(int)arg1 ;
-(void)dealloc;
-(HKQuery *)query;
-(id)object;
-(void)setObject:(id)arg1 ;
-(void)setQuery:(HKQuery *)arg1 ;
@end

