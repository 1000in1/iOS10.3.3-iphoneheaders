/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:22:50 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Assistant/UIPlugins/Maps.siriUIBundle/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/MABaseSnippetViewController.h>
#import <libobjc.A.dylib/_MKPlaceViewControllerDelegate.h>
#import <libobjc.A.dylib/MKStackingViewControllerDelegate.h>
#import <Maps/_MKPlaceReservationDelegate.h>
#import <Maps/MKSystemControllerOpenURLDelegate.h>
#import <libobjc.A.dylib/_MKPlaceViewControllerFeedbackDelegate.h>

@protocol _MKPlaceItem;
@class _MKPlaceViewController, NSString;

@interface MADetailSnippetViewController : MABaseSnippetViewController <_MKPlaceViewControllerDelegate, MKStackingViewControllerDelegate, _MKPlaceReservationDelegate, MKSystemControllerOpenURLDelegate, _MKPlaceViewControllerFeedbackDelegate> {

	float _calculatedHeight;
	id<_MKPlaceItem> _placeItem;
	_MKPlaceViewController* _placeViewController;

}

@property (nonatomic,retain) _MKPlaceViewController * placeViewController;              //@synthesize placeViewController=_placeViewController - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)openURL:(id)arg1 appBundleID:(id)arg2 completion:(/*^block*/id)arg3 ;
-(_MKPlaceViewController *)placeViewController;
-(id)_placeItemFromMapItem:(id)arg1 isIntermediate:(char)arg2 ;
-(id)_placeViewControllerWithPlaceItem:(id)arg1 ;
-(int)analyticsUITarget;
-(void)_updateTitleAndSubtitleWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)initWithMapItemSnippet:(id)arg1 ;
-(void)setPlaceViewController:(_MKPlaceViewController *)arg1 ;
-(void)dealloc;
-(void)openURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(void)viewDidLoad;
-(float)desiredHeightForWidth:(float)arg1 ;
-(void)placeViewControllerDidSelectInlineMap:(id)arg1 ;
-(void)placeViewController:(id)arg1 shouldLogFeedbackOfType:(int)arg2 ;
-(void)placeViewController:(id)arg1 didSelectRouteToCurrentSearchResultWithTransportTypePreference:(id)arg2 ;
-(void)placeViewController:(id)arg1 requestPasscodeUnlockWithCompletion:(/*^block*/id)arg2 ;
-(void)placeViewController:(id)arg1 didSelectRouteToCurrentSearchResultWithMode:(unsigned)arg2 ;
-(void)placeViewControllerDidSelectDisplayedAddress:(id)arg1 ;
-(char)placeViewController:(id)arg1 shouldOpenHomePage:(id)arg2 ;
-(void)reservationInfo:(id)arg1 makeReservationForSelectedTimeAtIndex:(unsigned)arg2 ;
@end

