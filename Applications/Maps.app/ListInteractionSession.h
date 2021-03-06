/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:34 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSArray;

@interface ListInteractionSession : NSObject {

	char _resultsItemsInitialized;
	NSDictionary* _proactiveItems;
	NSArray* _items;
	int _listType;

}

@property (nonatomic,readonly) NSArray * items;                            //@synthesize items=_items - In the implementation block
@property (nonatomic,readonly) int listType;                               //@synthesize listType=_listType - In the implementation block
@property (nonatomic,readonly) NSDictionary * proactiveItems;              //@synthesize proactiveItems=_proactiveItems - In the implementation block
-(id)initWithObjects:(id)arg1 forType:(int)arg2 startDate:(id)arg3 proactiveStartTimes:(id)arg4 ;
-(void)updateWithSelection:(id)arg1 ;
-(void)updateWithTableView:(id)arg1 ;
-(id)description;
-(NSArray *)items;
-(int)listType;
-(NSDictionary *)proactiveItems;
@end

