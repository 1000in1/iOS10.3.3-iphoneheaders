/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:53 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/AFContextProvider.h>

@class CNContactStore, MFConversationCurrentVisibleMessageStrategy;

@interface MFConversationAssistantContextProvider : NSObject <AFContextProvider> {

	CNContactStore* _contactStore;
	MFConversationCurrentVisibleMessageStrategy* _visibleMessageStrategy;

}

@property (nonatomic,retain) CNContactStore * contactStore;                                                     //@synthesize contactStore=_contactStore - In the implementation block
@property (nonatomic,retain) MFConversationCurrentVisibleMessageStrategy * visibleMessageStrategy;              //@synthesize visibleMessageStrategy=_visibleMessageStrategy - In the implementation block
-(MFConversationCurrentVisibleMessageStrategy *)visibleMessageStrategy;
-(id)_saPersonAttributesFromEmailAddresses:(id)arg1 ;
-(id)initWithConversationVisbleMessageStrategy:(id)arg1 ;
-(void)setVisibleMessageStrategy:(MFConversationCurrentVisibleMessageStrategy *)arg1 ;
-(void)dealloc;
-(CNContactStore *)contactStore;
-(void)setContactStore:(CNContactStore *)arg1 ;
-(char)allowContextProvider:(id)arg1 ;
-(id)getCurrentContext;
@end

