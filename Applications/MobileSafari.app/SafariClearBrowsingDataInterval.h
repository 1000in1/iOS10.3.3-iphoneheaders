/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:25:12 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileSafari.app/MobileSafari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface SafariClearBrowsingDataInterval : NSObject {

	NSString* _descriptionOfInterval;
	/*^block*/id _dateAfterWhichDataShouldBeClearedBlock;
	NSString* _aggdIntervalKey;

}

@property (nonatomic,retain) NSString * aggdIntervalKey;                           //@synthesize aggdIntervalKey=_aggdIntervalKey - In the implementation block
@property (readonly) NSString * descriptionOfInterval;                             //@synthesize descriptionOfInterval=_descriptionOfInterval - In the implementation block
@property (nonatomic,copy) id dateAfterWhichDataShouldBeClearedBlock;              //@synthesize dateAfterWhichDataShouldBeClearedBlock=_dateAfterWhichDataShouldBeClearedBlock - In the implementation block
-(NSString *)descriptionOfInterval;
-(id)initWithDescription:(id)arg1 dateAfterWhichDataShouldBeClearedBlock:(/*^block*/id)arg2 ;
-(id)dateAfterWhichDataShouldBeClearedBlock;
-(void)setDateAfterWhichDataShouldBeClearedBlock:(id)arg1 ;
-(NSString *)aggdIntervalKey;
-(void)setAggdIntervalKey:(NSString *)arg1 ;
-(id)init;
-(id)description;
@end

