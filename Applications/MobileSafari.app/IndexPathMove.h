/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:25:10 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileSafari.app/MobileSafari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSIndexPath;

@interface IndexPathMove : NSObject {

	NSIndexPath* _indexPathBeforeMove;
	NSIndexPath* _indexPathAfterMove;

}

@property (nonatomic,readonly) NSIndexPath * indexPathBeforeMove;              //@synthesize indexPathBeforeMove=_indexPathBeforeMove - In the implementation block
@property (nonatomic,readonly) NSIndexPath * indexPathAfterMove;               //@synthesize indexPathAfterMove=_indexPathAfterMove - In the implementation block
-(id)initWithIndexPathBeforeMove:(id)arg1 indexPathAfterMove:(id)arg2 ;
-(NSIndexPath *)indexPathBeforeMove;
-(NSIndexPath *)indexPathAfterMove;
@end

