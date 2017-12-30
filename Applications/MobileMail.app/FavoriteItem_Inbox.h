/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:57 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileMail/FavoriteItem.h>

@class MailAccount;

@interface FavoriteItem_Inbox : FavoriteItem {

	MailAccount* _account;

}
-(id)representingMailbox;
-(void)wasSelected:(id)arg1 indexPath:(id)arg2 accessoryTapped:(char)arg3 ;
-(id)persistentIdForMigration;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)initWithDictionary:(id)arg1 ;
-(char)isVisible;
-(id)dictionaryRepresentation;
-(id)displayName;
-(id)criterion;
-(id)account;
-(id)initWithAccount:(id)arg1 ;
-(id)defaultIcon;
-(void)configureCell:(id)arg1 ;
@end

