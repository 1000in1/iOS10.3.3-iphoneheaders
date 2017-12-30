/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 6:38:15 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Messages/iMessageBalloons/FMFBalloonProvider.bundle/FMFBalloonProvider
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FMFBalloonProvider/FMFMapViewControllerDelegate.h>
#import <FMFBalloonProvider/FMFBalloonViewDelegate.h>
#import <FMFBalloonProvider/CKLocationSharingClient.h>
#import <FMFBalloonProvider/FMFBalloonDataSourceDelegate.h>
#import <DigitalTouchBalloonProvider/CKTranscriptBalloonPluginController.h>

@protocol CKLocationSharingDelegate;
@class IMHandle, UIViewController, FMFBalloonDataSource, FMFBalloonView, FMFMapViewController, NSString;

@interface FMFBalloonController : NSObject <FMFMapViewControllerDelegate, FMFBalloonViewDelegate, CKLocationSharingClient, FMFBalloonDataSourceDelegate, CKTranscriptBalloonPluginController> {

	FMFBalloonDataSource* _dataSource;
	FMFBalloonView* _balloonView;
	FMFMapViewController* _mapViewController;
	id<CKLocationSharingDelegate> _locationSharingDelegate;

}

@property (nonatomic,retain) FMFBalloonDataSource * dataSource;                                           //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,retain) FMFBalloonView * balloonView;                                                //@synthesize balloonView=_balloonView - In the implementation block
@property (nonatomic,retain) FMFMapViewController * mapViewController;                                    //@synthesize mapViewController=_mapViewController - In the implementation block
@property (nonatomic,__weak,readonly) id<CKLocationSharingDelegate> locationSharingDelegate;              //@synthesize locationSharingDelegate=_locationSharingDelegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) char locationSharingHasExpired; 
@property (readonly) IMHandle * locationSharingHandle; 
@property (nonatomic,readonly) char allowsReusablePluginViews; 
@property (nonatomic,readonly) UIView*<CKTranscriptPluginView> pluginContentView; 
@property (nonatomic,copy) id updateSnapshot; 
@property (nonatomic,readonly) char isInteractive; 
@property (nonatomic,readonly) char wantsTranscriptTimestampDrawer; 
@property (nonatomic,readonly) char wantsTranscriptGroupMonograms; 
@property (nonatomic,readonly) char wantsBalloonGradient; 
@property (nonatomic,readonly) char wantsOutline; 
@property (nonatomic,readonly) UIViewController * contentViewController; 
-(void)setLocationSharingDelegate:(id<CKLocationSharingDelegate>)arg1 ;
-(id<CKLocationSharingDelegate>)locationSharingDelegate;
-(char)locationSharingHasExpired;
-(void)shareButtonTapped;
-(IMHandle *)locationSharingHandle;
-(int)currentFMFBalloonState;
-(void)ignoreButtonTapped;
-(void)datasource:(id)arg1 didUpdateState:(int)arg2 oldState:(int)arg3 ;
-(void)_handleFriendshipStatusChangedNotification:(id)arg1 ;
-(void)_handleLocationChangedNotification:(id)arg1 ;
-(void)fmfBalloonViewDidLayoutSubviews;
-(void)setDataSource:(FMFBalloonDataSource *)arg1 ;
-(void)dealloc;
-(FMFBalloonDataSource *)dataSource;
-(char)isInteractive;
-(UIViewController *)contentViewController;
-(FMFBalloonView *)balloonView;
-(void)setBalloonView:(FMFBalloonView *)arg1 ;
-(id)initWithDataSource:(id)arg1 isFromMe:(char)arg2 ;
-(UIView*<CKTranscriptPluginView>)pluginContentView;
-(FMFMapViewController *)mapViewController;
-(void)setMapViewController:(FMFMapViewController *)arg1 ;
-(void*)annotationABRecordForHandle:(id)arg1 ;
-(char)wantsEdgeToEdgeLayout;
-(char)wantsTranscriptGroupMonograms;
-(id)createNewPluginView;
-(Class)pluginViewClassType;
-(char)allowsReusablePluginViews;
-(void)pluginViewDidEnterReuseQueue:(id)arg1 ;
-(char)wantsBalloonGradient;
-(char)wantsTranscriptTimestampDrawer;
@end

