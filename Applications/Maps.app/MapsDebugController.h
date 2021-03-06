/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:40 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/MapsDebugTopLevelValuesViewController.h>
#import <libobjc.A.dylib/GEOResourceManifestTileGroupObserver.h>

@class NSMutableArray, NSString;

@interface MapsDebugController : MapsDebugTopLevelValuesViewController <GEOResourceManifestTileGroupObserver> {

	NSMutableArray* _viewControllersToReloadOnTileGroupChange;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)applyAllPendingDebugSettings;
-(void)prepareContent;
-(id)init;
-(void)dealloc;
-(void)resourceManifestManagerDidChangeActiveTileGroup:(id)arg1 ;
@end

