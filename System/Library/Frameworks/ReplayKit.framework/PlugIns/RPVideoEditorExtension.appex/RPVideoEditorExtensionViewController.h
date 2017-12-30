/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 7:31:59 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/ReplayKit.framework/PlugIns/RPVideoEditorExtension.appex/RPVideoEditorExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <RPVideoEditorExtension/RPVideoEditorViewControllerDelegate.h>
#import <RPVideoEditorExtension/RPVideoEditorExtensionProtocol.h>

@class RPVideoEditorViewController, NSString, NSURL, UIColor;

@interface RPVideoEditorExtensionViewController : UIViewController <RPVideoEditorViewControllerDelegate, RPVideoEditorExtensionProtocol> {

	RPVideoEditorViewController* _videoEditorViewController;
	NSString* _bundleIdentifier;
	NSString* _appName;
	NSURL* _movieURL;
	NSURL* _fileAttachmentURL;
	NSString* _overrideShareMessage;
	UIColor* _overrideTintColor;

}

@property (nonatomic,retain) RPVideoEditorViewController * videoEditorViewController;              //@synthesize videoEditorViewController=_videoEditorViewController - In the implementation block
@property (nonatomic,retain) NSString * bundleIdentifier;                                          //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,retain) NSString * appName;                                                   //@synthesize appName=_appName - In the implementation block
@property (nonatomic,retain) NSURL * movieURL;                                                     //@synthesize movieURL=_movieURL - In the implementation block
@property (nonatomic,retain) NSURL * fileAttachmentURL;                                            //@synthesize fileAttachmentURL=_fileAttachmentURL - In the implementation block
@property (nonatomic,retain) NSString * overrideShareMessage;                                      //@synthesize overrideShareMessage=_overrideShareMessage - In the implementation block
@property (nonatomic,retain) UIColor * overrideTintColor;                                          //@synthesize overrideTintColor=_overrideTintColor - In the implementation block
-(NSString *)overrideShareMessage;
-(NSURL *)fileAttachmentURL;
-(void)setFileAttachmentURL:(NSURL *)arg1 ;
-(void)setOverrideShareMessage:(NSString *)arg1 ;
-(void)setupChildViewControllers;
-(void)setupVideoEditorController;
-(void)tearDownChildViewControllers;
-(void)setOverrideTintColor:(UIColor *)arg1 ;
-(void)inputItemsFromClientWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setVideoEditorViewController:(RPVideoEditorViewController *)arg1 ;
-(RPVideoEditorViewController *)videoEditorViewController;
-(UIColor *)overrideTintColor;
-(NSString *)bundleIdentifier;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidDisappear:(char)arg1 ;
-(void)viewDidLoad;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(NSString *)appName;
-(void)setAppName:(NSString *)arg1 ;
-(void)setMovieURL:(NSURL *)arg1 ;
-(void)videoEditor:(id)arg1 didFinishWithActivityTypes:(id)arg2 ;
-(NSURL *)movieURL;
@end
