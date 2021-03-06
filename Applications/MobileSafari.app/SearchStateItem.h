/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:25:12 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileSafari.app/MobileSafari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate, CompletionList, NSString;

@interface SearchStateItem : NSObject {

	NSDate* _cacheDate;
	CompletionList* _completionList;
	NSString* _destinationTLD;

}

@property (nonatomic,retain) NSDate * cacheDate;                           //@synthesize cacheDate=_cacheDate - In the implementation block
@property (nonatomic,retain) CompletionList * completionList;              //@synthesize completionList=_completionList - In the implementation block
@property (nonatomic,copy) NSString * destinationTLD;                      //@synthesize destinationTLD=_destinationTLD - In the implementation block
-(void)setCompletionList:(CompletionList *)arg1 ;
-(CompletionList *)completionList;
-(NSDate *)cacheDate;
-(void)setCacheDate:(NSDate *)arg1 ;
-(NSString *)destinationTLD;
-(void)setDestinationTLD:(NSString *)arg1 ;
@end

