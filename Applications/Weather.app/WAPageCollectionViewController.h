/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:25:43 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Weather.app/Weather
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Weather/Weather-Structs.h>
#import <Weather/WAAbstractCollectionViewController.h>
#import <Weather/WAAssetLoaderDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol WAPageCollectionViewControllerDelegate;
@class City, WUIWeatherConditionBackgroundView, WAPagedFlowLayout, TabScrollIndicatorView, UILabel, UITapGestureRecognizer, WATouchButton, UIView, WAWeatherCollectionViewCell, UICollectionView, CLLocation, NSString;

@interface WAPageCollectionViewController : WAAbstractCollectionViewController <WAAssetLoaderDelegate, UIGestureRecognizerDelegate> {

	char _pageControlUsed;
	char _hasPerformedInitialLayout;
	id<WAPageCollectionViewControllerDelegate> _delegate;
	City* _activeCity;
	WUIWeatherConditionBackgroundView* _conditionBackgroundView;
	WAPagedFlowLayout* _pageLayout;
	TabScrollIndicatorView* _tabScrollIndicatorView;
	UILabel* _conditionLabel;
	UILabel* _descriptionLabel;
	City* _nextCity;
	UITapGestureRecognizer* _pageSwitchRecognizer;
	WATouchButton* _infoButton;
	WATouchButton* _twcButton;
	UIView* _bottomDivider;
	WAWeatherCollectionViewCell* _transitionCell;
	UICollectionView* _transitionView;
	unsigned _initialActiveCityIndex;
	UITapGestureRecognizer* _debugModeRecognizer;
	CLLocation* _debugLocation;
	UILabel* _debugLabel;
	NSString* _debugState;
	UITapGestureRecognizer* _debugShowInMapsRecognizer;

}

@property (nonatomic,retain) WAPagedFlowLayout * pageLayout;                                           //@synthesize pageLayout=_pageLayout - In the implementation block
@property (nonatomic,retain) WUIWeatherConditionBackgroundView * conditionBackgroundView;              //@synthesize conditionBackgroundView=_conditionBackgroundView - In the implementation block
@property (assign,nonatomic) char pageControlUsed;                                                     //@synthesize pageControlUsed=_pageControlUsed - In the implementation block
@property (nonatomic,retain) TabScrollIndicatorView * tabScrollIndicatorView;                          //@synthesize tabScrollIndicatorView=_tabScrollIndicatorView - In the implementation block
@property (nonatomic,retain) UILabel * conditionLabel;                                                 //@synthesize conditionLabel=_conditionLabel - In the implementation block
@property (nonatomic,retain) UILabel * descriptionLabel;                                               //@synthesize descriptionLabel=_descriptionLabel - In the implementation block
@property (nonatomic,retain) City * nextCity;                                                          //@synthesize nextCity=_nextCity - In the implementation block
@property (nonatomic,retain) UITapGestureRecognizer * pageSwitchRecognizer;                            //@synthesize pageSwitchRecognizer=_pageSwitchRecognizer - In the implementation block
@property (nonatomic,retain) WATouchButton * infoButton;                                               //@synthesize infoButton=_infoButton - In the implementation block
@property (nonatomic,retain) WATouchButton * twcButton;                                                //@synthesize twcButton=_twcButton - In the implementation block
@property (nonatomic,retain) UIView * bottomDivider;                                                   //@synthesize bottomDivider=_bottomDivider - In the implementation block
@property (nonatomic,retain) WAWeatherCollectionViewCell * transitionCell;                             //@synthesize transitionCell=_transitionCell - In the implementation block
@property (nonatomic,retain) UICollectionView * transitionView;                                        //@synthesize transitionView=_transitionView - In the implementation block
@property (assign,nonatomic) char hasPerformedInitialLayout;                                           //@synthesize hasPerformedInitialLayout=_hasPerformedInitialLayout - In the implementation block
@property (assign,nonatomic) unsigned initialActiveCityIndex;                                          //@synthesize initialActiveCityIndex=_initialActiveCityIndex - In the implementation block
@property (nonatomic,retain) UITapGestureRecognizer * debugModeRecognizer;                             //@synthesize debugModeRecognizer=_debugModeRecognizer - In the implementation block
@property (nonatomic,retain) CLLocation * debugLocation;                                               //@synthesize debugLocation=_debugLocation - In the implementation block
@property (nonatomic,retain) UILabel * debugLabel;                                                     //@synthesize debugLabel=_debugLabel - In the implementation block
@property (nonatomic,retain) NSString * debugState;                                                    //@synthesize debugState=_debugState - In the implementation block
@property (nonatomic,retain) UITapGestureRecognizer * debugShowInMapsRecognizer;                       //@synthesize debugShowInMapsRecognizer=_debugShowInMapsRecognizer - In the implementation block
@property (assign,nonatomic,__weak) id<WAPageCollectionViewControllerDelegate> delegate;               //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) City * activeCity;                                                        //@synthesize activeCity=_activeCity - In the implementation block
@property (assign,nonatomic) unsigned activeCityIndex; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)setupNewPageLayout;
-(void)setTransitionView:(UICollectionView *)arg1 ;
-(void)willTransitionToSize:(CGSize)arg1 ;
-(id)initWithInitialActiveCityIndex:(unsigned)arg1 ;
-(void)_nextCondition:(id)arg1 ;
-(void)_previousCondition:(id)arg1 ;
-(void)_updateBackgroundForSunHeightChange:(id)arg1 ;
-(void)switchPages:(id)arg1 ;
-(void)setPageSwitchRecognizer:(UITapGestureRecognizer *)arg1 ;
-(UITapGestureRecognizer *)pageSwitchRecognizer;
-(void)setConditionBackgroundView:(WUIWeatherConditionBackgroundView *)arg1 ;
-(WUIWeatherConditionBackgroundView *)conditionBackgroundView;
-(void)setupTabScrollIndicatorView;
-(void)updateLocInformation:(id)arg1 ;
-(void)_setLocationState:(id)arg1 ;
-(void)_setRestState:(id)arg1 ;
-(void)infoButtonPressed;
-(void)twcButtonPressed;
-(void)_reLayoutBottomToolbarWithFrame:(CGRect)arg1 ;
-(char)hasPerformedInitialLayout;
-(void)setHasPerformedInitialLayout:(char)arg1 ;
-(void)_tileWithFrame:(CGRect)arg1 ;
-(unsigned)initialActiveCityIndex;
-(void)setActiveCityIndex:(unsigned)arg1 ;
-(void)setInitialActiveCityIndex:(unsigned)arg1 ;
-(void)updateAndDisplayActiveCity;
-(void)_setScrollPointToActiveCity;
-(void)reloadIndicatorView:(id)arg1 ;
-(void)orderSubviews;
-(void)updateExtendedWeatherOnVisibleCells;
-(void)configureCollectionView;
-(void)setTransitionCell:(WAWeatherCollectionViewCell *)arg1 ;
-(void)createTransitionCellForOldViewSize:(CGSize)arg1 ;
-(void)discardTransitionCell;
-(int)_documentForOffset:(float)arg1 ;
-(void)_updateDebugDisplay;
-(void)_relayoutIndicatorView;
-(float)_offsetForDocument:(unsigned)arg1 ;
-(void)setActiveCity:(id)arg1 shouldScroll:(char)arg2 ;
-(void)_updateScrollerViews;
-(void)_updateScrollerViewsLater;
-(char)pageControlUsed;
-(void)reflowConditions;
-(void)_animateSlideLeft:(char)arg1 ;
-(void)indicatorSelectionChanged:(id)arg1 ;
-(void)setNextCity:(City *)arg1 ;
-(City *)nextCity;
-(void)cityViewPressedInfoButton:(id)arg1 ;
-(void)_resetActiveCityPanOffset;
-(NSString *)debugState;
-(CLLocation *)debugLocation;
-(UITapGestureRecognizer *)debugShowInMapsRecognizer;
-(void)setDebugShowInMapsRecognizer:(UITapGestureRecognizer *)arg1 ;
-(void)_showLocation:(id)arg1 ;
-(void)setDebugLocation:(CLLocation *)arg1 ;
-(void)setDebugState:(NSString *)arg1 ;
-(void)_iterateConditions:(char)arg1 ;
-(void)setDebugConditionCode:(int)arg1 isNight:(char)arg2 ;
-(void)resetAssetLoaderDelegate;
-(int)weatherModeForCell:(id)arg1 atIndexPath:(id)arg2 ;
-(void)addExtraViewsToCell:(id)arg1 atIndexPath:(id)arg2 transitionMode:(unsigned)arg3 ;
-(void)removeExtraViewsFromCell:(id)arg1 ;
-(void)putBackConditionViewFromCell:(id)arg1 ;
-(void)setChromeAlphaWithProgress:(float)arg1 transitionMode:(unsigned)arg2 ;
-(int)setActiveCityWithCoordinate:(CLLocationCoordinate2D)arg1 localCity:(char)arg2 ;
-(void)didUpdateWeather;
-(void)resetTabScrollIndicator;
-(void)updateDUETDebugMessage:(unsigned)arg1 userCitiesUpdateError:(id)arg2 localWeatherUpdateError:(id)arg3 ;
-(City *)activeCity;
-(void)setPageControlUsed:(char)arg1 ;
-(TabScrollIndicatorView *)tabScrollIndicatorView;
-(void)setTabScrollIndicatorView:(TabScrollIndicatorView *)arg1 ;
-(UILabel *)conditionLabel;
-(void)setConditionLabel:(UILabel *)arg1 ;
-(WATouchButton *)twcButton;
-(void)setTwcButton:(WATouchButton *)arg1 ;
-(WAWeatherCollectionViewCell *)transitionCell;
-(UITapGestureRecognizer *)debugModeRecognizer;
-(void)setDebugModeRecognizer:(UITapGestureRecognizer *)arg1 ;
-(void)setDebugLabel:(UILabel *)arg1 ;
-(id)init;
-(void)setDelegate:(id<WAPageCollectionViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(void)reloadData;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(char)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(void)scrollViewDidEndScrollingAnimation:(id)arg1 ;
-(id<WAPageCollectionViewControllerDelegate>)delegate;
-(char)gestureRecognizerShouldBegin:(id)arg1 ;
-(char)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(id)collectionViewLayout;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewWillLayoutSubviews;
-(void)updateBackground;
-(void)prepareForReuse;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)viewDidLoad;
-(UICollectionView *)transitionView;
-(WATouchButton *)infoButton;
-(void)setInfoButton:(WATouchButton *)arg1 ;
-(void)_setNetworkState:(id)arg1 ;
-(void)setBottomDivider:(UIView *)arg1 ;
-(UIView *)bottomDivider;
-(id)_debugString;
-(UILabel *)descriptionLabel;
-(void)setDescriptionLabel:(UILabel *)arg1 ;
-(void)setActiveCity:(City *)arg1 ;
-(unsigned)activeCityIndex;
-(void)animateTransitionToSize:(CGSize)arg1 ;
-(void)didTransitionToSize:(CGSize)arg1 ;
-(UILabel *)debugLabel;
-(WAPagedFlowLayout *)pageLayout;
-(void)setPageLayout:(WAPagedFlowLayout *)arg1 ;
@end

