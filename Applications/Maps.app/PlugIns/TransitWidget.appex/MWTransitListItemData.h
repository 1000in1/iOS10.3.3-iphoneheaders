/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:47 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/PlugIns/TransitWidget.appex/TransitWidget
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>

@class MWTransitListItem;

@interface MWTransitListItemData : NSObject <NSCoding> {

	char _expanded;
	MWTransitListItem* _listItem;

}

@property (getter=isExpanded,nonatomic,readonly) char expanded;                //@synthesize expanded=_expanded - In the implementation block
@property (nonatomic,copy,readonly) MWTransitListItem * listItem;              //@synthesize listItem=_listItem - In the implementation block
+(id)unarchiveFromData:(id)arg1 error:(id*)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isExpanded;
-(MWTransitListItem *)listItem;
-(id)initWithDataSource:(id)arg1 ;
@end

