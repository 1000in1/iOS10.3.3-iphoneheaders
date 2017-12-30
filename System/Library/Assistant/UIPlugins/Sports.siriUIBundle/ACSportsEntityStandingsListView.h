/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:22:53 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Assistant/UIPlugins/Sports.siriUIBundle/Sports
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Sports/Sports-Structs.h>
#import <Sports/ACSportsCardListView.h>

@class NSArray;

@interface ACSportsEntityStandingsListView : ACSportsCardListView {

	char _showCardinalPositions;
	char _shouldLocalizeColumnHeaders;
	NSArray* _snippetColumns;

}

@property (assign,nonatomic) char showCardinalPositions;                    //@synthesize showCardinalPositions=_showCardinalPositions - In the implementation block
@property (nonatomic,copy) NSArray * snippetColumns;                        //@synthesize snippetColumns=_snippetColumns - In the implementation block
@property (assign,nonatomic) char shouldLocalizeColumnHeaders;              //@synthesize shouldLocalizeColumnHeaders=_shouldLocalizeColumnHeaders - In the implementation block
+(id)domainObjectViewWithDomainObject:(id)arg1 league:(id)arg2 frame:(CGRect)arg3 ;
-(void)configureDomainObjectView:(id)arg1 withDomainObject:(id)arg2 beforeDomainObject:(id)arg3 afterDomainObject:(id)arg4 league:(id)arg5 index:(unsigned)arg6 ;
-(char)shouldLocalizeColumnHeaders;
-(NSArray *)snippetColumns;
-(void)setShouldLocalizeColumnHeaders:(char)arg1 ;
-(void)setSnippetColumns:(NSArray *)arg1 ;
-(char)showCardinalPositions;
-(void)setShowCardinalPositions:(char)arg1 ;
@end

