/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:56:39 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DAEAS/ASItem.h>

@class NSString, NSNumber, NSMutableArray, NSArray;

@interface ASEnhancedSearchStoreResponse : ASItem {

	NSString* _store;
	NSNumber* _status;
	NSNumber* _total;
	NSString* _range;
	NSMutableArray* _mResults;

}

@property (nonatomic,retain) NSMutableArray * mResults;              //@synthesize mResults=_mResults - In the implementation block
@property (nonatomic,readonly) NSArray * results; 
@property (nonatomic,copy) NSString * store;                         //@synthesize store=_store - In the implementation block
@property (nonatomic,copy) NSNumber * status;                        //@synthesize status=_status - In the implementation block
@property (nonatomic,copy) NSNumber * total;                         //@synthesize total=_total - In the implementation block
@property (nonatomic,copy) NSString * range;                         //@synthesize range=_range - In the implementation block
+(char)acceptsTopLevelLeaves;
+(char)parsingLeafNode;
+(char)parsingWithSubItems;
+(char)frontingBasicTypes;
+(char)notifyOfUnknownTokens;
+(id)asParseRules;
-(NSNumber *)total;
-(void)setTotal:(NSNumber *)arg1 ;
-(id)description;
-(NSString *)range;
-(NSArray *)results;
-(NSNumber *)status;
-(void)setStatus:(NSNumber *)arg1 ;
-(void)setRange:(NSString *)arg1 ;
-(void)addResult:(id)arg1 ;
-(NSMutableArray *)mResults;
-(void)setMResults:(NSMutableArray *)arg1 ;
-(void)setStore:(NSString *)arg1 ;
-(NSString *)store;
@end

