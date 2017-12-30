/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 4:28:55 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PreferenceBundles/AccessibilitySettings.bundle/AccessibilitySettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AccessibilitySettings/AccessibilitySettings-Structs.h>
#import <AccessibilitySettings/AXCaptionStyleChooserController.h>
#import <UIKit/UITextFieldDelegate.h>

@class NSString;

@interface AXCaptioningThemeStyleController : AXCaptionStyleChooserController <UITextFieldDelegate> {

	CFStringRef _previousActiveProfile;
	char _shouldSaveProfile;
	CFStringRef profileId;
	CFStringRef previousProfileId;
	NSString* _originalName;

}

@property (nonatomic,retain) CFStringRef previousProfileId; 
@property (nonatomic,retain) NSString * originalName;                    //@synthesize originalName=_originalName - In the implementation block
@property (nonatomic,retain) CFStringRef profileId; 
@property (assign,nonatomic) char shouldSaveProfile;                     //@synthesize shouldSaveProfile=_shouldSaveProfile - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setShouldSaveProfile:(char)arg1 ;
-(void)setPreviousProfileId:(CFStringRef)arg1 ;
-(void)_savePressed:(id)arg1 ;
-(void)_settingsChanged:(id)arg1 ;
-(id)_nameForTransparency:(CFNumberRef)arg1 transparencyType:(int)arg2 ;
-(id)_nameForColor:(CGColorRef)arg1 colorType:(int)arg2 ;
-(id)profileName:(id)arg1 ;
-(void)setProfileName:(id)arg1 specifier:(id)arg2 ;
-(id)windowTransparency:(id)arg1 ;
-(id)textTransparency:(id)arg1 ;
-(void)setCaptioningEnabled:(id)arg1 specifier:(id)arg2 ;
-(CFStringRef)previousProfileId;
-(id)textEdgeStyle:(id)arg1 ;
-(id)captioningEnabled:(id)arg1 ;
-(id)textColor:(id)arg1 ;
-(id)backgroundColor:(id)arg1 ;
-(char)shouldSaveProfile;
-(id)windowColor:(id)arg1 ;
-(id)captionSize:(id)arg1 ;
-(id)backgroundTransparency:(id)arg1 ;
-(id)textFont:(id)arg1 ;
-(void)dealloc;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(void)textFieldDidEndEditing:(id)arg1 ;
-(char)textFieldShouldReturn:(id)arg1 ;
-(void)setOriginalName:(NSString *)arg1 ;
-(void)willBecomeActive;
-(void)_updateTitle;
-(void)setProfileId:(CFStringRef)arg1 ;
-(CFStringRef)profileId;
-(NSString *)originalName;
-(id)specifiers;
@end

