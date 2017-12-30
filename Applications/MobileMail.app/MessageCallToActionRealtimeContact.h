/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:57 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileMail/MessageCallToAction.h>
#import <libobjc.A.dylib/CNContactViewControllerDelegate.h>

@class NSString, SGRealtimeContact;

@interface MessageCallToActionRealtimeContact : MessageCallToAction <CNContactViewControllerDelegate> {

	NSString* _title;
	NSString* _subtitle;

}

@property (nonatomic,retain,readonly) SGRealtimeContact * realtimeContact; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)callToActionForRealtimeContact:(id)arg1 ;
-(id)supplementaryActionTitle;
-(id)confirmationViewController;
-(void)dealloc;
-(int)compare:(id)arg1 ;
-(id)bundleIdentifier;
-(id)title;
-(void)ignore;
-(id)subtitle;
-(void)confirm;
-(id)primaryActionTitle;
-(id)secondaryActionTitle;
-(char)contactViewController:(id)arg1 shouldPerformDefaultActionForContactProperty:(id)arg2 ;
-(void)contactViewController:(id)arg1 didCompleteWithContact:(id)arg2 ;
-(SGRealtimeContact *)realtimeContact;
@end

