/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:57:51 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/UpNextWidget.framework/PlugIns/UpNext.appex/UpNext
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UpNext/UpNext-Structs.h>
#import <UIKit/UIViewController.h>
#import <libobjc.A.dylib/NCWidgetProviding.h>

@interface UpNext.UpNextWidgetViewController : UIViewController <NCWidgetProviding> {

	 mainViewController;

}
-(id)initWithCoder:(id)arg1 ;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1 ;
-(void)beginRequestWithExtensionContext:(id)arg1 ;
-(void)widgetActiveDisplayModeDidChange:(int)arg1 withMaximumSize:(CGSize)arg2 ;
-(void)widgetPerformUpdate:(/*^block*/id)arg1 ;
@end

