/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:35 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <Maps/RAPQuestion.h>
#import <Maps/RAPLabelMarkerSelectionProtocol.h>
#import <Maps/RAPMenuItem.h>

@protocol RAPMenuItem, RAPMapStateProtocol;
@class RAPQuestion, VKLabelMarker, NSString, UIImage;

@interface RAPTransitStationAccessPointSelectionQuestion : RAPQuestion <RAPLabelMarkerSelectionProtocol, RAPMenuItem> {

	RAPQuestion*<RAPMenuItem> _followUpQuestion;
	id<RAPMapStateProtocol> _placePickingMapContext;
	VKLabelMarker* _selectedAccessPointMarker;

}

@property (nonatomic,readonly) VKLabelMarker * selectedAccessPointMarker;               //@synthesize selectedAccessPointMarker=_selectedAccessPointMarker - In the implementation block
@property (nonatomic,readonly) SCD_Struct_RA12 placePickingMapRect; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) int analyticTarget; 
@property (nonatomic,readonly) int backAction; 
@property (nonatomic,readonly) NSString * localizedPlacePickingPrompt; 
@property (nonatomic,readonly) unsigned placePickingPreferredMapType; 
@property (nonatomic,readonly) RAPQuestion*<RAPMenuItem> followUpQuestion;              //@synthesize followUpQuestion=_followUpQuestion - In the implementation block
@property (nonatomic,readonly) int featureType; 
@property (nonatomic,copy) id<RAPMapStateProtocol> placePickingMapContext;              //@synthesize placePickingMapContext=_placePickingMapContext - In the implementation block
@property (nonatomic,readonly) NSString * localizedTitle; 
@property (nonatomic,readonly) NSString * localizedDescription; 
@property (nonatomic,readonly) UIImage * image; 
@property (nonatomic,readonly) int questionCategory; 
@property (nonatomic,readonly) int userAction; 
-(int)analyticTarget;
-(int)questionCategory;
-(RAPQuestion*<RAPMenuItem>)followUpQuestion;
-(char)_isRecursivelyComplete;
-(void)_fillSubmittableProblem:(id)arg1 ;
-(void)setSelectedLabelMarker:(id)arg1 ;
-(NSString *)localizedPlacePickingPrompt;
-(unsigned)placePickingPreferredMapType;
-(id<RAPMapStateProtocol>)placePickingMapContext;
-(void)setPlacePickingMapContext:(id<RAPMapStateProtocol>)arg1 ;
-(SCD_Struct_RA12)placePickingMapRect;
-(void)setSelectedAccessPointMarker:(VKLabelMarker *)arg1 ;
-(VKLabelMarker *)selectedAccessPointMarker;
-(NSString *)localizedTitle;
-(int)featureType;
-(char)isComplete;
-(int)userAction;
@end

