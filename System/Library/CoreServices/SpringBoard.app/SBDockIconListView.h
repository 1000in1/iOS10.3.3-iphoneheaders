/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:14 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBRootIconListView.h>

@interface SBDockIconListView : SBRootIconListView
+(unsigned)iconColumnsOrRows;
+(unsigned)iconRowsForInterfaceOrientation:(int)arg1 ;
+(unsigned)iconColumnsForInterfaceOrientation:(int)arg1 ;
+(float)defaultHeight;
-(id)initWithModel:(id)arg1 orientation:(int)arg2 viewMap:(id)arg3 ;
-(float)bottomIconInset;
-(float)sideIconInset;
-(id)iconAtPoint:(CGPoint)arg1 index:(unsigned*)arg2 proposedOrder:(int*)arg3 grabbedIcon:(id)arg4 ;
-(unsigned)iconsInRowForSpacingCalculation;
-(unsigned)iconsInColumnForSpacingCalculation;
-(CGPoint)originForIconAtCoordinate:(SBIconCoordinate)arg1 ;
-(float)_additionalHorizontalInsetToCenterIcons;
-(float)_additionalVerticalInsetToCenterIcons;
-(float)topIconInset;
-(unsigned)rowAtPoint:(CGPoint)arg1 ;
-(char)_shouldAnimatePropertyWithKey:(id)arg1 ;
-(int)iconLocation;
-(unsigned)columnAtPoint:(CGPoint)arg1 ;
@end

