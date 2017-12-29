/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:38 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@protocol ErrorResultsViewDelegate;
@class UILabel, UIStackView, NSMutableArray, NSArray;

@interface ErrorResultsView : UIView {

	UILabel* _titleLabel;
	UIStackView* _stackView;
	NSMutableArray* _suggestionsButtons;
	NSArray* _suggestions;
	id<ErrorResultsViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<ErrorResultsViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)updateTheme;
-(void)setTitle:(id)arg1 andSuggestions:(id)arg2 ;
-(id)init;
-(void)setDelegate:(id<ErrorResultsViewDelegate>)arg1 ;
-(id<ErrorResultsViewDelegate>)delegate;
-(void)setupConstraints;
-(void)buttonAction:(id)arg1 ;
@end
