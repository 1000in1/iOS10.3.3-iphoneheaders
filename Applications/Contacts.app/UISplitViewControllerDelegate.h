/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:51 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Contacts.app/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol UISplitViewControllerDelegate
@optional
-(char)splitViewController:(id)arg1 shouldHideViewController:(id)arg2 inOrientation:(int)arg3;
-(void)splitViewController:(id)arg1 willShowViewController:(id)arg2 invalidatingBarButtonItem:(id)arg3;
-(void)splitViewController:(id)arg1 willHideViewController:(id)arg2 withBarButtonItem:(id)arg3 forPopoverController:(id)arg4;
-(void)splitViewController:(id)arg1 popoverController:(id)arg2 willPresentViewController:(id)arg3;
-(char)splitViewController:(id)arg1 showViewController:(id)arg2 sender:(id)arg3;
-(char)splitViewController:(id)arg1 showDetailViewController:(id)arg2 sender:(id)arg3;
-(char)splitViewController:(id)arg1 collapseSecondaryViewController:(id)arg2 ontoPrimaryViewController:(id)arg3;
-(id)splitViewController:(id)arg1 separateSecondaryViewControllerFromPrimaryViewController:(id)arg2;
-(id)primaryViewControllerForCollapsingSplitViewController:(id)arg1;
-(id)primaryViewControllerForExpandingSplitViewController:(id)arg1;
-(unsigned)splitViewControllerSupportedInterfaceOrientations:(id)arg1;
-(int)splitViewControllerPreferredInterfaceOrientationForPresentation:(id)arg1;
-(void)splitViewController:(id)arg1 willChangeToDisplayMode:(int)arg2;
-(int)targetDisplayModeForActionInSplitViewController:(id)arg1;

@end

