/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 6:38:32 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/NanoPreferenceBundles/Customization/NTKCustomization.bundle/NTKCustomization
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NTKCustomization/NTKCCFacesArrayGalleryCollection.h>
#import <NTKCustomization/NTKCompanionFeaturedComplicationsAppLibraryObserver.h>

@class NSArray, NTKCompanionFeaturedComplicationsAppLibrary, NSString;

@interface NTKCCComplicationGalleryCollection : NTKCCFacesArrayGalleryCollection <NTKCompanionFeaturedComplicationsAppLibraryObserver> {

	NSArray* _apps;
	NTKCompanionFeaturedComplicationsAppLibrary* _appLibrary;

}

@property (nonatomic,retain) NTKCompanionFeaturedComplicationsAppLibrary * appLibrary;              //@synthesize appLibrary=_appLibrary - In the implementation block
@property (nonatomic,readonly) NSArray * apps; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_updateApps;
-(void)_updateAppsSuppressingNotification:(char)arg1 ;
-(id)_availableFaceStyles;
-(id)init;
-(void)dealloc;
-(NSArray *)apps;
-(void)appLibrary:(id)arg1 didAddApp:(id)arg2 ;
-(void)appLibrary:(id)arg1 didUpdateApp:(id)arg2 ;
-(void)appLibrary:(id)arg1 didRemoveApp:(id)arg2 ;
-(void)appLibrary:(id)arg1 didUpdateAppIcon:(id)arg2 ;
-(NTKCompanionFeaturedComplicationsAppLibrary *)appLibrary;
-(void)setAppLibrary:(NTKCompanionFeaturedComplicationsAppLibrary *)arg1 ;
@end

