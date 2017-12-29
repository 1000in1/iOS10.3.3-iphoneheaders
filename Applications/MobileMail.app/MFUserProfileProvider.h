/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:59 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSSet;


@protocol MFUserProfileProvider <NSObject>
@property (nonatomic,copy,readonly) NSSet * allEmailAddresses; 
@property (nonatomic,copy,readonly) NSSet * accountsEmailAddresses; 
@property (nonatomic,copy,readonly) NSSet * contactEmailAddresses; 
@required
-(NSSet *)accountsEmailAddresses;
-(NSSet *)contactEmailAddresses;
-(NSSet *)allEmailAddresses;
-(id)contactWithKeysToFetch:(id)arg1;
-(id)contact;

@end
