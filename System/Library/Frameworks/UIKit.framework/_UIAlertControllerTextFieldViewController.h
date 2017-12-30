/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:20 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UICollectionViewController.h>

@protocol _UIAlertControllerTextFieldViewControllerContaining;
@class NSMutableArray, UIAlertControllerVisualStyle, UICollectionViewFlowLayout, NSArray;

@interface _UIAlertControllerTextFieldViewController : UICollectionViewController {

	NSMutableArray* textFieldViews;
	NSMutableArray* textFields;
	char _textFieldsCanBecomeFirstResponder;
	UIAlertControllerVisualStyle* _visualStyle;
	UICollectionViewFlowLayout* _collectionViewLayout;
	char _hidden;
	id<_UIAlertControllerTextFieldViewControllerContaining> _container;

}

@property (assign,nonatomic,__weak) id<_UIAlertControllerTextFieldViewControllerContaining> container;              //@synthesize container=_container - In the implementation block
@property (assign,nonatomic) char textFieldsCanBecomeFirstResponder; 
@property (assign,nonatomic) UIAlertControllerVisualStyle * visualStyle; 
@property (readonly) NSArray * textFields; 
@property (assign,getter=isHidden,nonatomic) char hidden;                                                           //@synthesize hidden=_hidden - In the implementation block
-(id)init;
-(void)setHidden:(char)arg1 ;
-(char)isHidden;
-(int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInCollectionView:(id)arg1 ;
-(char)collectionView:(id)arg1 canFocusItemAtIndexPath:(id)arg2 ;
-(char)resignFirstResponder;
-(id<_UIAlertControllerTextFieldViewControllerContaining>)container;
-(void)setContainer:(id<_UIAlertControllerTextFieldViewControllerContaining>)arg1 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewWillLayoutSubviews;
-(void)viewDidLoad;
-(void)setVisualStyle:(UIAlertControllerVisualStyle *)arg1 ;
-(UIAlertControllerVisualStyle *)visualStyle;
-(NSArray *)textFields;
-(id)addTextFieldWithPlaceholder:(id)arg1 isSecure:(char)arg2 ;
-(void)setTextFieldsCanBecomeFirstResponder:(char)arg1 ;
-(void)removeAllTextFields;
-(id)textFieldAtIndex:(int)arg1 ;
-(char)textFieldsCanBecomeFirstResponder;
-(void)updateTextFieldStyle;
-(void)_returnKeyPressedInTextField:(id)arg1 ;
-(void)_updatePreferredContentSize;
-(int)numberOfTextFields;
-(float)_bottomMarginForTextFields;
@end

