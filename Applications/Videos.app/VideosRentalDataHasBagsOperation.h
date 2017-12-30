/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:25:42 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Videos.app/Videos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@class NSArray;

@interface VideosRentalDataHasBagsOperation : NSOperation {

	NSArray* _itemsWithBags;
	/*^block*/id _bagsOperationCompletionHandler;
	unsigned _itemFilter;
	NSArray* _mediaItems;

}

@property (nonatomic,copy) NSArray * mediaItems;                           //@synthesize mediaItems=_mediaItems - In the implementation block
@property (nonatomic,copy) NSArray * itemsWithBags;                        //@synthesize itemsWithBags=_itemsWithBags - In the implementation block
@property (nonatomic,copy) id bagsOperationCompletionHandler;              //@synthesize bagsOperationCompletionHandler=_bagsOperationCompletionHandler - In the implementation block
@property (assign,nonatomic) unsigned itemFilter;                          //@synthesize itemFilter=_itemFilter - In the implementation block
-(id)initWithMediaItems:(id)arg1 ;
-(void)setBagsOperationCompletionHandler:(id)arg1 ;
-(void)setItemFilter:(unsigned)arg1 ;
-(unsigned)itemFilter;
-(id)bagsOperationCompletionHandler;
-(NSArray *)itemsWithBags;
-(void)setItemsWithBags:(NSArray *)arg1 ;
-(void)dealloc;
-(void)main;
-(NSArray *)mediaItems;
-(void)setMediaItems:(NSArray *)arg1 ;
@end

