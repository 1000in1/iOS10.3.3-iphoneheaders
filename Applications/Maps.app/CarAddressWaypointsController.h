/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:33 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/CarWaypointsController.h>

@class AddressBookAddress, NSString;

@interface CarAddressWaypointsController : CarWaypointsController {

	AddressBookAddress* _address;
	NSString* _title;

}
-(id)initWithAddress:(id)arg1 overridingTitle:(id)arg2 ;
-(id)titleForCurrentDestination;
-(id)subtitleForCurrentDestination;
-(id)destinationWaypoint;
-(id)initWithAddress:(id)arg1 ;
@end

