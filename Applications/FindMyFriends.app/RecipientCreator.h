/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:15 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/FindMyFriends.app/FindMyFriends
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CNContactStore;

@interface RecipientCreator : NSObject {

	CNContactStore* _contactStore;

}

@property (nonatomic,retain) CNContactStore * contactStore;              //@synthesize contactStore=_contactStore - In the implementation block
+(id)sharedRecipientGenerator;
-(id)recipientWithContact:(id)arg1 address:(id)arg2 ;
-(char)isEmailString:(id)arg1 ;
-(CNContactStore *)contactStore;
-(id)recipientWithAddress:(id)arg1 ;
-(void)setContactStore:(CNContactStore *)arg1 ;
@end

