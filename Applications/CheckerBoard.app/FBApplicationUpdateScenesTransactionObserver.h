/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:50 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/CheckerBoard.app/CheckerBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBApplicationUpdateScenesTransactionObserver <BSTransactionObserver>
@optional
-(void)transaction:(id)arg1 willLaunchProcess:(id)arg2;
-(void)transaction:(id)arg1 didLaunchProcess:(id)arg2;
-(void)transaction:(id)arg1 didCreateScene:(id)arg2;
-(void)transaction:(id)arg1 willUpdateScene:(id)arg2;
-(void)transaction:(id)arg1 willCommitSceneUpdate:(id)arg2;
-(void)transaction:(id)arg1 didCommitSceneUpdate:(id)arg2;

@end

