/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:36 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/MapsAppTest.h>
#import <Maps/SearchSessionObserver.h>

@class _MKPlaceViewController, ScrollViewDelegateForwarder, SearchInfo, NSString;

@interface MapsAppTestPlacecard : MapsAppTest <SearchSessionObserver> {

	char _thruSearchResultsList;
	char _isScrollTest;
	char _canResizePlacecard;
	unsigned _waitingTests;
	_MKPlaceViewController* _placeViewController;
	ScrollViewDelegateForwarder* _scrollViewDelegate;
	unsigned _scrollTestState;
	SearchInfo* _searchInfo;
	id _notifcationToken;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)runTest;
-(void)searchSessionWillPerformSearch:(id)arg1 ;
-(void)searchSessionDidFail:(id)arg1 ;
-(void)searchSessionDidChangeSearchFieldItem:(id)arg1 ;
-(void)searchSessionDidChangeSearchResults:(id)arg1 ;
-(void)searchSessionDidInvalidate:(id)arg1 ;
-(void)startPlacecardTest;
-(void)_searchResultDidShow:(id)arg1 ;
-(void)_showCallout:(id)arg1 ;
-(void)_showPlaceCard:(id)arg1 ;
-(void)_performNextTestAfterShowingPlacecard;
-(void)_repositionTestWillStart;
-(void)_minimizePlaceCard;
-(void)_mediumizePlaceCard;
-(void)_maxiumizePlaceCard;
-(void)_mediumizePlaceCardFromBig;
-(void)_placeCardDidUpdatePosition:(id)arg1 ;
-(void)_repositionTestDidFinish;
-(void)_runScrollTest;
-(void)_scrollTest:(id)arg1 ;
-(void)startedSubTest:(id)arg1 ;
-(void)finishedSubTest:(id)arg1 checkAllFinished:(char)arg2 ;
-(void)cleanup:(char)arg1 ;
@end

