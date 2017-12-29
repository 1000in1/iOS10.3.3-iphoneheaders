/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:39:14 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileSafari.app/MobileSafari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileSafari/MobileSafari-Structs.h>
#import <SafariServices/_SFNavigationBar.h>

@class BrowserToolbar, UnifiedField;

@interface NavigationBar : _SFNavigationBar

@property (nonatomic,readonly) BrowserToolbar * toolbar; 
@property (nonatomic,readonly) UnifiedField * textField; 
-(BrowserToolbar *)toolbar;
-(UnifiedField *)textField;
-(id)toolbarPlacedOnTop;
-(id)newTextField;
-(float)placeholderHorizontalInset;
-(void)setExpanded:(char)arg1 textFieldSelectionRange:(NSRange)arg2 ;
-(void)setTextFieldPlaceHolderColor:(id)arg1 ;
-(void)updateToolbarTintColor;
@end
