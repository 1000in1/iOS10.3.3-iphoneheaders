/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 4:29:22 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PreferenceBundles/Wallpaper.bundle/Wallpaper
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PSController <PSStateRestoration>
@optional
+(void)validateSpecifier:(id)arg1;
+(void)formatSearchEntries:(id)arg1 parent:(id)arg2;
+(id)searchBundle;
-(void)highlightSpecifierWithID:(id)arg1;
-(char)prepareHandlingURLForSpecifierID:(id)arg1 resourceDictionary:(id)arg2 animatePush:(char*)arg3;
-(void)pushController:(id)arg1 animate:(char)arg2;
-(void)pushController:(id)arg1;

@required
-(id)specifier;
-(void)suspend;
-(void)setSpecifier:(id)arg1;
-(id)rootController;
-(void)setRootController:(id)arg1;
-(void)showController:(id)arg1;
-(void)showController:(id)arg1 animate:(char)arg2;
-(void)handleURL:(id)arg1;
-(void)setPreferenceValue:(id)arg1 specifier:(id)arg2;
-(id)readPreferenceValue:(id)arg1;
-(void)didLock;
-(void)willUnlock;
-(void)didUnlock;
-(void)didWake;
-(void)willResignActive;
-(void)willBecomeActive;
-(void)statusBarWillAnimateByHeight:(float)arg1;
-(void)setParentController:(id)arg1;
-(id)parentController;

@end

