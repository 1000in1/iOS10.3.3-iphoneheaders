/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:55 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileMail/MobileMail-Structs.h>
#import <UIKit/UITextSelectionRect.h>

@interface _MFAtomViewTextSelectionRect : UITextSelectionRect {

	char containsStart;
	char containsEnd;
	char isVertical;
	int writingDirection;
	CGRect rect;

}

@property (assign,nonatomic) CGRect rect; 
@property (assign,nonatomic) int writingDirection; 
@property (assign,nonatomic) char containsStart; 
@property (assign,nonatomic) char containsEnd; 
@property (assign,nonatomic) char isVertical; 
-(void)setIsVertical:(char)arg1 ;
-(CGRect)rect;
-(void)setRect:(CGRect)arg1 ;
-(int)writingDirection;
-(char)containsStart;
-(char)containsEnd;
-(char)isVertical;
-(void)setContainsEnd:(char)arg1 ;
-(void)setContainsStart:(char)arg1 ;
-(void)setWritingDirection:(int)arg1 ;
@end

