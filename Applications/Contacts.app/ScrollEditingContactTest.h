/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:51 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Contacts.app/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Contacts/ContactsTest.h>
#import <libobjc.A.dylib/CNContactContentViewControllerDelegate.h>

@class CNTestNavigationControllerDelegate, NSString;

@interface ScrollEditingContactTest : ContactsTest <CNContactContentViewControllerDelegate> {

	CNTestNavigationControllerDelegate* _navControllerDelegate;

}

@property (nonatomic,retain) CNTestNavigationControllerDelegate * navControllerDelegate;              //@synthesize navControllerDelegate=_navControllerDelegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)prepareForTestWithOptions:(id)arg1 ;
-(void)didShow:(id)arg1 ;
-(void)setNavControllerDelegate:(CNTestNavigationControllerDelegate *)arg1 ;
-(CNTestNavigationControllerDelegate *)navControllerDelegate;
-(void)editAndScrollContactViewController:(id)arg1 ;
-(void)prepareForNextTest;
@end

