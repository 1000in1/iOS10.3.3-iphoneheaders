/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:32 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/SSPurchasableItem.h>

@interface SSPurchasableAppItem : SSPurchasableItem
+(id)allPropertyKeys;
+(id)itemsFromDatabase:(id)arg1 forAccount:(long long)arg2 matching:(id)arg3 sortedBy:(id)arg4 sortAscending:(char)arg5 ;
+(id)allItemsFromDatabase:(id)arg1 forAccount:(long long)arg2 sortedBy:(id)arg3 sortAscending:(char)arg4 ;
+(id)sortByNameKey;
+(id)databaseTable;
-(id)iconURL;
-(int)contentRatingFlags;
-(id)iconTitle;
-(char)isFamilyShareable;
-(char)isNewsstand;
-(id)longTitle;
-(unsigned)minimumOS;
-(id)ovalIconURLString;
-(char)supportsIPad;
-(char)supportsIPhone;
-(id)redownloadParams;
-(id)humanReadableVersion;
-(long long)iTunesVersion;
-(id)description;
-(id)category;
-(id)companyName;
-(id)bundleID;
-(char)hasMessagesExtension;
-(char)isHiddenFromSpringBoard;
-(id)accountIdentifier;
@end
