/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:56:56 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/Support/itunescloudd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <itunescloudd/JaliscoImporter.h>

@class JaliscoAppLibrary, SSAppPurchaseHistoryDatabase, NSNumber;

@interface JaliscoAppsImporter : JaliscoImporter {

	JaliscoAppLibrary* _appCloudLibrary;
	SSAppPurchaseHistoryDatabase* _purchaseHistoryDatabase;
	NSNumber* _familyMemberStoreID;

}
+(id)oversizeLogCategory;
+(id)logCategory;
-(id)metadataKeys;
-(id)queryFilter;
-(id)purchaseTokens;
-(char)includeFlavors;
-(unsigned)onDiskRevision;
-(id)updateLibraryFromRevision:(unsigned)arg1 toRevision:(unsigned)arg2 withResponse:(id)arg3 ;
-(id)initWithLibrary:(id)arg1 purchaseHistoryDatabase:(id)arg2 familyMemberStoreID:(id)arg3 ;
-(void)_importTracksFromItemsResponseData:(id)arg1 ;
-(char)includeHiddenItems;
-(id)familyMemberStoreID;
@end

