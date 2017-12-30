/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:34 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMapTable, UIView;

@interface CarOverlayItem : NSObject <NSCopying> {

	NSMapTable* _targetActionPairs;
	char _flexibleHeight;
	UIView* _content;
	float _height;
	UIEdgeInsets _padding;

}

@property (nonatomic,retain) UIView * content;                  //@synthesize content=_content - In the implementation block
@property (assign,nonatomic) UIEdgeInsets padding;              //@synthesize padding=_padding - In the implementation block
@property (assign,nonatomic) float height;                      //@synthesize height=_height - In the implementation block
@property (assign,nonatomic) char flexibleHeight;               //@synthesize flexibleHeight=_flexibleHeight - In the implementation block
-(char)_contentsOfMapTable:(id)arg1 areEqualToContentsOfMapTable:(id)arg2 ;
-(void)sendTapActions;
-(id)init;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(UIView *)content;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)addTarget:(id)arg1 action:(SEL)arg2 ;
-(void)setPadding:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)padding;
-(float)height;
-(void)removeTarget:(id)arg1 ;
-(void)setHeight:(float)arg1 ;
-(void)setContent:(UIView *)arg1 ;
-(char)isTappable;
-(char)flexibleHeight;
-(void)setFlexibleHeight:(char)arg1 ;
@end

