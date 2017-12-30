/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:25:31 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Setup.app/Setup
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Setup/BuddyController.h>

@protocol BuddyControllerDelegate;
@class BuddyAppleIDFindMyPhonePage, NSString;

@interface BuddyAppleIDFMiPUpdateController : NSObject <BuddyController> {

	BuddyAppleIDFindMyPhonePage* _findMyPhonePage;
	id<BuddyControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<BuddyControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)controllerNeedsToRun;
-(char)controllerAllowsNavigatingBack;
-(char)shouldAllowStartOver;
-(void)setDelegate:(id<BuddyControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<BuddyControllerDelegate>)delegate;
-(id)viewController;
@end

