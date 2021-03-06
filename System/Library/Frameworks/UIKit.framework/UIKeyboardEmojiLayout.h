/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:29 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UICollectionViewFlowLayout.h>

@interface UIKeyboardEmojiLayout : UICollectionViewFlowLayout {

	id* _attributes;
	float* _headerWidths;
	int _arrayLength;

}
+(Class)invalidationContextClass;
-(void)dealloc;
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(void)prepareLayout;
-(char)shouldInvalidateLayoutForPreferredLayoutAttributes:(id)arg1 withOriginalAttributes:(id)arg2 ;
-(id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(void)invalidateLayoutWithContext:(id)arg1 ;
-(id)invalidationContextForBoundsChange:(CGRect)arg1 ;
-(id)invalidationContextForPreferredLayoutAttributes:(id)arg1 withOriginalAttributes:(id)arg2 ;
-(void)_setAttributes:(id)arg1 ForSection:(int)arg2 ;
-(char)shouldInvalidateLayoutForBoundsChange:(CGRect)arg1 ;
@end

