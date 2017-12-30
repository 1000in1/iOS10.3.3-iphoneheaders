/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 6:40:00 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/SpringBoardPlugins/InCallLockScreen.lockbundle/InCallLockScreen
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CNContactStore;

@interface PHContactsClient : NSObject {

	CNContactStore* _contactStore;

}

@property (retain) CNContactStore * contactStore;              //@synthesize contactStore=_contactStore - In the implementation block
+(id)contactsClient;
+(id)contactsClientWithContactStore:(id)arg1 ;
+(id)suggestedContactsClient;
-(id)contactForCall:(id)arg1 ;
-(id)avatarContactFromAddressBookRecord:(const void*)arg1 ;
-(id)init;
-(CNContactStore *)contactStore;
-(id)initWithContactStore:(id)arg1 ;
-(void)setContactStore:(CNContactStore *)arg1 ;
@end
