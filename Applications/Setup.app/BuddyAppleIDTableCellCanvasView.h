/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:25:30 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Setup.app/Setup
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Setup/Setup-Structs.h>
#import <UIKit/UIView.h>

@class NSMutableArray;

@interface BuddyAppleIDTableCellCanvasView : UIView {

	unsigned _columnCount;
	NSMutableArray* _serviceInfoArray;

}

@property (nonatomic,readonly) unsigned columnCount;                           //@synthesize columnCount=_columnCount - In the implementation block
@property (nonatomic,readonly) NSMutableArray * serviceInfoArray;              //@synthesize serviceInfoArray=_serviceInfoArray - In the implementation block
-(id)initWithFrame:(CGRect)arg1 columnCount:(unsigned)arg2 ;
-(NSMutableArray *)serviceInfoArray;
-(void)drawRect:(CGRect)arg1 atIndex:(unsigned)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(unsigned)columnCount;
@end

