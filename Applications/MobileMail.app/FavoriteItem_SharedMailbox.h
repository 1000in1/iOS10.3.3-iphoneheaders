/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:57 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileMail/FavoriteItem.h>

@interface FavoriteItem_SharedMailbox : FavoriteItem {

	unsigned _sourceType;

}

@property (nonatomic,readonly) unsigned sourceType;              //@synthesize sourceType=_sourceType - In the implementation block
-(void)wasSelected:(id)arg1 indexPath:(id)arg2 accessoryTapped:(char)arg3 ;
-(id)badgeCountString;
-(id)applicationShortcutIcon;
-(id)persistentIdForMigration;
-(id)sharedMailboxController;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)initWithDictionary:(id)arg1 ;
-(char)isVisible;
-(id)dictionaryRepresentation;
-(unsigned)sourceType;
-(id)displayName;
-(id)criterion;
-(id)initWithSourceType:(unsigned)arg1 ;
-(id)defaultIcon;
-(void)configureCell:(id)arg1 ;
@end

