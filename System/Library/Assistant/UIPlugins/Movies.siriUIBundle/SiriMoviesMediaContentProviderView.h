/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:22:51 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Assistant/UIPlugins/Movies.siriUIBundle/Movies
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Movies/Movies-Structs.h>
#import <UIKit/UIView.h>

@class NSArray, SiriMoviesMediaPunchOutView;

@interface SiriMoviesMediaContentProviderView : UIView {

	NSArray* _punchOutViews;
	SiriMoviesMediaPunchOutView* _watchListPunchOutView;
	char _showWatchListButton;
	char _watchListButtonUserInteractionEnabled;
	char _watchListed;
	NSArray* _mediaPunchOuts;
	float _buttonSpacing;
	/*^block*/id _mediaPunchOutAction;
	/*^block*/id _watchListAction;

}

@property (nonatomic,copy) NSArray * mediaPunchOuts;                                  //@synthesize mediaPunchOuts=_mediaPunchOuts - In the implementation block
@property (assign,nonatomic) char showWatchListButton;                                //@synthesize showWatchListButton=_showWatchListButton - In the implementation block
@property (assign,nonatomic) char watchListButtonUserInteractionEnabled;              //@synthesize watchListButtonUserInteractionEnabled=_watchListButtonUserInteractionEnabled - In the implementation block
@property (assign,getter=isWatchListed,nonatomic) char watchListed;                   //@synthesize watchListed=_watchListed - In the implementation block
@property (assign,nonatomic) float buttonSpacing;                                     //@synthesize buttonSpacing=_buttonSpacing - In the implementation block
@property (nonatomic,copy) id mediaPunchOutAction;                                    //@synthesize mediaPunchOutAction=_mediaPunchOutAction - In the implementation block
@property (nonatomic,copy) id watchListAction;                                        //@synthesize watchListAction=_watchListAction - In the implementation block
-(char)watchListButtonUserInteractionEnabled;
-(id)watchListAction;
-(id)mediaPunchOutAction;
-(void)setWatchListed:(char)arg1 ;
-(void)setMediaPunchOutAction:(id)arg1 ;
-(void)_updatePunchOutViews;
-(void)_updateWatchListUserInteractionEnabledState;
-(void)_updateWatchListPunchOutView;
-(void)_mediaPunchOutTapped:(id)arg1 ;
-(void)_watchListTapped:(id)arg1 ;
-(void)setMediaPunchOuts:(NSArray *)arg1 ;
-(char)showWatchListButton;
-(CGSize)_calculateLayoutForSize:(CGSize)arg1 setFrame:(char)arg2 ;
-(void)setShowWatchListButton:(char)arg1 ;
-(void)setWatchListButtonUserInteractionEnabled:(char)arg1 ;
-(void)setWatchListAction:(id)arg1 ;
-(NSArray *)mediaPunchOuts;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(float)buttonSpacing;
-(void)setButtonSpacing:(float)arg1 ;
-(char)isWatchListed;
@end

