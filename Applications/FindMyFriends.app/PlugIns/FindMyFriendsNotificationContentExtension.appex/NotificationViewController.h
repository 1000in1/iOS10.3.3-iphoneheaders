/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:15 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/FindMyFriends.app/PlugIns/FindMyFriendsNotificationContentExtension.appex/FindMyFriendsNotificationContentExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FindMyFriendsNotificationContentExtension/FindMyFriendsNotificationContentExtension-Structs.h>
#import <UIKit/UIViewController.h>
#import <libobjc.A.dylib/UNNotificationContentExtension.h>
#import <libobjc.A.dylib/FMFSessionDelegate.h>

@class UIColor, FMFHandle, CLLocation, UIImageView, FMAnnotationView, NotificationOverlayView, FMFSession, CNMonogrammer, NSString;

@interface NotificationViewController : UIViewController <UNNotificationContentExtension, FMFSessionDelegate> {

	char _isFenceLocation;
	char _isGeneratingMapSnapshot;
	char _shouldHideContent;
	FMFHandle* _handle;
	CLLocation* _location;
	UIImageView* _mapImageView;
	FMAnnotationView* _annotationView;
	NotificationOverlayView* _notificationOverlayView;
	FMFSession* _session;
	CNMonogrammer* _monogrammer;

}

@property (nonatomic,retain) FMFHandle * handle;                                                    //@synthesize handle=_handle - In the implementation block
@property (nonatomic,retain) CLLocation * location;                                                 //@synthesize location=_location - In the implementation block
@property (assign,nonatomic,__weak) UIImageView * mapImageView;                                     //@synthesize mapImageView=_mapImageView - In the implementation block
@property (nonatomic,retain) FMAnnotationView * annotationView;                                     //@synthesize annotationView=_annotationView - In the implementation block
@property (assign,nonatomic,__weak) NotificationOverlayView * notificationOverlayView;              //@synthesize notificationOverlayView=_notificationOverlayView - In the implementation block
@property (nonatomic,retain) FMFSession * session;                                                  //@synthesize session=_session - In the implementation block
@property (assign,nonatomic) char isFenceLocation;                                                  //@synthesize isFenceLocation=_isFenceLocation - In the implementation block
@property (assign,nonatomic) char isGeneratingMapSnapshot;                                          //@synthesize isGeneratingMapSnapshot=_isGeneratingMapSnapshot - In the implementation block
@property (nonatomic,retain) CNMonogrammer * monogrammer;                                           //@synthesize monogrammer=_monogrammer - In the implementation block
@property (assign,nonatomic) char shouldHideContent;                                                //@synthesize shouldHideContent=_shouldHideContent - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned mediaPlayPauseButtonType; 
@property (nonatomic,readonly) CGRect mediaPlayPauseButtonFrame; 
@property (nonatomic,copy,readonly) UIColor * mediaPlayPauseButtonTintColor; 
-(id)endDateFromNowForOfferTimespan:(unsigned)arg1 ;
-(NotificationOverlayView *)notificationOverlayView;
-(void)hideNotificationOverlayViewAnimated:(char)arg1 ;
-(char)shouldHideContent;
-(void)hideContent;
-(void)setShouldHideContent:(char)arg1 ;
-(void)setIsFenceLocation:(char)arg1 ;
-(char)isFenceLocation;
-(void)updateMapWithImage:(id)arg1 animated:(char)arg2 hideOverlay:(char)arg3 completion:(/*^block*/id)arg4 ;
-(void)displayNotificationOverlayViewAnimated:(char)arg1 ;
-(void)displayFriendAnnotation;
-(void)addFenceAnnotation;
-(void)setGridMapWithCompletion:(/*^block*/id)arg1 ;
-(void)updateViewsForNoLocation;
-(id)locationComparingCachedLocationWithPushLocation:(id)arg1 ;
-(char)isGeneratingMapSnapshot;
-(void)createMapSnapshot;
-(void)setIsGeneratingMapSnapshot:(char)arg1 ;
-(id)defaultAnnotation;
-(void)setDefaultMapWithCompletion:(/*^block*/id)arg1 ;
-(void)updateViewsForLocation:(id)arg1 ;
-(void)handleOfferRequestForExpiry:(unsigned)arg1 completion:(/*^block*/id)arg2 ;
-(void)requestAccountWithCompletion:(/*^block*/id)arg1 ;
-(void)setNotificationOverlayView:(NotificationOverlayView *)arg1 ;
-(void)dealloc;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(void)viewDidLoad;
-(CLLocation *)location;
-(void)setLocation:(CLLocation *)arg1 ;
-(void)setSession:(FMFSession *)arg1 ;
-(void)setMapImageView:(UIImageView *)arg1 ;
-(UIImageView *)mapImageView;
-(void)didReceiveLocation:(id)arg1 ;
-(void)didFailToFetchLocationForHandle:(id)arg1 withError:(id)arg2 ;
-(void)connectionError:(id)arg1 ;
-(void)setAnnotationView:(FMAnnotationView *)arg1 ;
-(FMAnnotationView *)annotationView;
-(CNMonogrammer *)monogrammer;
-(void)setHandle:(FMFHandle *)arg1 ;
-(FMFSession *)session;
-(FMFHandle *)handle;
-(void)destroySession;
-(void)setContact:(id)arg1 ;
-(void)setMonogrammer:(CNMonogrammer *)arg1 ;
-(void)didReceiveNotification:(id)arg1 ;
-(void)didReceiveNotificationResponse:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

