/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:42 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MKMapItem, NSSet, NSArray, MKMapCamera;

@interface MapSelectionManagerState : NSObject {

	MKMapItem* _poiMapitem;
	NSSet* _customPOIKeys;
	NSArray* _selectedAnnotations;
	MKMapCamera* _camera;

}

@property (nonatomic,retain) MKMapItem * poiMapitem;                     //@synthesize poiMapitem=_poiMapitem - In the implementation block
@property (nonatomic,retain) NSSet * customPOIKeys;                      //@synthesize customPOIKeys=_customPOIKeys - In the implementation block
@property (nonatomic,retain) NSArray * selectedAnnotations;              //@synthesize selectedAnnotations=_selectedAnnotations - In the implementation block
@property (nonatomic,copy) MKMapCamera * camera;                         //@synthesize camera=_camera - In the implementation block
-(NSSet *)customPOIKeys;
-(MKMapItem *)poiMapitem;
-(void)setCustomPOIKeys:(NSSet *)arg1 ;
-(void)setPoiMapitem:(MKMapItem *)arg1 ;
-(void)setCamera:(MKMapCamera *)arg1 ;
-(NSArray *)selectedAnnotations;
-(void)setSelectedAnnotations:(NSArray *)arg1 ;
-(MKMapCamera *)camera;
@end

