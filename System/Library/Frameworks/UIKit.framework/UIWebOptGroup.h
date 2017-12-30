/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:21 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol UIWebSelectedItemPrivate;
@class NSArray;

@interface UIWebOptGroup : NSObject {

	id<UIWebSelectedItemPrivate> _group;
	NSArray* _options;
	int _offset;

}

@property (nonatomic,readonly) int offset;                                    //@synthesize offset=_offset - In the implementation block
@property (nonatomic,retain) id<UIWebSelectedItemPrivate> group;              //@synthesize group=_group - In the implementation block
@property (nonatomic,retain) NSArray * options;                               //@synthesize options=_options - In the implementation block
-(void)dealloc;
-(NSArray *)options;
-(void)setOptions:(NSArray *)arg1 ;
-(int)offset;
-(void)setGroup:(id<UIWebSelectedItemPrivate>)arg1 ;
-(id)initWithGroup:(id)arg1 itemOffset:(int)arg2 ;
-(id<UIWebSelectedItemPrivate>)group;
@end

