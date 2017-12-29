/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:39:30 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/PreBoard.app/PreBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@class SBUIAppleLogoView, UILabel, NSString;

@interface PBADataRecoveryProgressViewController : UIViewController {

	SBUIAppleLogoView* _appleLogoView;
	UILabel* _statusLabel;
	NSString* _statusText;
	float _progress;

}

@property (assign,nonatomic) float progress;                   //@synthesize progress=_progress - In the implementation block
@property (nonatomic,copy) NSString * statusText;              //@synthesize statusText=_statusText - In the implementation block
-(void)didReceiveMemoryWarning;
-(void)loadView;
-(void)setProgress:(float)arg1 ;
-(void)viewDidLoad;
-(float)progress;
-(NSString *)statusText;
-(void)setStatusText:(NSString *)arg1 ;
@end
