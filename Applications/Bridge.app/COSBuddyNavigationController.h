/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:47 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Bridge.app/Bridge
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSRootController.h>

@protocol COSBuddyNavigationControllerDelegate;
@interface COSBuddyNavigationController : PSRootController {

	id<COSBuddyNavigationControllerDelegate> _buddyNavDelegate;

}

@property (assign,nonatomic) id<COSBuddyNavigationControllerDelegate> buddyNavDelegate;              //@synthesize buddyNavDelegate=_buddyNavDelegate - In the implementation block
-(void)setBuddyNavDelegate:(id<COSBuddyNavigationControllerDelegate>)arg1 ;
-(id<COSBuddyNavigationControllerDelegate>)buddyNavDelegate;
-(id)popViewControllerAnimated:(char)arg1 ;
-(unsigned)supportedInterfaceOrientations;
-(char)_usesTransitionController;
@end

