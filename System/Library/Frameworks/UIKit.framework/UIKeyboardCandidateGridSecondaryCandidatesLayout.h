/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:37 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UICollectionViewFlowLayout.h>

@interface UIKeyboardCandidateGridSecondaryCandidatesLayout : UICollectionViewFlowLayout {

	SCD_Struct_UI35 _visualStyling;
	int _candidatesVisualStyle;

}

@property (assign,nonatomic) SCD_Struct_UI35 visualStyling;              //@synthesize visualStyling=_visualStyling - In the implementation block
@property (assign,nonatomic) int candidatesVisualStyle;                  //@synthesize candidatesVisualStyle=_candidatesVisualStyle - In the implementation block
+(Class)layoutAttributesClass;
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(id)layoutAttributesForItemAtIndexPath:(id)arg1 ;
-(void)setVisualStyling:(SCD_Struct_UI35)arg1 ;
-(SCD_Struct_UI35)visualStyling;
-(void)setCandidatesVisualStyle:(int)arg1 ;
-(int)candidatesVisualStyle;
-(void)updateAttributes:(id)arg1 ;
@end

