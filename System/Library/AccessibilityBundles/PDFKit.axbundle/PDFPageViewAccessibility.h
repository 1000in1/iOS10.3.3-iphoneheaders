/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:22:16 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/AccessibilityBundles/PDFKit.axbundle/PDFKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PDFKit/PDFKit-Structs.h>
#import <PDFKit/__PDFPageViewAccessibility_super.h>

@interface PDFPageViewAccessibility : __PDFPageViewAccessibility_super
+(id)safeCategoryTargetClassName;
+(void)_accessibilityPerformValidations:(id)arg1 ;
+(Class)safeCategoryBaseClass;
-(id)_axGetPDFView;
-(unsigned long long)accessibilityTraits;
-(char)isAccessibilityElement;
-(id)_accessibilitySupplementaryFooterViews;
-(CGPDFPageRef)_axPageRef;
-(id)_axLineSelections;
-(CGPDFSelectionRef)_lineSelectionForSelection:(CGPDFSelectionRef)arg1 ;
-(int)accessibilityLineNumberForPoint:(CGPoint)arg1 ;
-(id)accessibilityContentForLineNumber:(int)arg1 ;
-(CGRect)accessibilityFrameForLineNumber:(int)arg1 ;
-(id)accessibilityPageContent;
@end

