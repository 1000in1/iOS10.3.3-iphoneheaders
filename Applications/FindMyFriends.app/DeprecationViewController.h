/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:14 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/FindMyFriends.app/FindMyFriends
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@class NSURL, MKMapView;

@interface DeprecationViewController : UIViewController {

	NSURL* _url;
	MKMapView* _mapView;

}

@property (nonatomic,retain) MKMapView * mapView;              //@synthesize mapView=_mapView - In the implementation block
@property (nonatomic,retain) NSURL * url;                      //@synthesize url=_url - In the implementation block
-(void)updateNow:(id)arg1 ;
-(void)signout:(id)arg1 ;
-(NSURL *)url;
-(void)viewDidLoad;
-(void)setUrl:(NSURL *)arg1 ;
-(void)setMapView:(MKMapView *)arg1 ;
-(MKMapView *)mapView;
@end

