/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:24 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKit/UIImage.h>

@interface SBIconGridImage : UIImage {

	unsigned _numberOfCells;

}

@property (nonatomic,readonly) unsigned numberOfCells; 
@property (nonatomic,readonly) unsigned numberOfColumns; 
@property (nonatomic,readonly) unsigned numberOfRows; 
+(id)gridImageForNumberOfCells:(unsigned)arg1 withCellImageProviderBlock:(/*^block*/id)arg2 ;
+(CGRect)rectAtIndex:(unsigned)arg1 maxCount:(unsigned)arg2 ;
+(CGSize)sizeForNumberOfRows:(unsigned)arg1 ;
+(unsigned)numberOfRowsForNumberOfCells:(unsigned)arg1 ;
+(id)_gridImageForNumberOfCells:(unsigned)arg1 withPreviousGridImage:(id)arg2 cellImageProviderBlock:(/*^block*/id)arg3 ;
+(unsigned)numberOfColumns;
+(CGSize)cellSize;
+(CGSize)cellSpacing;
-(id)gridImageByPatchingWithCellImageProviderBlock:(/*^block*/id)arg1 ;
-(id)iconImageAtIndex:(unsigned)arg1 ;
-(unsigned)numberOfColumns;
-(unsigned)numberOfRows;
-(unsigned)numberOfCells;
@end

