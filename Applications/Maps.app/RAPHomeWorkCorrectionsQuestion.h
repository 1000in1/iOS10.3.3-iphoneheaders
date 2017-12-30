/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:42 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <Maps/RAPQuestion.h>
#import <Maps/RAPMenuItem.h>

@protocol MKMapServiceTicket;
@class PlaceCardItem, GEOPDPlace, NSString, UIImage;

@interface RAPHomeWorkCorrectionsQuestion : RAPQuestion <RAPMenuItem> {

	char _markedForDeletion;
	int _addressType;
	PlaceCardItem* _placeCardItem;
	id<MKMapServiceTicket> _serviceTicket;
	GEOPDPlace* _reportedPlace;
	CLLocationCoordinate2D _originalCoordinate;
	CLLocationCoordinate2D _correctedCoordinate;

}

@property (nonatomic,readonly) int addressType;                                              //@synthesize addressType=_addressType - In the implementation block
@property (nonatomic,readonly) PlaceCardItem * placeCardItem;                                //@synthesize placeCardItem=_placeCardItem - In the implementation block
@property (assign,nonatomic) CLLocationCoordinate2D originalCoordinate;                      //@synthesize originalCoordinate=_originalCoordinate - In the implementation block
@property (assign,nonatomic) CLLocationCoordinate2D correctedCoordinate;                     //@synthesize correctedCoordinate=_correctedCoordinate - In the implementation block
@property (nonatomic,retain) id<MKMapServiceTicket> serviceTicket;                           //@synthesize serviceTicket=_serviceTicket - In the implementation block
@property (nonatomic,retain) GEOPDPlace * reportedPlace;                                     //@synthesize reportedPlace=_reportedPlace - In the implementation block
@property (assign,getter=isMarkedForDeletion,nonatomic) char markedForDeletion;              //@synthesize markedForDeletion=_markedForDeletion - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * localizedTitle; 
@property (nonatomic,readonly) NSString * localizedDescription; 
@property (nonatomic,readonly) UIImage * image; 
@property (nonatomic,readonly) int questionCategory; 
@property (nonatomic,readonly) int userAction; 
-(int)questionCategory;
-(void)_fillSubmittableProblem:(id)arg1 ;
-(GEOPDPlace *)reportedPlace;
-(void)setReportedPlace:(GEOPDPlace *)arg1 ;
-(PlaceCardItem *)placeCardItem;
-(id)initWithReport:(id)arg1 parentQuestion:(id)arg2 addressType:(int)arg3 ;
-(id)initWithReport:(id)arg1 parentQuestion:(id)arg2 placeCardItem:(id)arg3 addressType:(int)arg4 ;
-(void)setServiceTicket:(id<MKMapServiceTicket>)arg1 ;
-(id<MKMapServiceTicket>)serviceTicket;
-(CLLocationCoordinate2D)correctedCoordinate;
-(void)setCorrectedCoordinate:(CLLocationCoordinate2D)arg1 ;
-(int)addressType;
-(void)setOriginalCoordinate:(CLLocationCoordinate2D)arg1 ;
-(char)isMarkedForDeletion;
-(char)isComplete;
-(CLLocationCoordinate2D)originalCoordinate;
-(void)setMarkedForDeletion:(char)arg1 ;
-(int)userAction;
@end

