/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:25:38 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/TV.app/TV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSArray;

@interface VideosDetailsTableRow : NSObject {

	NSString* _title;
	id _content;
	NSArray* _columns;

}

@property (nonatomic,copy) NSString * title;                 //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) id content;                       //@synthesize content=_content - In the implementation block
@property (nonatomic,retain) NSArray * columns;              //@synthesize columns=_columns - In the implementation block
+(id)rowWithTitle:(id)arg1 content:(id)arg2 ;
+(id)twoColumnRowWithRows:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(id)content;
-(NSString *)title;
-(void)setContent:(id)arg1 ;
-(NSArray *)columns;
-(void)setColumns:(NSArray *)arg1 ;
@end

