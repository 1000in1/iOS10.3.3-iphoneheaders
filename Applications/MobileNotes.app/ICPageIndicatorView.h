/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:59 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileNotes.app/MobileNotes
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileNotes/MobileNotes-Structs.h>
#import <UIKit/UIView.h>

@interface ICPageIndicatorView : UIView {

	int _numberOfPages;
	int _currentPage;
	unsigned _circleWidth;
	unsigned _circleSpacing;

}

@property (assign,nonatomic) int numberOfPages;                   //@synthesize numberOfPages=_numberOfPages - In the implementation block
@property (assign,nonatomic) int currentPage;                     //@synthesize currentPage=_currentPage - In the implementation block
@property (assign,nonatomic) unsigned circleWidth;                //@synthesize circleWidth=_circleWidth - In the implementation block
@property (assign,nonatomic) unsigned circleSpacing;              //@synthesize circleSpacing=_circleSpacing - In the implementation block
-(void)setCircleSpacing:(unsigned)arg1 ;
-(void)setCircleWidth:(unsigned)arg1 ;
-(unsigned)circleSpacing;
-(unsigned)circleWidth;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setNumberOfPages:(int)arg1 ;
-(void)setCurrentPage:(int)arg1 ;
-(int)currentPage;
-(int)numberOfPages;
-(void)commonInit;
@end

