/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:25:34 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/SiriViewService.app/SiriViewService
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AFUIDebugControllerDelegate
@required
-(void)debugController:(id)arg1 stateDidChangeWithAddViews:(id)arg2;
-(id)presentedViewControllerForDebugController;
-(void)debugController:(id)arg1 wantsPresentViewController:(id)arg2;
-(void)debugController:(id)arg1 wantsDismissViewController:(id)arg2;
-(void)getScreenshotImageForDebugController:(id)arg1 withCompletion:(/*^block*/id)arg2;
-(void)debugController:(id)arg1 openURL:(id)arg2;

@end

