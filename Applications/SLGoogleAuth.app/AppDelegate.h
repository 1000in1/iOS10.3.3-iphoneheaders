/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:25:28 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/SLGoogleAuth.app/SLGoogleAuth
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SLGoogleAuth/SLGoogleAuth-Structs.h>
#import <UIKit/UIResponder.h>
#import <UIKit/UIApplicationTestingDelegate.h>
#import <libobjc.A.dylib/CNContactViewControllerDelegate.h>
#import <Contacts/CNMultipleUnknownContactsViewControllerDelegate.h>
#import <UIKit/UIApplicationDelegate.h>

@class UIWindow, UIViewController, ContactsSplitViewController, CNContact, NSMutableArray, NSDate, NSString;

@interface AppDelegate : UIResponder <UIApplicationTestingDelegate, CNContactViewControllerDelegate, CNMultipleUnknownContactsViewControllerDelegate, UIApplicationDelegate> {

	UIWindow* _window;
	UIViewController* _rootViewController;
	ContactsSplitViewController* _splitViewController;
	CNContact* _restoredContact;
	CNContact* _restoredUnsavedContact;
	NSMutableArray* _receivedContactsQueue;
	NSDate* _userActivityStartDate;

}

@property (nonatomic,retain) UIViewController * rootViewController;                          //@synthesize rootViewController=_rootViewController - In the implementation block
@property (nonatomic,retain) ContactsSplitViewController * splitViewController;              //@synthesize splitViewController=_splitViewController - In the implementation block
@property (nonatomic,retain) CNContact * restoredContact;                                    //@synthesize restoredContact=_restoredContact - In the implementation block
@property (nonatomic,retain) CNContact * restoredUnsavedContact;                             //@synthesize restoredUnsavedContact=_restoredUnsavedContact - In the implementation block
@property (nonatomic,retain) NSMutableArray * receivedContactsQueue;                         //@synthesize receivedContactsQueue=_receivedContactsQueue - In the implementation block
@property (nonatomic,retain) NSDate * userActivityStartDate;                                 //@synthesize userActivityStartDate=_userActivityStartDate - In the implementation block
@property (nonatomic,retain) UIWindow * window;                                              //@synthesize window=_window - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)_showCardForContactWithIdentifier:(id)arg1 ;
-(CNContact *)restoredContact;
-(void)setRestoredContact:(CNContact *)arg1 ;
-(char)_showCardForContactWithLegacyIdentifier:(int)arg1 ;
-(id)_contactsFromURL:(id)arg1 ;
-(void)_enqueueContacts:(id)arg1 ;
-(void)setRestoredUnsavedContact:(CNContact *)arg1 ;
-(void)setUserActivityStartDate:(NSDate *)arg1 ;
-(NSDate *)userActivityStartDate;
-(char)_showCardForContact:(id)arg1 ;
-(NSMutableArray *)receivedContactsQueue;
-(void)setReceivedContactsQueue:(NSMutableArray *)arg1 ;
-(void)_presentNextContacts;
-(void)saveUnknownPersons:(id)arg1 ;
-(void)cancelModalUnknownPersons:(id)arg1 ;
-(id)_dequeueContacts;
-(void)_dismissContactsAndPresentNext;
-(void)multipleUnknownContactsViewControllerDidComplete:(id)arg1 ;
-(CNContact *)restoredUnsavedContact;
-(UIWindow *)window;
-(id)dataSource;
-(char)application:(id)arg1 openURL:(id)arg2 options:(id)arg3 ;
-(void)applicationDidBecomeActive:(id)arg1 ;
-(char)application:(id)arg1 shouldSaveApplicationState:(id)arg2 ;
-(char)application:(id)arg1 shouldRestoreApplicationState:(id)arg2 ;
-(char)application:(id)arg1 willFinishLaunchingWithOptions:(id)arg2 ;
-(char)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2 ;
-(void)application:(id)arg1 didFailToContinueUserActivityWithType:(id)arg2 error:(id)arg3 ;
-(char)application:(id)arg1 willContinueUserActivityWithType:(id)arg2 ;
-(char)application:(id)arg1 continueUserActivity:(id)arg2 restorationHandler:(/*^block*/id)arg3 ;
-(UIViewController *)rootViewController;
-(void)setWindow:(UIWindow *)arg1 ;
-(void)setRootViewController:(UIViewController *)arg1 ;
-(void)application:(id)arg1 performActionForShortcutItem:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)application:(id)arg1 willEncodeRestorableStateWithCoder:(id)arg2 ;
-(void)application:(id)arg1 didDecodeRestorableStateWithCoder:(id)arg2 ;
-(ContactsSplitViewController *)splitViewController;
-(char)application:(id)arg1 runTest:(id)arg2 options:(id)arg3 ;
-(void)setSplitViewController:(ContactsSplitViewController *)arg1 ;
-(char)_handleURL:(id)arg1 ;
-(void)contactViewController:(id)arg1 didCompleteWithContact:(id)arg2 ;
@end

