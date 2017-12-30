/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:03 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/FieldTest.app/FieldTest
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FieldTest/FieldTest-Structs.h>
#import <UIKit/UIApplication.h>
#import <UIKit/UIApplicationDelegate.h>
#import <UIKit/UINavigationControllerDelegate.h>

@class UIWindow, UINavigationController, FieldTestSaveViewController, FieldTestModel, NSDateFormatter, NSString;

@interface FieldTestApp : UIApplication <UIApplicationDelegate, UINavigationControllerDelegate> {

	UIWindow* _window;
	UINavigationController* _navController;
	FieldTestSaveViewController* _saveViewController;
	FieldTestModel* _model;
	char _unsetRSSI;
	char _allowSaveButton;
	NSDateFormatter* _dateFormatter;
	NSString* _updateMessage;
	char allowSaveButton;
	FieldTestSaveViewController* saveViewController;
	UIWindow* window;
	NSString* updateMessage;

}

@property (assign,nonatomic) char allowSaveButton; 
@property (nonatomic,retain) UIWindow * window; 
@property (nonatomic,retain) FieldTestSaveViewController * saveViewController; 
@property (nonatomic,retain) NSString * updateMessage; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setAllowSaveButton:(char)arg1 ;
-(void)_setGSMRSSI:(CFBooleanRef)arg1 ;
-(void)getRSSIPref;
-(void)getSaveButtonPref;
-(void)setUpdateMessage:(NSString *)arg1 ;
-(void)setSaveViewController:(FieldTestSaveViewController *)arg1 ;
-(NSString *)updateMessage;
-(void)updateStatusForViewController:(id)arg1 ;
-(void)showSaveView;
-(void)closeSaveView;
-(void)updateViewControllerFromModel;
-(FieldTestSaveViewController *)saveViewController;
-(char)allowSaveButton;
-(UIWindow *)window;
-(void)applicationDidFinishLaunching:(id)arg1 ;
-(void)setWindow:(UIWindow *)arg1 ;
-(void)applicationWillTerminate;
-(void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(char)arg3 ;
@end

