/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 6:38:30 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/NanoPreferenceBundles/Applications/NanoPeopleBridgeSettings.bundle/NanoPeopleBridgeSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoPeopleBridgeSettings/NPLPeopleViewController.h>
#import <NanoPeopleBridgeSettings/NPLDeleteButtonDelegate.h>

@protocol NPLSettingsPeopleViewControllerDelegate;
@class UILabel, NPLDeleteButton, NSTimer;

@interface NPLSettingsPeopleViewController : NPLPeopleViewController <NPLDeleteButtonDelegate> {

	unsigned _addPersonIndex;
	UILabel* _titleLabel;
	NPLDeleteButton* _deleteButton;
	NSTimer* _deleteButtonAppearanceTimer;
	id<NPLSettingsPeopleViewControllerDelegate> _delegate;

}

@property (assign,nonatomic) id<NPLSettingsPeopleViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)_selectSlotAtIndex:(unsigned)arg1 includeSelectionIndicator:(char)arg2 animated:(char)arg3 ;
-(void)_deleteButtonAppearanceTimerFired;
-(void)_stopDeleteButtonAppearanceTimer;
-(void)_startDeleteButtonAppearanceTimerIfNecessary;
-(float)_dialViewTopOffset;
-(float)_titleLabelTopOffset;
-(void)_removeDeleteButton;
-(void)deleteButtonDidFinishHideAnimation:(id)arg1 ;
-(void)deleteSelectedPerson;
-(void)_groupTitleChanged;
-(void)centerPersonViewTapped:(id)arg1 ;
-(void)peripheryPersonViewTapped:(id)arg1 ;
-(void)setDelegate:(id<NPLSettingsPeopleViewControllerDelegate>)arg1 ;
-(void)setTitle:(id)arg1 ;
-(id<NPLSettingsPeopleViewControllerDelegate>)delegate;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewDidDisappear:(char)arg1 ;
-(void)viewWillLayoutSubviews;
-(void)viewDidLoad;
-(void)_deleteButtonTapped;
@end
